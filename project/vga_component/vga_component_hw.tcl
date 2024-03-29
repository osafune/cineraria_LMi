# TCL File Generated by Component Editor 9.1sp2
# Tue Dec 14 00:00:40 JST 2010
# DO NOT MODIFY


# +-----------------------------------
# | 
# | vga_component "vga_component" v1.0
# | S.OSAFUNE / J-7SYSTEM Works 2010.12.14.00:00:40
# | 
# | 
# | D:/PROJECT/DE0/nios2_fpu/vga_component/vga_component.vhd
# | 
# |    ./vga_component.vhd syn, sim
# |    ./vga_avm.vhd syn, sim
# |    ./vga_linebuffer.vhd syn, sim
# |    ./vga_syncgen.vhd syn, sim
# | 
# +-----------------------------------

# +-----------------------------------
# | request TCL package from ACDS 9.1
# | 
package require -exact sopc 9.1
# | 
# +-----------------------------------

# +-----------------------------------
# | module vga_component
# | 
set_module_property DESCRIPTION ""
set_module_property NAME vga_component
set_module_property VERSION 1.0
set_module_property INTERNAL false
set_module_property GROUP Peripherals/Display
set_module_property AUTHOR "S.OSAFUNE / J-7SYSTEM Works"
set_module_property DISPLAY_NAME vga_component
set_module_property TOP_LEVEL_HDL_FILE vga_component.vhd
set_module_property TOP_LEVEL_HDL_MODULE vga_component
set_module_property INSTANTIATE_IN_SYSTEM_MODULE true
set_module_property EDITABLE true
set_module_property ANALYZE_HDL TRUE
# | 
# +-----------------------------------

# +-----------------------------------
# | files
# | 
add_file vga_component.vhd {SYNTHESIS SIMULATION}
add_file vga_avm.vhd {SYNTHESIS SIMULATION}
add_file vga_linebuffer.vhd {SYNTHESIS SIMULATION}
add_file vga_syncgen.vhd {SYNTHESIS SIMULATION}
# | 
# +-----------------------------------

# +-----------------------------------
# | parameters
# | 
add_parameter LINEOFFSETBYTES INTEGER 2048 ""
set_parameter_property LINEOFFSETBYTES DEFAULT_VALUE 2048
set_parameter_property LINEOFFSETBYTES DISPLAY_NAME LINEOFFSETBYTES
set_parameter_property LINEOFFSETBYTES UNITS None
set_parameter_property LINEOFFSETBYTES ALLOWED_RANGES -2147483648:2147483647
set_parameter_property LINEOFFSETBYTES DESCRIPTION ""
set_parameter_property LINEOFFSETBYTES DISPLAY_HINT ""
set_parameter_property LINEOFFSETBYTES AFFECTS_GENERATION false
set_parameter_property LINEOFFSETBYTES HDL_PARAMETER true
add_parameter H_TOTAL INTEGER 794
set_parameter_property H_TOTAL DEFAULT_VALUE 800
set_parameter_property H_TOTAL DISPLAY_NAME H_TOTAL
set_parameter_property H_TOTAL UNITS None
set_parameter_property H_TOTAL ALLOWED_RANGES -2147483648:2147483647
set_parameter_property H_TOTAL DISPLAY_HINT ""
set_parameter_property H_TOTAL AFFECTS_GENERATION false
set_parameter_property H_TOTAL HDL_PARAMETER true
add_parameter H_SYNC INTEGER 96
set_parameter_property H_SYNC DEFAULT_VALUE 96
set_parameter_property H_SYNC DISPLAY_NAME H_SYNC
set_parameter_property H_SYNC UNITS None
set_parameter_property H_SYNC ALLOWED_RANGES -2147483648:2147483647
set_parameter_property H_SYNC DISPLAY_HINT ""
set_parameter_property H_SYNC AFFECTS_GENERATION false
set_parameter_property H_SYNC HDL_PARAMETER true
add_parameter H_BACKP INTEGER 44
set_parameter_property H_BACKP DEFAULT_VALUE 48
set_parameter_property H_BACKP DISPLAY_NAME H_BACKP
set_parameter_property H_BACKP UNITS None
set_parameter_property H_BACKP ALLOWED_RANGES -2147483648:2147483647
set_parameter_property H_BACKP DISPLAY_HINT ""
set_parameter_property H_BACKP AFFECTS_GENERATION false
set_parameter_property H_BACKP HDL_PARAMETER true
add_parameter H_ACTIVE INTEGER 640
set_parameter_property H_ACTIVE DEFAULT_VALUE 640
set_parameter_property H_ACTIVE DISPLAY_NAME H_ACTIVE
set_parameter_property H_ACTIVE UNITS None
set_parameter_property H_ACTIVE ALLOWED_RANGES -2147483648:2147483647
set_parameter_property H_ACTIVE DISPLAY_HINT ""
set_parameter_property H_ACTIVE AFFECTS_GENERATION false
set_parameter_property H_ACTIVE HDL_PARAMETER true
add_parameter V_TOTAL INTEGER 525
set_parameter_property V_TOTAL DEFAULT_VALUE 525
set_parameter_property V_TOTAL DISPLAY_NAME V_TOTAL
set_parameter_property V_TOTAL UNITS None
set_parameter_property V_TOTAL ALLOWED_RANGES -2147483648:2147483647
set_parameter_property V_TOTAL DISPLAY_HINT ""
set_parameter_property V_TOTAL AFFECTS_GENERATION false
set_parameter_property V_TOTAL HDL_PARAMETER true
add_parameter V_SYNC INTEGER 2
set_parameter_property V_SYNC DEFAULT_VALUE 2
set_parameter_property V_SYNC DISPLAY_NAME V_SYNC
set_parameter_property V_SYNC UNITS None
set_parameter_property V_SYNC ALLOWED_RANGES -2147483648:2147483647
set_parameter_property V_SYNC DISPLAY_HINT ""
set_parameter_property V_SYNC AFFECTS_GENERATION false
set_parameter_property V_SYNC HDL_PARAMETER true
add_parameter V_BACKP INTEGER 33
set_parameter_property V_BACKP DEFAULT_VALUE 33
set_parameter_property V_BACKP DISPLAY_NAME V_BACKP
set_parameter_property V_BACKP UNITS None
set_parameter_property V_BACKP ALLOWED_RANGES -2147483648:2147483647
set_parameter_property V_BACKP DISPLAY_HINT ""
set_parameter_property V_BACKP AFFECTS_GENERATION false
set_parameter_property V_BACKP HDL_PARAMETER true
add_parameter V_ACTIVE INTEGER 480
set_parameter_property V_ACTIVE DEFAULT_VALUE 480
set_parameter_property V_ACTIVE DISPLAY_NAME V_ACTIVE
set_parameter_property V_ACTIVE UNITS None
set_parameter_property V_ACTIVE ALLOWED_RANGES -2147483648:2147483647
set_parameter_property V_ACTIVE DISPLAY_HINT ""
set_parameter_property V_ACTIVE AFFECTS_GENERATION false
set_parameter_property V_ACTIVE HDL_PARAMETER true
# | 
# +-----------------------------------

# +-----------------------------------
# | display items
# | 
# | 
# +-----------------------------------

# +-----------------------------------
# | connection point master_clock
# | 
add_interface master_clock clock end

set_interface_property master_clock ENABLED true

add_interface_port master_clock csi_m1_reset reset Input 1
add_interface_port master_clock csi_m1_clk clk Input 1
# | 
# +-----------------------------------

# +-----------------------------------
# | connection point slave_clock
# | 
add_interface slave_clock clock end

set_interface_property slave_clock ENABLED true

add_interface_port slave_clock csi_s1_clk clk Input 1
# | 
# +-----------------------------------

# +-----------------------------------
# | connection point ext
# | 
add_interface ext conduit end

set_interface_property ext ENABLED true

add_interface_port ext video_clk export Input 1
add_interface_port ext video_rout export Output 5
add_interface_port ext video_gout export Output 5
add_interface_port ext video_bout export Output 5
add_interface_port ext video_hsync_n export Output 1
add_interface_port ext video_vsync_n export Output 1
# | 
# +-----------------------------------

# +-----------------------------------
# | connection point m1
# | 
add_interface m1 avalon start
set_interface_property m1 associatedClock master_clock
set_interface_property m1 burstOnBurstBoundariesOnly false
set_interface_property m1 doStreamReads false
set_interface_property m1 doStreamWrites false
set_interface_property m1 linewrapBursts false

set_interface_property m1 ASSOCIATED_CLOCK master_clock
set_interface_property m1 ENABLED true

add_interface_port m1 avm_m1_address address Output 32
add_interface_port m1 avm_m1_waitrequest waitrequest Input 1
add_interface_port m1 avm_m1_burstcount burstcount Output 10
add_interface_port m1 avm_m1_read read Output 1
add_interface_port m1 avm_m1_readdata readdata Input 32
add_interface_port m1 avm_m1_readdatavalid readdatavalid Input 1
# | 
# +-----------------------------------

# +-----------------------------------
# | connection point s1
# | 
add_interface s1 avalon end
set_interface_property s1 addressAlignment NATIVE
set_interface_property s1 associatedClock slave_clock
set_interface_property s1 burstOnBurstBoundariesOnly false
set_interface_property s1 explicitAddressSpan 0
set_interface_property s1 holdTime 0
set_interface_property s1 isMemoryDevice false
set_interface_property s1 isNonVolatileStorage false
set_interface_property s1 linewrapBursts false
set_interface_property s1 maximumPendingReadTransactions 0
set_interface_property s1 printableDevice false
set_interface_property s1 readLatency 0
set_interface_property s1 readWaitTime 1
set_interface_property s1 setupTime 0
set_interface_property s1 timingUnits Cycles
set_interface_property s1 writeWaitTime 0

set_interface_property s1 ASSOCIATED_CLOCK slave_clock
set_interface_property s1 ENABLED true

add_interface_port s1 avs_s1_address address Input 2
add_interface_port s1 avs_s1_read read Input 1
add_interface_port s1 avs_s1_readdata readdata Output 32
add_interface_port s1 avs_s1_write write Input 1
add_interface_port s1 avs_s1_writedata writedata Input 32
# | 
# +-----------------------------------

# +-----------------------------------
# | connection point irq
# | 
add_interface irq interrupt end
set_interface_property irq associatedAddressablePoint s1

set_interface_property irq ASSOCIATED_CLOCK slave_clock
set_interface_property irq ENABLED true

add_interface_port irq irq_s1 irq Output 1
# | 
# +-----------------------------------
