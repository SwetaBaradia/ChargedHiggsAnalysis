#!/bin/bash
#set -o nounset

JOBDIR=/afs/cern.ch/work/s/sbaradia/public/ChargedHiggs/ChargedHiggsAnalysis/Analysis
APPDIR=/afs/cern.ch/work/s/sbaradia/public/Analysis_mva/CMSSW_9_4_9/src
cd $APPDIR
eval $(scramv1 runtime -sh)
cd /afs/cern.ch/work/s/sbaradia/public/ChargedHiggs/ChargedHiggsAnalysis/MakeJobsAndSend/JobCards_2017_submit1/TTToSemiLeptonic_condorJobs/runlogs
uname -a > ./TTToSemiLeptonic_46.runlog 2>&1
ulimit -c 0
/afs/cern.ch/work/s/sbaradia/public/ChargedHiggs/ChargedHiggsAnalysis/Analysis/multileptonMVA /afs/cern.ch/work/s/sbaradia/public/ChargedHiggs/ChargedHiggsAnalysis/MakeJobsAndSend/JobCards_2017_submit1/TTToSemiLeptonic_condorJobs/TTToSemiLeptonic_46.job >> ./TTToSemiLeptonic_46.runlog 2>&1
