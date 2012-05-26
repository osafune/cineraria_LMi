/*
* min.c -- a minimal Lua interpreter
* loads stdin only with minimal error handling.
* no interaction, and no standard library, only a "print" function.
*/

#include <stdio.h>
#include <system.h>
#include <io.h>
#include "mmcfs/mmcfs.h"

#include "lua/lua.h"
#include "lua/lauxlib.h"
#include "lua/lualib.h"

#define LUA_AUTORUN_FILE	"mmcfs:/de0/hello.lua"


void print_sysinfo(void)
{
	int freq_int,freq_dec;

	/* ÉVÉXÉeÉÄèÓïÒ */
	printf("\n- system information\n");

	freq_int = ALT_CPU_FREQ/1000000;
	freq_dec = ALT_CPU_FREQ/10000 - freq_int*100;
	printf("NiosII/%s %d.%02dMHz\n",NIOS2_CPU_IMPLEMENTATION,freq_int,freq_dec);

  #if(NIOS2_ICACHE_SIZE != 0)
	printf("   I-cache %dkbyte\n",NIOS2_ICACHE_SIZE/1024);
  #endif
  #if(NIOS2_DCACHE_SIZE != 0)
	printf("   D-cache %dkbyte\n",NIOS2_DCACHE_SIZE/1024);
  #endif
  #ifdef __ALTERA_NIOS_CUSTOM_INSTR_FLOATING_POINT
	printf("   Floating point custom instruction supported\n");
  #endif
	printf("   EXCEPTION ADDR  0x%08X\n",NIOS2_EXCEPTION_ADDR);
	printf("   RESET ADDR      0x%08X\n",NIOS2_RESET_ADDR);
	printf("   BREAK ADDR      0x%08X\n",NIOS2_BREAK_ADDR);

  #ifdef SDRAM_BASE
	printf("SDRAM     : 0x%08X-0x%08X\n", SDRAM_BASE,SDRAM_BASE+SDRAM_SPAN-1);
  #endif
  #ifdef EXT_FLASH_BASE
	printf("CFI FLASH : 0x%08X-0x%08X\n", EXT_FLASH_BASE,EXT_FLASH_BASE+EXT_FLASH_SPAN-1);
  #endif
  #ifdef EPCS_CONTROLLER_BASE
	printf("EPCS FLASH: 0x%08X-0x%08X\n", EPCS_CONTROLLER_BASE,EPCS_CONTROLLER_BASE+EPCS_CONTROLLER_SPAN-1);
  #endif

	printf("sysid : 0x%08X 0x%08X\n",IORD(SYSID_BASE,0),IORD(SYSID_BASE,1));
	printf("software build : %s / %s\n",__DATE__,__TIME__);
}


int main(void)
{
	print_sysinfo();

	/* File system Driver setup */

	if( mmcfs_setup() ) {
		printf("[!] Filesystem setup failed.\n\n");
		return -1;
	}
	printf("\n");

	/* Lua initialize (5.2.0) */

	lua_State *L = luaL_newstate();	// create state 
	if( L == NULL ) {
		printf("[!] cannot create state: not enough memory\n\n");
		return -1;
	}

	lua_gc(L, LUA_GCSTOP, 0);	// stop collector during initialization 
	luaL_openlibs(L);			// open libraries 
	lua_gc(L, LUA_GCRESTART, 0);

	printf(LUA_COPYRIGHT "\n");	// print version 

	/* script file load & run */

	printf("autorun file = %s\n\n",LUA_AUTORUN_FILE);
	if( luaL_dofile(L, LUA_AUTORUN_FILE) != 0 ) printf("%s\n",lua_tostring(L,-1));


	lua_close(L);

	return 0;
}
