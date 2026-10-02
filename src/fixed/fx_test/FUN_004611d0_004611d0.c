/* undefined4 __fastcall FUN_004611d0(void * param_1) @ 004611d0  126 bytes */

#include "th12.h"

undefined4 __fastcall FUN_004611d0(void *param_1)

{
  int iVar1;
  int in_EAX;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *unaff_EDI;
  
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + '\x01';
    param_1 = extraout_ECX;
  }
  for (iVar1 = *(int *)(in_EAX * 0x4b4 + 0x8856e4 + (int)unaff_EDI); iVar1 != 0;
      iVar1 = *(int *)(iVar1 + 0x1c)) {
    if ((*(uint *)(iVar1 + 0x47c) & 0x10000000) == 0) {
      if (*(code **)(iVar1 + 0x48c) != (code *)0x0) {
        (**(code **)(iVar1 + 0x48c))();
        param_1 = extraout_ECX_00;
      }
      FUN_0045c900(param_1,unaff_EDI);
      param_1 = extraout_ECX_01;
    }
  }
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + -1;
  }
  return 1;
}


