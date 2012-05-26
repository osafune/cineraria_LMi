#!/bin/sh
#
# generated.sh - shell script fragment - not very useful on its own
#
# Machine generated for a CPU named "nios2_fast_fpu" as defined in:
# d:\PROJECT\DE0\cineraria_LMi\software\Cineraria_LMi_elfloader2_syslib\..\..\nios2_fpu.ptf
#
# Generated: 2012-01-29 08:50:07.069

# DO NOT MODIFY THIS FILE
#
#   Changing this file will have subtle consequences
#   which will almost certainly lead to a nonfunctioning
#   system. If you do modify this file, be aware that your
#   changes will be overwritten and lost when this file
#   is generated again.
#
# DO NOT MODIFY THIS FILE

# This variable indicates where the PTF file for this design is located
ptf=d:\PROJECT\DE0\cineraria_LMi\software\Cineraria_LMi_elfloader2_syslib\..\..\nios2_fpu.ptf

# This variable indicates whether there is a CPU debug core
nios2_debug_core=yes

# This variable indicates how to connect to the CPU debug core
nios2_instance=0

# This variable indicates the CPU module name
nios2_cpu_name=nios2_fast_fpu

# These variables indicate what the System ID peripheral should hold
sidp=0x10000000
id=0u
timestamp=1327788053u

# Include operating system specific parameters, if they are supplied.

if test -f /cygdrive/c/DEVELOP/ALTERA/11.1/nios2eds/components/altera_hal/build/os.sh ; then
   . /cygdrive/c/DEVELOP/ALTERA/11.1/nios2eds/components/altera_hal/build/os.sh
fi
