/* undefined4 __fastcall FUN_00468d90(undefined4 param_1, int * param_2, float param_3) @ 00468d90  142 bytes */
#include "th12.h"

undefined4 __fastcall FUN_00468d90(undefined4 param_1,int *param_2,float param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int unaff_EDI;
  
  bVar2 = true;
  puVar1 = (undefined4 *)((int)unaff_EDI + 0x1030);
  while( true ) {
    while( true ) {
      puVar3 = puVar1;
      if (puVar3 == (undefined4 *)0x0) {
        *(int *)((int)unaff_EDI + 4) = unaff_EDI + 8;
        return 0;
      }
      puVar1 = (undefined4 *)puVar3[1];
      *(undefined4 *)((int)unaff_EDI + 4) = *puVar3;
      iVar4 = FUN_00467170(param_1,param_2,param_3);
      param_1 = extraout_ECX;
      param_2 = extraout_EDX;
      if (bVar2) break;
      if (iVar4 != 0) {
        FUN_0046ca4f(*(void **)((int)unaff_EDI + 4));
        if (puVar3[1] != 0) {
          *(undefined4 *)(puVar3[1] + 8) = puVar3[2];
        }
        if (puVar3[2] != 0) {
          *(undefined4 *)(puVar3[2] + 4) = puVar3[1];
        }
        puVar3[1] = 0;
        puVar3[2] = 0;
        FUN_0046ca4f(puVar3);
        param_1 = extraout_ECX_00;
        param_2 = extraout_EDX_00;
      }
    }
    if (iVar4 != 0) break;
    bVar2 = false;
  }
  return 0xffffffff;
}


