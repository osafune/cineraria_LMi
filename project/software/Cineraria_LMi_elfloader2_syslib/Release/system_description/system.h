/* system.h
 *
 * Machine generated for a CPU named "nios2_fast_fpu" as defined in:
 * d:\PROJECT\DE0\cineraria_LMi\software\Cineraria_LMi_elfloader2_syslib\..\..\nios2_fpu.ptf
 *
 * Generated: 2012-01-29 08:47:00.025
 *
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/*

DO NOT MODIFY THIS FILE

   Changing this file will have subtle consequences
   which will almost certainly lead to a nonfunctioning
   system. If you do modify this file, be aware that your
   changes will be overwritten and lost when this file
   is generated again.

DO NOT MODIFY THIS FILE

*/

/******************************************************************************
*                                                                             *
* License Agreement                                                           *
*                                                                             *
* Copyright (c) 2003 Altera Corporation, San Jose, California, USA.           *
* All rights reserved.                                                        *
*                                                                             *
* Permission is hereby granted, free of charge, to any person obtaining a     *
* copy of this software and associated documentation files (the "Software"),  *
* to deal in the Software without restriction, including without limitation   *
* the rights to use, copy, modify, merge, publish, distribute, sublicense,    *
* and/or sell copies of the Software, and to permit persons to whom the       *
* Software is furnished to do so, subject to the following conditions:        *
*                                                                             *
* The above copyright notice and this permission notice shall be included in  *
* all copies or substantial portions of the Software.                         *
*                                                                             *
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR  *
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,    *
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE *
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER      *
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING     *
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER         *
* DEALINGS IN THE SOFTWARE.                                                   *
*                                                                             *
* This agreement shall be governed in all respects by the laws of the State   *
* of California and by the laws of the United States of America.              *
*                                                                             *
******************************************************************************/

/*
 * system configuration
 *
 */

#define ALT_SYSTEM_NAME "nios2_fpu"
#define ALT_CPU_NAME "nios2_fast_fpu"
#define ALT_CPU_ARCHITECTURE "altera_nios2"
#define ALT_DEVICE_FAMILY "CYCLONEIII"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN_BASE 0x10000080
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_PRESENT
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT_BASE 0x10000080
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_PRESENT
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDERR_BASE 0x10000080
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_PRESENT
#define ALT_CPU_FREQ 133333333
#define ALT_IRQ_BASE NULL
#define ALT_LEGACY_INTERRUPT_API_PRESENT

/*
 * processor configuration
 *
 */

#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_BIG_ENDIAN 0
#define NIOS2_INTERRUPT_CONTROLLER_ID 0

#define NIOS2_ICACHE_SIZE 16384
#define NIOS2_DCACHE_SIZE 8192
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_FLUSHDA_SUPPORTED

#define NIOS2_EXCEPTION_ADDR 0x00000020
#define NIOS2_RESET_ADDR 0x0f000000
#define NIOS2_BREAK_ADDR 0x0f000820

#define NIOS2_HAS_DEBUG_STUB

#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0

/*
 * A define for each class of peripheral
 *
 */

#define __ALTERA_AVALON_TIMER
#define __ALTERA_AVALON_SYSID
#define __ALTERA_AVALON_UART
#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_PIPELINE_BRIDGE
#define __ALTERA_AVALON_EPCS_FLASH_CONTROLLER
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_CFI_FLASH
#define __ALTERA_AVALON_TRI_STATE_BRIDGE
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __PS2_COMPONENT
#define __VGA_COMPONENT
#define __PIXELSIMD
#define __ALTERA_NIOS_CUSTOM_INSTR_FLOATING_POINT
#define __MMCDMA
#define __AVALONIF_SPU

/*
 * systimer configuration
 *
 */

#define SYSTIMER_NAME "/dev/systimer"
#define SYSTIMER_TYPE "altera_avalon_timer"
#define SYSTIMER_BASE 0x10000020
#define SYSTIMER_SPAN 32
#define SYSTIMER_IRQ 0
#define SYSTIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SYSTIMER_ALWAYS_RUN 0
#define SYSTIMER_FIXED_PERIOD 0
#define SYSTIMER_SNAPSHOT 1
#define SYSTIMER_PERIOD 1
#define SYSTIMER_PERIOD_UNITS "ms"
#define SYSTIMER_RESET_OUTPUT 0
#define SYSTIMER_TIMEOUT_PULSE_OUTPUT 0
#define SYSTIMER_LOAD_VALUE 39999
#define SYSTIMER_COUNTER_SIZE 32
#define SYSTIMER_MULT 0.0010
#define SYSTIMER_TICKS_PER_SEC 1000
#define SYSTIMER_FREQ 40000000
#define ALT_MODULE_CLASS_systimer altera_avalon_timer

/*
 * sysid configuration
 *
 */

#define SYSID_NAME "/dev/sysid"
#define SYSID_TYPE "altera_avalon_sysid"
#define SYSID_BASE 0x10000000
#define SYSID_SPAN 8
#define SYSID_ID 0u
#define SYSID_TIMESTAMP 1327788053u
#define SYSID_REGENERATE_VALUES 0
#define ALT_MODULE_CLASS_sysid altera_avalon_sysid

/*
 * sysuart configuration
 *
 */

#define SYSUART_NAME "/dev/sysuart"
#define SYSUART_TYPE "altera_avalon_uart"
#define SYSUART_BASE 0x10000040
#define SYSUART_SPAN 32
#define SYSUART_IRQ 8
#define SYSUART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SYSUART_BAUD 115200
#define SYSUART_DATA_BITS 8
#define SYSUART_FIXED_BAUD 0
#define SYSUART_PARITY 'N'
#define SYSUART_STOP_BITS 1
#define SYSUART_SYNC_REG_DEPTH 2
#define SYSUART_USE_CTS_RTS 1
#define SYSUART_USE_EOP_REGISTER 0
#define SYSUART_SIM_TRUE_BAUD 0
#define SYSUART_SIM_CHAR_STREAM ""
#define SYSUART_RELATIVEPATH 1
#define SYSUART_FREQ 40000000
#define ALT_MODULE_CLASS_sysuart altera_avalon_uart

/*
 * jtag_uart configuration
 *
 */

#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_BASE 0x10000080
#define JTAG_UART_SPAN 8
#define JTAG_UART_IRQ 10
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_READ_CHAR_STREAM ""
#define JTAG_UART_SHOWASCII 1
#define JTAG_UART_RELATIVEPATH 1
#define JTAG_UART_READ_LE 0
#define JTAG_UART_WRITE_LE 0
#define JTAG_UART_ALTERA_SHOW_UNRELEASED_JTAG_UART_FEATURES 1
#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart

/*
 * peripheral_bridge configuration
 *
 */

#define PERIPHERAL_BRIDGE_NAME "/dev/peripheral_bridge"
#define PERIPHERAL_BRIDGE_TYPE "altera_avalon_pipeline_bridge"
#define PERIPHERAL_BRIDGE_BASE 0x10000000
#define PERIPHERAL_BRIDGE_SPAN 8192
#define PERIPHERAL_BRIDGE_IS_DOWNSTREAM 1
#define PERIPHERAL_BRIDGE_IS_UPSTREAM 1
#define PERIPHERAL_BRIDGE_IS_WAITREQUEST 1
#define PERIPHERAL_BRIDGE_ENABLE_ARBITERLOCK 0
#define ALT_MODULE_CLASS_peripheral_bridge altera_avalon_pipeline_bridge

/*
 * epcs_controller configuration
 *
 */

#define EPCS_CONTROLLER_NAME "/dev/epcs_controller"
#define EPCS_CONTROLLER_TYPE "altera_avalon_epcs_flash_controller"
#define EPCS_CONTROLLER_BASE 0x0f000000
#define EPCS_CONTROLLER_SPAN 2048
#define EPCS_CONTROLLER_IRQ ALT_IRQ_NOT_CONNECTED
#define EPCS_CONTROLLER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define EPCS_CONTROLLER_DATABITS 8
#define EPCS_CONTROLLER_TARGETCLOCK 20
#define EPCS_CONTROLLER_CLOCKUNITS "MHz"
#define EPCS_CONTROLLER_CLOCKMULT 1000000
#define EPCS_CONTROLLER_NUMSLAVES 1
#define EPCS_CONTROLLER_ISMASTER 1
#define EPCS_CONTROLLER_CLOCKPOLARITY 0
#define EPCS_CONTROLLER_CLOCKPHASE 0
#define EPCS_CONTROLLER_LSBFIRST 0
#define EPCS_CONTROLLER_EXTRADELAY 0
#define EPCS_CONTROLLER_TARGETSSDELAY 100
#define EPCS_CONTROLLER_DELAYUNITS "us"
#define EPCS_CONTROLLER_DELAYMULT "1e-006"
#define EPCS_CONTROLLER_PREFIX "epcs_"
#define EPCS_CONTROLLER_REGISTER_OFFSET 0x400
#define EPCS_CONTROLLER_IGNORE_LEGACY_CHECK 1
#define EPCS_CONTROLLER_USE_ASMI_ATOM 0
#define EPCS_CONTROLLER_CLOCKUNIT "kHz"
#define EPCS_CONTROLLER_DELAYUNIT "us"
#define EPCS_CONTROLLER_DISABLEAVALONFLOWCONTROL 0
#define EPCS_CONTROLLER_INSERT_SYNC 0
#define EPCS_CONTROLLER_SYNC_REG_DEPTH 2
#define ALT_MODULE_CLASS_epcs_controller altera_avalon_epcs_flash_controller

/*
 * led configuration
 *
 */

#define LED_NAME "/dev/led"
#define LED_TYPE "altera_avalon_pio"
#define LED_BASE 0x10000200
#define LED_SPAN 16
#define LED_DO_TEST_BENCH_WIRING 0
#define LED_DRIVEN_SIM_VALUE 0
#define LED_HAS_TRI 0
#define LED_HAS_OUT 1
#define LED_HAS_IN 0
#define LED_CAPTURE 0
#define LED_DATA_WIDTH 10
#define LED_RESET_VALUE 1023
#define LED_EDGE_TYPE "NONE"
#define LED_IRQ_TYPE "NONE"
#define LED_BIT_CLEARING_EDGE_REGISTER 0
#define LED_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_FREQ 40000000
#define ALT_MODULE_CLASS_led altera_avalon_pio

/*
 * led_7seg configuration
 *
 */

#define LED_7SEG_NAME "/dev/led_7seg"
#define LED_7SEG_TYPE "altera_avalon_pio"
#define LED_7SEG_BASE 0x10000220
#define LED_7SEG_SPAN 16
#define LED_7SEG_DO_TEST_BENCH_WIRING 0
#define LED_7SEG_DRIVEN_SIM_VALUE 0
#define LED_7SEG_HAS_TRI 0
#define LED_7SEG_HAS_OUT 1
#define LED_7SEG_HAS_IN 0
#define LED_7SEG_CAPTURE 0
#define LED_7SEG_DATA_WIDTH 32
#define LED_7SEG_RESET_VALUE 0
#define LED_7SEG_EDGE_TYPE "NONE"
#define LED_7SEG_IRQ_TYPE "NONE"
#define LED_7SEG_BIT_CLEARING_EDGE_REGISTER 0
#define LED_7SEG_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_7SEG_FREQ 40000000
#define ALT_MODULE_CLASS_led_7seg altera_avalon_pio

/*
 * psw configuration
 *
 */

#define PSW_NAME "/dev/psw"
#define PSW_TYPE "altera_avalon_pio"
#define PSW_BASE 0x10000240
#define PSW_SPAN 16
#define PSW_IRQ 14
#define PSW_IRQ_INTERRUPT_CONTROLLER_ID 0
#define PSW_DO_TEST_BENCH_WIRING 0
#define PSW_DRIVEN_SIM_VALUE 0
#define PSW_HAS_TRI 0
#define PSW_HAS_OUT 0
#define PSW_HAS_IN 1
#define PSW_CAPTURE 1
#define PSW_DATA_WIDTH 3
#define PSW_RESET_VALUE 0
#define PSW_EDGE_TYPE "FALLING"
#define PSW_IRQ_TYPE "EDGE"
#define PSW_BIT_CLEARING_EDGE_REGISTER 1
#define PSW_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PSW_FREQ 40000000
#define ALT_MODULE_CLASS_psw altera_avalon_pio

/*
 * dipsw configuration
 *
 */

#define DIPSW_NAME "/dev/dipsw"
#define DIPSW_TYPE "altera_avalon_pio"
#define DIPSW_BASE 0x10000260
#define DIPSW_SPAN 16
#define DIPSW_DO_TEST_BENCH_WIRING 0
#define DIPSW_DRIVEN_SIM_VALUE 0
#define DIPSW_HAS_TRI 0
#define DIPSW_HAS_OUT 0
#define DIPSW_HAS_IN 1
#define DIPSW_CAPTURE 0
#define DIPSW_DATA_WIDTH 10
#define DIPSW_RESET_VALUE 0
#define DIPSW_EDGE_TYPE "NONE"
#define DIPSW_IRQ_TYPE "NONE"
#define DIPSW_BIT_CLEARING_EDGE_REGISTER 0
#define DIPSW_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DIPSW_FREQ 40000000
#define ALT_MODULE_CLASS_dipsw altera_avalon_pio

/*
 * ext_flash configuration
 *
 */

#define EXT_FLASH_NAME "/dev/ext_flash"
#define EXT_FLASH_TYPE "altera_avalon_cfi_flash"
#define EXT_FLASH_BASE 0x04000000
#define EXT_FLASH_SPAN 4194304
#define EXT_FLASH_SETUP_VALUE 50
#define EXT_FLASH_WAIT_VALUE 100
#define EXT_FLASH_HOLD_VALUE 50
#define EXT_FLASH_TIMING_UNITS "ns"
#define EXT_FLASH_UNIT_MULTIPLIER 1
#define EXT_FLASH_SIZE 4194304
#define ALT_MODULE_CLASS_ext_flash altera_avalon_cfi_flash

/*
 * tri_state_bridge configuration
 *
 */

#define TRI_STATE_BRIDGE_NAME "/dev/tri_state_bridge"
#define TRI_STATE_BRIDGE_TYPE "altera_avalon_tri_state_bridge"
#define ALT_MODULE_CLASS_tri_state_bridge altera_avalon_tri_state_bridge

/*
 * gpio0 configuration
 *
 */

#define GPIO0_NAME "/dev/gpio0"
#define GPIO0_TYPE "altera_avalon_pio"
#define GPIO0_BASE 0x10000280
#define GPIO0_SPAN 16
#define GPIO0_DO_TEST_BENCH_WIRING 0
#define GPIO0_DRIVEN_SIM_VALUE 0
#define GPIO0_HAS_TRI 1
#define GPIO0_HAS_OUT 0
#define GPIO0_HAS_IN 0
#define GPIO0_CAPTURE 0
#define GPIO0_DATA_WIDTH 32
#define GPIO0_RESET_VALUE 0
#define GPIO0_EDGE_TYPE "NONE"
#define GPIO0_IRQ_TYPE "NONE"
#define GPIO0_BIT_CLEARING_EDGE_REGISTER 0
#define GPIO0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define GPIO0_FREQ 40000000
#define ALT_MODULE_CLASS_gpio0 altera_avalon_pio

/*
 * gpio1 configuration
 *
 */

#define GPIO1_NAME "/dev/gpio1"
#define GPIO1_TYPE "altera_avalon_pio"
#define GPIO1_BASE 0x100002a0
#define GPIO1_SPAN 16
#define GPIO1_DO_TEST_BENCH_WIRING 0
#define GPIO1_DRIVEN_SIM_VALUE 0
#define GPIO1_HAS_TRI 1
#define GPIO1_HAS_OUT 0
#define GPIO1_HAS_IN 0
#define GPIO1_CAPTURE 0
#define GPIO1_DATA_WIDTH 32
#define GPIO1_RESET_VALUE 0
#define GPIO1_EDGE_TYPE "NONE"
#define GPIO1_IRQ_TYPE "NONE"
#define GPIO1_BIT_CLEARING_EDGE_REGISTER 0
#define GPIO1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define GPIO1_FREQ 40000000
#define ALT_MODULE_CLASS_gpio1 altera_avalon_pio

/*
 * sdram configuration
 *
 */

#define SDRAM_NAME "/dev/sdram"
#define SDRAM_TYPE "altera_avalon_new_sdram_controller"
#define SDRAM_BASE 0x00000000
#define SDRAM_SPAN 8388608
#define SDRAM_REGISTER_DATA_IN 1
#define SDRAM_SIM_MODEL_BASE 1
#define SDRAM_SDRAM_DATA_WIDTH 16
#define SDRAM_SDRAM_ADDR_WIDTH 12
#define SDRAM_SDRAM_ROW_WIDTH 12
#define SDRAM_SDRAM_COL_WIDTH 8
#define SDRAM_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM_SDRAM_NUM_BANKS 4
#define SDRAM_REFRESH_PERIOD 15.625
#define SDRAM_POWERUP_DELAY 200.0
#define SDRAM_CAS_LATENCY 3
#define SDRAM_T_RFC 60.0
#define SDRAM_T_RP 18.0
#define SDRAM_T_MRD 3
#define SDRAM_T_RCD 18.0
#define SDRAM_T_AC 5.4
#define SDRAM_T_WR 14.0
#define SDRAM_INIT_REFRESH_COMMANDS 2
#define SDRAM_INIT_NOP_DELAY 0.0
#define SDRAM_SHARED_DATA 0
#define SDRAM_SDRAM_BANK_WIDTH 2
#define SDRAM_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM_STARVATION_INDICATOR 0
#define SDRAM_IS_INITIALIZED 1
#define ALT_MODULE_CLASS_sdram altera_avalon_new_sdram_controller

/*
 * ps2_keyboard configuration
 *
 */

#define PS2_KEYBOARD_NAME "/dev/ps2_keyboard"
#define PS2_KEYBOARD_TYPE "ps2_component"
#define PS2_KEYBOARD_BASE 0x10000300
#define PS2_KEYBOARD_SPAN 8
#define PS2_KEYBOARD_IRQ 12
#define PS2_KEYBOARD_IRQ_INTERRUPT_CONTROLLER_ID 0
#define ALT_MODULE_CLASS_ps2_keyboard ps2_component

/*
 * vga configuration
 *
 */

#define VGA_NAME "/dev/vga"
#define VGA_TYPE "vga_component"
#define VGA_BASE 0x10000800
#define VGA_SPAN 16
#define VGA_IRQ 4
#define VGA_IRQ_INTERRUPT_CONTROLLER_ID 0
#define ALT_MODULE_CLASS_vga vga_component

/*
 * mmcdma configuration
 *
 */

#define MMCDMA_NAME "/dev/mmcdma"
#define MMCDMA_TYPE "mmcdma"
#define MMCDMA_BASE 0x10000400
#define MMCDMA_SPAN 1024
#define MMCDMA_IRQ 6
#define MMCDMA_IRQ_INTERRUPT_CONTROLLER_ID 0
#define ALT_MODULE_CLASS_mmcdma mmcdma

/*
 * spu configuration
 *
 */

#define SPU_NAME "/dev/spu"
#define SPU_TYPE "avalonif_spu"
#define SPU_BASE 0x10001000
#define SPU_SPAN 2048
#define SPU_IRQ 7
#define SPU_IRQ_INTERRUPT_CONTROLLER_ID 0
#define ALT_MODULE_CLASS_spu avalonif_spu

/*
 * custom instruction macros
 *
 */

#define ALT_CI_PIXELSIMD_N 0x00000000
#define ALT_CI_PIXELSIMD_N_MASK ((1<<3)-1)
#define ALT_CI_PIXELSIMD(n,A,B) __builtin_custom_inii(ALT_CI_PIXELSIMD_N+(n&ALT_CI_PIXELSIMD_N_MASK),(A),(B))

/*
 * system library configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none

/*
 * Devices associated with code sections.
 *
 */

#define ALT_TEXT_DEVICE       SDRAM
#define ALT_RODATA_DEVICE     SDRAM
#define ALT_RWDATA_DEVICE     SDRAM
#define ALT_EXCEPTIONS_DEVICE SDRAM
#define ALT_RESET_DEVICE      EPCS_CONTROLLER


#endif /* __SYSTEM_H_ */
