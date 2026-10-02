/* undefined4 __cdecl __set_sbh_threshold(uint param_1) @ 0046f958  175 bytes */
#include "th12.h"

/* Library Function - Single Match
    __set_sbh_threshold
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl __set_sbh_threshold(uint param_1)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_004b3c04 != 0) {
    if (DAT_004d6458 != 3) {
      if (param_1 == 0) {
        return 1;
      }
      if (DAT_004d6458 == 1) {
        if ((param_1 < 0x3f9) && (iVar2 = ___sbh_heap_init(param_1), iVar2 != 0)) {
          DAT_004d6448 = param_1;
          DAT_004d6458 = 3;
          return 1;
        }
        piVar1 = __errno();
        *piVar1 = 0x16;
        __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      else {
        piVar1 = __errno();
        *piVar1 = 0x16;
      }
      return 0;
    }
    if (param_1 < 0x3f9) {
      DAT_004d6448 = param_1;
      return 1;
    }
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  return 0;
}


