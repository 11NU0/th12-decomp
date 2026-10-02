/* float10 __fastcall FUN_004551b0(undefined4 param_1, undefined4 param_2, undefined4 param_3) @ 004551b0  462 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004551b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_EAX;
  int iVar1;
  float10 extraout_ST0;
  float10 fVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_004931e0(param_1,param_2);
  fVar2 = extraout_ST0;
  switch((int)uVar3) {
  case 10000:
    return (float10)*(int *)(in_EAX + 0x3fc);
  case 0x2711:
    return (float10)*(int *)(in_EAX + 0x400);
  case 0x2712:
    return (float10)*(int *)(in_EAX + 0x404);
  case 0x2713:
    return (float10)*(int *)(in_EAX + 0x408);
  case 0x2714:
    return (float10)*(float *)(in_EAX + 0x40c);
  case 0x2715:
    return (float10)*(float *)(in_EAX + 0x410);
  case 0x2716:
    return (float10)*(float *)(in_EAX + 0x414);
  case 0x2717:
    return (float10)*(float *)(in_EAX + 0x418);
  case 0x2718:
    return (float10)*(int *)(in_EAX + 0x41c);
  case 0x2719:
    return (float10)*(int *)(in_EAX + 0x420);
  case 0x271a:
    fVar2 = FUN_00410920(3.1415927);
    return (float10)(float)fVar2;
  case 0x271b:
    fVar2 = FUN_004645b0();
    return (float10)(float)fVar2;
  case 0x271c:
    fVar2 = FUN_004645e0();
    return (float10)(float)fVar2;
  case 0x271d:
    return (float10)*(float *)(in_EAX + 0x424);
  case 0x271e:
    return (float10)*(float *)(in_EAX + 0x428);
  case 0x271f:
    return (float10)*(float *)(in_EAX + 0x42c);
  case 0x2720:
    return (float10)DAT_004ced1c;
  case 0x2721:
    return (float10)_DAT_004ced20;
  case 0x2722:
    return (float10)_DAT_004ced24;
  case 0x2723:
    return (float10)_DAT_004ced40;
  case 0x2724:
    return (float10)_DAT_004ced44;
  case 0x2725:
    return (float10)_DAT_004ced48;
  case 0x2726:
    iVar1 = FUN_00464440();
    fVar2 = (float10)iVar1;
    if (iVar1 < 0) {
      fVar2 = fVar2 + (float10)4.2949673e+09;
    }
    break;
  case 0x2727:
    return (float10)*(float *)(in_EAX + 0x24);
  case 0x2728:
    return (float10)*(float *)(in_EAX + 0x28);
  case 0x2729:
    return (float10)*(float *)(in_EAX + 0x2c);
  }
  return fVar2;
}


