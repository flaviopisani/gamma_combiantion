#!/storage/gpfs_lhcb_t3_01/lhcb_soft/lcg/external/Python/2.6.5p2/x86_64-slc5-gcc43-opt/bin/python
import shelve, time

#DIRAC objects instantiation
from DIRAC.Core.Base.Script import parseCommandLine
parseCommandLine()
from LHCbDIRAC.Interfaces.API.DiracLHCb import DiracLHCb
from LHCbDIRAC.Interfaces.API.LHCbJob import LHCbJob
from DIRAC.Interfaces.API.JobRepository import JobRepository


dirac = DiracLHCb()
jobs = shelve.open('outGrid/repo_DK.db','c',2)

result = dirac.status(jobs.keys())
finalReport = {}
if result['OK']:
  newjobs = result['Value']
  for jID,jDict in jobs.iteritems():
    job = jobs[jID]
    if not newjobs.has_key(int(jID)): continue
    newjob = newjobs[int(jID)]
    if newjob.has_key('Status'): job['State'] = newjob['Status']
    if newjob.has_key('Site'): job['Site'] = newjob['Site']
    job['Time'] = time.ctime().replace(' ','_')
    if not finalReport.has_key(job['State']): finalReport[job['State']] = 1
    else: finalReport[job['State']] += 1

    jobs[jID] = job

jobs.close()
    
print finalReport

