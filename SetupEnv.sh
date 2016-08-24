echo "setup"

if [ -n "$USER" ]
then
  echo "hello $USER"
else
  export USER=nobody
fi
if [ -n "$HOME" ]
then
  echo "feel at home"
else
  export HOME=`pwd`
fi
source /cvmfs/lhcb.cern.ch/lib/lhcb/LBSCRIPTS/prod/InstallArea/scripts/LbLogin.sh -c x86_64-slc6-gcc49-opt

#source /cvmfs/lhcb.cern.ch/lib/lhcb/LBSCRIPTS/LBSCRIPTS_v8r6p7/InstallArea/scripts/SetupProject.sh ROOT 6.06.02
source /cvmfs/lhcb.cern.ch/lib/lhcb/LBSCRIPTS/LBSCRIPTS_v8r6p7/InstallArea/scripts/SetupProject.sh LCGCMT 84 ROOT
