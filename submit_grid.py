#!/storage/gpfs_lhcb_t3_01/lhcb_soft/lcg/external/Python/2.6.5p2/x86_64-slc5-gcc43-opt/bin/python
import os, thread, threading, time, shelve

#WORKING DIRECTORIESr
workdir=os.getenv('PWD')+'/'
jobsdir=workdir+'outGrid/'

# Function for job submission inside thread
def submitJobs(joblist = [], dirac = None, submittedJobs = [], flags = [], id = 0):
  for j in joblist:
    result = dirac.submit(j['Job'])
    if result['OK']:
      jobID = result['Value']
      jobDict = {}
      jobDict['State'] = 'Submitted'
      jobDict['Name']  = j['Name']
      jobDict['Retrieved'] = '0'
      jobDict['SubmitTime'] = time.ctime().replace(' ','_')
      submittedJobs[id][jobID] = jobDict
      print result,j['Name']
    else:
      print "Unable to submit",j['Name']
  #FLAG FOR THREAD TERMINATION
  flags[id] = 0

#DIRAC objects instantiation
from DIRAC.Core.Base.Script import parseCommandLine
parseCommandLine()
from LHCbDIRAC.Interfaces.API.DiracLHCb import DiracLHCb
from LHCbDIRAC.Interfaces.API.LHCbJob import LHCbJob
from DIRAC.Interfaces.API.JobRepository import JobRepository

dirac = DiracLHCb()

#Creation of Jobs directory
os.system('if [ ! -d '+jobsdir+' ]; then mkdir '+jobsdir+'; fi')

#JOBS Creation
jobList = []
njobs = 0
mode = "tot"
niter= 10000

for i in range(1,5000):
#for i in range(1,2):
#for i in range(1,2):
  inputList = [workdir+'gammaDK']
#               "CLEO_K3PiScan_2014_pdf.root",
#               "CLEO_K3PiScan_2009_GaussianRise_pdf2.root",
#               "CLEO_KPiPi0Scan_2014_pdf.root",
#               "CLEO_KSKpiScan_2012_Kst_pdf.root"]

#  arg = "tot 1500000000 1";
  arg = "tot 500000000 1";


  j1 = LHCbJob()
  j1.setName('GammaDK.'+mode+'.'+str(i))
  j1.setExecutable('run_gamma.sh',arg,'gamma.log')
  j1.setInputSandbox(inputList)
  j1.setOutputSandbox(['*.root','__postprocesslocations__','std.out','std.err','*.log'])
  j1.setOutputData(['*.root'])
  j1.setCPUTime(172800)
  j1.setBannedSites(['LCG.CERN.ch', 'LCG.CNAF.it', 'LCG.GRIDKA.de', 'LCG.IN2P3.fr', 'LCG.NIKHEF.nl', 'LCG.PIC.es', 'LCG.RAL.uk', 'LCG.SARA.nl'])
 
  jobList.append({ 'Job' : j1, 'Name' : 'Gamma.'+mode+'.'+str(i) })
  

#SPLITTING JOBLIST BY THREAD
nThread = int(10)
if len(jobList) < nThread: nThread = len(jobList)

njobsPerList = len(jobList)/nThread #Number of jobs to submit for each thread

jobListPerThread = [jobList[x:x+njobsPerList] for x in xrange(0, len(jobList), njobsPerList)]

if nThread < len(jobListPerThread):
  nThread = nThread + 1

submittedJobs = [] # LIST FOR SUBMITTED JOBS DICTIONARIES
flags = [] #FLAG FOR THREAD TERMINATION
for i in range(nThread):

  flags.append(1) # flag for ending thread
  submittedJobs.append({})

  try:
    thread.start_new_thread(submitJobs, (jobListPerThread[i], dirac, submittedJobs, flags, i) )#thread submission
  except:
    print "Unable to start thread"


#WAITING FOR THREADS END
while(flags != nThread*[0]):
  print flags,nThread*[0],threading.activeCount()
  time.sleep(10)

repoDB = shelve.open(jobsdir+'repo_DK.db','c',2)

for i in range(nThread):
  for jobID,jobDict in submittedJobs[i].iteritems():
    repoDB[str(jobID)] = jobDict
    print jobID,repoDB[str(jobID)]

repoDB.close()

