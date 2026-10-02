/* undefined4 __cdecl _vscan_fn(undefined * param_1, int param_2, undefined4 param_3, undefined4 param_4) @ 0046dcc3  106 bytes */
#include "th12.h"

/* Library Function - Single Match
    _vscan_fn
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl _vscan_fn(undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  char *unaff_ESI;
  
  _strlen(unaff_ESI);
  if ((unaff_ESI == (char *)0x0) || (param_2 == 0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (*(code *)param_1)(&stack0xffffffdc,param_2,param_3,param_4);
  }
  return uVar2;
}


