#!/bin/bash
#set -o nounset

JOBDIR=/afs/cern.ch/work/s/sbaradia/public/ChargedHiggs/ChargedHiggsAnalysis/Analysis
APPDIR=/afs/cern.ch/work/s/sbaradia/public/Analysis_mva/CMSSW_9_4_9/src
cd $APPDIR
eval $(scramv1 runtime -sh)
cd /afs/cern.ch/work/s/sbaradia/public/ChargedHiggs/ChargedHiggsAnalysis/MakeJobsAndSend/JobCards_2017_try1/TTTo2L2Nu_condorJobs/runlogs
uname -a > ./TTTo2L2Nu_3.runlog 2>&1
ulimit -c 0
/afs/cern.ch/work/s/sbaradia/public/ChargedHiggs/ChargedHiggsAnalysis/Analysis/multileptonMVA /afs/cern.ch/work/s/sbaradia/public/ChargedHiggs/ChargedHiggsAnalysis/MakeJobsAndSend/JobCards_2017_try1/TTTo2L2Nu_condorJobs/TTTo2L2Nu_3.job >> ./TTTo2L2Nu_3.runlog 2>&1
