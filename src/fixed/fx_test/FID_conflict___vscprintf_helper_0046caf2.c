/* undefined4 __cdecl FID_conflict:__vscprintf_helper(undefined * param_1, int param_2, undefined4 param_3, undefined4 param_4) @ 0046caf2  87 bytes */

#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    __vscprintf_helper
    __vscwprintf_helper
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl
FID_conflict___vscprintf_helper
          (undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_2 == 0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar2 = 0xffffffff;
  }
  else {
    local_20 = 0x7fffffff;
    local_18 = 0x42;
    local_1c = 0;
    local_24 = 0;
    uVar2 = (*(code *)param_1)(&local_24,param_2,param_3,param_4);
  }
  return uVar2;
}


