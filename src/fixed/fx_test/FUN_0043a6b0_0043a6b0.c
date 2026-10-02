/* undefined4 __fastcall FUN_0043a6b0(undefined4 param_1, int param_2) @ 0043a6b0  331 bytes */

#include "th12.h"

undefined4 __fastcall FUN_0043a6b0(undefined4 param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  void *extraout_ECX;
  void *this;
  void *this_00;
  int iVar4;
  ulonglong uVar5;
  
  iVar2 = DAT_004b4514;
  iVar4 = *(char *)(*(int *)(param_2 + 0x74) + 0x1c) * 0xe4;
  fVar1 = (float)*(int *)(iVar4 + 0x81dc + DAT_004b4514) * 0.0078125;
  *(float *)(param_2 + 0x14) = (float)*(int *)(iVar4 + 0x81d8 + DAT_004b4514) * 0.0078125;
  *(float *)(param_2 + 0x18) = fVar1;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  piVar3 = DAT_004d1068;
  if (*(int *)(param_2 + 0x48) != 2) {
    iVar4 = *DAT_004d1068;
    uVar5 = FUN_004931e0(iVar2,fVar1);
    (**(code **)(iVar4 + 0x40))(piVar3,(int)uVar5);
    if (*(float *)(param_2 + 0x6c) < 448.0 != NAN(*(float *)(param_2 + 0x6c))) {
      *(float *)(param_2 + 0x6c) = *(float *)(param_2 + 0x6c) + 28.0;
    }
    if ((*(int *)(param_2 + 0x48) == 1) &&
       ((((this = extraout_ECX, *(int *)(DAT_004b4514 + 0xc424) < 0 ||
          (this = (void *)(*(char *)(*(int *)(param_2 + 0x74) + 0x1c) + -1),
          *(int *)(DAT_004b4514 + 0xc41c) <= (int)this)) ||
         ((DAT_004b43e4 != 0 && (*(int *)(DAT_004b43e4 + 0x6d30) != 0)))) || (DAT_004b43dc == 0))))
    {
      *(undefined4 *)(param_2 + 0x48) = 2;
      FUN_00461970(this,*(int *)(param_2 + 0x4c));
      FUN_00461970(this_00,*(int *)(param_2 + 0x50));
      *(undefined4 *)(DAT_004b4514 + 0xc430 + *(char *)(*(int *)(param_2 + 0x74) + 0x1c) * 4) = 0;
      FUN_00453f10();
    }
    if (((*(int *)(param_2 + 0x58) == 0) && (*(int *)(param_2 + 0x48) == 1)) &&
       (*(int *)(param_2 + 0x5c) == 1)) {
      FUN_00461970(*(void **)(param_2 + 0x4c),(int)*(void **)(param_2 + 0x4c));
      *(undefined4 *)(param_2 + 0x5c) = 0;
    }
  }
  return 0;
}


