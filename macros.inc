##############################################################################
# IA32_Intel/x86-64_Intel:	Intel Pentium with Linux using Intel compiler 11.
##############################################################################
F90_SER = ifort
F90_OMP = ifort
F90_MPI = mpiifort
FLAGS_OPT = -O2
FLAGS_MSC = -W0 -assume byterecl -traceback -diag-disable 8290 -diag-disable 8291 -diag-disable 8293
FLAGS90_MSC = $(FLAGS_MSC)
FLAGS_DYN = -fPIC
FLAGS_SER =
FLAGS_OMP = -openmp
FLAGS_OMP =
FLAGS_MPI =
NETCDFROOT = /opt/nesi/CS400_centos7_bdw/netCDF/4.7.3-iimpi-2020a
NETCDFFROOT = /opt/nesi/CS400_centos7_bdw/netCDF-Fortran/4.5.2-iimpi-2020a
INCS_SER = -I$(NETCDFROOT)/include -I$(NETCDFFROOT)/include 
INCS_OMP = -I$(NETCDFROOT)/include -I$(NETCDFFROOT)/include
INCS_MPI = -I$(NETCDFROOT)/include -I$(NETCDFFROOT)/include
LIBS_SER = -L$(NETCDFROOT)/lib -L$(NETCDFFROOT)/lib -lnetcdff -lnetcdf -L./
LIBS_OMP = -L$(NETCDFROOT)/lib -L$(NETCDFFROOT)/lib -lnetcdff -lnetcdf -L./
LIBS_MPI = -L$(NETCDFROOT)/lib -L$(NETCDFFROOT)/lib -lnetcdff -lnetcdf -L./
NCF_OBJS = nctablemd.o agioncmd.o swn_outnc.o
O_DIR = ../work/odir4/
OUT = -o 
EXTO = o
MAKE = make
RM = rm -f
swch = -unix 
