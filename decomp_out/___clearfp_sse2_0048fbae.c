/* uint __stdcall ___clearfp_sse2(void) @ 0048fbae  80 bytes */
#include "th12.h"

/* WARNING: Removing unreachable block (ram,0x0048fbef) */
/* WARNING: Removing unreachable block (ram,0x0048fbdf) */
/* WARNING: Removing unreachable block (ram,0x0048fbcf) */
/* WARNING: Removing unreachable block (ram,0x0048fbca) */
/* WARNING: Removing unreachable block (ram,0x0048fbd2) */
/* WARNING: Removing unreachable block (ram,0x0048fbd7) */
/* WARNING: Removing unreachable block (ram,0x0048fbda) */
/* WARNING: Removing unreachable block (ram,0x0048fbe2) */
/* WARNING: Removing unreachable block (ram,0x0048fbe7) */
/* WARNING: Removing unreachable block (ram,0x0048fbea) */
/* WARNING: Removing unreachable block (ram,0x0048fbf2) */
/* WARNING: Removing unreachable block (ram,0x0048fbf7) */
/* Library Function - Single Match
    ___clearfp_sse2
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

uint ___clearfp_sse2(void)

{
  MXCSR = MXCSR & 0xffffffc0;
  return 0;
}


