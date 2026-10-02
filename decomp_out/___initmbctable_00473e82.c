/* undefined4 __stdcall ___initmbctable(void) @ 00473e82  30 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___initmbctable
   
   Library: Visual Studio 2008 Release */

undefined4 ___initmbctable(void)

{
  if (DAT_004d6434 == 0) {
    __setmbcp(-3);
    DAT_004d6434 = 1;
  }
  return 0;
}


