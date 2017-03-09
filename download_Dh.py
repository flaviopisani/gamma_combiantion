#!/storage/gpfs_lhcb_t3_01/lhcb_soft/lcg/external/Python/2.6.5p2/x86_64-slc5-gcc43-opt/bin/python 
import os, thread, threading, time, shelve

#WORKING DIRECTORIESr
workdir=os.getenv('PWD')+'/'
jobsdir=workdir+'outGrid/'

# FUNCTIONS
def getSandbox(requestedStates = None, dirac = None, jobs = [], flags = [], id = 0):

  if requestedStates == None:
    requestedStates = ['Done', 'Failed', 'Completed']#because users dont care about completed
  for job in range(len(jobs)):
    jobID = jobs[job].keys()[0]
    jobDict = jobs[job][jobID]
    destination = jobDict['Name'][0:jobDict['Name'].rfind('.')]
    if jobDict.has_key( 'State' ) and ( jobDict['State'] in requestedStates ):
      if ( jobDict.has_key( 'Retrieved' ) and ( not int( jobDict['Retrieved'] ) ) ) \
         or ( not jobDict.has_key( 'Retrieved' ) ):
        result = dirac.getOutputSandbox( int(jobID), jobsdir+destination )
        if result['OK']:
          jobs[job][jobID]['Retrieved'] = '1'
          jobs[job][jobID]['Sandbox'] = jobsdir+destination+'/'+jobID
          jobs[job][jobID]['Time'] = time.ctime().replace(' ','_')
          print result,jobDict['Name']
          result = dirac.getJobOutputLFNs(jobID)
          if result['OK']: jobs[job][jobID]['LFNs'] = result['Value']
        else:
          print result['Message'],jobDict['Name']
          jobs[job][jobID]['Retrieved'] = '0'
          jobs[job][jobID]['Sandbox'] = ''
          jobs[job][jobID]['Time'] = time.ctime().replace(' ','_')

  flags[id] = 0

#DIRAC objects instantiation
from DIRAC.Core.Base.Script import parseCommandLine
parseCommandLine()
from LHCbDIRAC.Interfaces.API.DiracLHCb import DiracLHCb
from LHCbDIRAC.Interfaces.API.LHCbJob import LHCbJob
from DIRAC.Interfaces.API.JobRepository import JobRepository

dirac = DiracLHCb()

# READING REPOSITORY
repo = shelve.open(jobsdir+'repo_Dh.db','c',2)
jobList = []
downloadStates = ['Done', 'Failed', 'Completed']
for j,jdict in repo.iteritems():
  if jdict['State'] in downloadStates and int(jdict['Retrieved']) == 0:
    jobList.append( { j : jdict } )

#SPLITTING JOBLIST BY THREAD
nThread = int(10)
if nThread > len(jobList) : nThread = len(jobList)
njobsPerList = len(jobList)/nThread #Number of jobs to submit for each thread
jobListPerThread = [jobList[x:x+njobsPerList] for x in xrange(0, len(jobList), njobsPerList)] #list of list for thread

if nThread < len(jobListPerThread):
  nThread = len(jobListPerThread)

flags = [] #FLAG FOR THREAD TERMINATION
for i in range(nThread):

  flags.append(1) # flag for ending thread
  try:
    thread.start_new_thread(getSandbox, (downloadStates, dirac, jobListPerThread[i], flags, i) )#thread submission
  except:
    print "Unable to start thread"


while(flags != nThread*[0]): #check for thread ending
  print flags,nThread*[0],threading.activeCount()
  time.sleep(10)

# MERGING REPOSITORY
for joblist in jobListPerThread:
  for job in joblist:
    jobID = job.keys()[0]
    jobDict = job[jobID]
    outJob = repo[str(jobID)]
    outJob = jobDict
    destination = jobDict['Name'][0:jobDict['Name'].rfind('_')]
    if not int(jobDict['Retrieved']) and os.path.exists(jobsdir+destination+'/'+str(jobID)):
      if jobDict['State'] == 'Failed':
        outJob['Retrieved'] = '1'
      else:
        print "Removing",jobsdir+destination+'/'+str(jobID)
        os.system('rm -rf '+jobsdir+destination+'/'+str(jobID))

    repo[str(jobID)] = outJob


#WRITE FINAL REPOSITORY
repo.close()





