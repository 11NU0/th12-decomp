/* void __cdecl ___tzset(void) @ 00476f80  70 bytes */
#include "th12.h"

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tzset
   
   Library: Visual Studio 2008 Release */

void __cdecl ___tzset(void)

{
  if (DAT_004b41cc == 0) {
    __lock(6);
    if (DAT_004b41cc == 0) {
      __tzset_nolock();
      DAT_004b41cc = DAT_004b41cc + 1;
    }
    FUN_00476fc6();
  }
  return;
}


