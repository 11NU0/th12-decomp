/* undefined __fastcall FUN_0041dbc0(void * param_1) @ 0041dbc0  129 bytes */

#include "th12.h"

void __fastcall FUN_0041dbc0(void *param_1)

{
  void *pvVar1;
  int iVar2;
  void *extraout_ECX;
  int *piVar3;
  
  iVar2 = DAT_004b43e4;
  pvVar1 = *(void **)(DAT_004b43e4 + 0x6d30);
  if (pvVar1 != (void *)0x0) {
    FUN_0041cd90(param_1);
    FUN_0046ca4f(pvVar1);
    *(undefined4 *)(iVar2 + 0x6d30) = 0;
    param_1 = extraout_ECX;
  }
  if (((byte)DAT_004b0ce0 & 9) == 0) {
    piVar3 = (int *)(&DAT_004b512c + DAT_004ce8cc);
    if (*piVar3 != 0) {
      FUN_004604e0(param_1);
      FUN_0046ca4f((void *)*piVar3);
      *piVar3 = 0;
    }
    *(undefined4 *)(iVar2 + 0x6ce4) = 0;
    if (*(void **)(iVar2 + 0x6d34) != (void *)0x0) {
      _free(*(void **)(iVar2 + 0x6d34));
      *(undefined4 *)(iVar2 + 0x6d34) = 0;
    }
    *(undefined4 *)(iVar2 + 0x6d34) = 0;
  }
  return;
}


