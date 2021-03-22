#!/bin/bash
export MITGCMROOT="/nobackup/asinha5/MITgcm"

cd build_tracer_high/
module load comp-intel/2016.2.181 mpi-hpe/mpt.2.17r13 hdf4/4.2.12 hdf5/1.8.18_mpt netcdf/4.4.1.1_mpt
$MITGCMROOT/tools/genmake2 -mods=/nobackup/asinha5/NA/experiments/ll2960_02_tracer/code_tracer_high/ -optfile=/nobackup/asinha5/NA/experiments/ll2960_02_tracer/code_tracer_high/linux_amd64_ifort+mpi_ice_nas -mpi -rootdir=$MITGCMROOT


make depend
make -j 100


