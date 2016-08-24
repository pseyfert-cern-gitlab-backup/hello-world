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
