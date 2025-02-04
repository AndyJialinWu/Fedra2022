export FEDRA_ROOT=/home/jialwu/fedra2022/Fedra2022
export LD_LIBRARY_PATH=$FEDRA_ROOT/lib:${LD_LIBRARY_PATH}
export PATH=$FEDRA_ROOT/bin:${PATH}
export PYTHONPATH=${PYTHONPATH}:$FEDRA_ROOT/python

cp $FEDRA_ROOT/src/*/*.pcm $FEDRA_ROOT/lib
cp $FEDRA_ROOT/src/*/*/*.pcm $FEDRA_ROOT/lib
cp $FEDRA_ROOT/macros/rootlogon_root6x.C $FEDRA_ROOT/macros/rootlogon.C
cp $FEDRA_ROOT/macros_root6/*.C $FEDRA_ROOT/macros
