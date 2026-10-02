/* undefined4 __thiscall FUN_00432260(void * this, int * param_1) @ 00432260  1136 bytes */
#include "th12.h"

undefined4 __fastcall FUN_00432260(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = param_1;
  iVar5 = DAT_004ce8cc;
  iVar4 = DAT_004b43b8;
  *(undefined4 *)((int)DAT_004b43b8 + 0x18f94) = 1;
  piVar2 = FUN_00461920(this,iVar5,param_1[0x7b]);
  if (piVar2 == (int *)0x0) {
    param_1[0x7b] = 0;
  }
  else {
    piVar2 = FUN_00461920(param_1[0x7b],iVar5,param_1[0x7b]);
    if (piVar2 == (int *)0x0) {
      param_1[0x7b] = 0;
    }
    for (piVar2 = piVar2 + 4; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      iVar5 = *piVar2;
      if (*(short *)((int)iVar5 + 0x3ea) == 0x4f) {
        if (iVar5 != 0) {
          *(uint *)((int)DAT_004ceaac + 0x3bc) = *(uint *)((int)iVar5 + 0x3bc) | 0xff000000;
        }
        break;
      }
    }
  }
  switch(param_1[1]) {
  case 9:
  case 0x10:
  case 0x17:
    param_1 = param_1 + 0x81;
    iVar5 = 0;
    do {
      *(uint *)((int)iVar4 + 0x18f80) = (-(uint)(piVar6[0xe] != iVar5) & 0xff808180) - 0x100;
      if (*param_1 == 0) {
        FUN_004015c0("No.%.2d -------- --/--/-- ------- - St-");
      }
      else {
        __localtime64((__time64_t *)(*(int *)(*param_1 + 0x1c) + 0xc));
        FUN_004015c0("No.%.2d %s %.2d/%.2d/%.2d %s %s %s");
      }
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 1;
      iVar4 = DAT_004b43b8;
    } while (iVar5 < 0x19);
    break;
  case 10:
  case 0x11:
  case 0x18:
    FUN_004320f0((int)param_1);
    __localtime64((__time64_t *)(*(int *)((int)DAT_004b4518 + 0x1c) + 0xc));
    FUN_004015c0("No.%.2d          %.2d/%.2d/%.2d %s %s %s");
    iVar4 = DAT_004b43b8;
  default:
    goto switchD_00432308_caseD_b;
  case 0x12:
  case 0x19:
    piVar6 = (int *)param_1[0xe];
    FUN_004015c0("            Score Ranking!!");
    if (param_1[0x7e] == 0) {
      FUN_004320f0((int)param_1);
      param_1 = piVar6;
    }
    else {
      param_1 = (int *)0xffffffff;
    }
    piVar6 = (int *)0x0;
    do {
      iVar1 = DAT_004b451c;
      *(uint *)((int)DAT_004b43b8 + 0x18f80) = (-(uint)(piVar6 != param_1) & 0xff808180) - 0x100;
      iVar3 = (DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4;
      iVar5 = ((int)piVar6 + DAT_004b0ca8 * 10) * 0x1c;
      iVar4 = iVar5 + iVar3;
      if (*(int *)(iVar4 + 0x28 + iVar1) == 0 && *(int *)(iVar4 + iVar1 + 0x2c) == 0) {
        FUN_004015c0("%2d %s %.9ld%d --/--/-- Stage -");
      }
      else {
        __localtime64((__time64_t *)(iVar5 + iVar3 + 0x28 + iVar1));
        FUN_004015c0("%2d %s %.9ld%d %.2d/%.2d/%.2d %s");
      }
      piVar6 = (int *)((int)piVar6 + 1);
    } while ((int)piVar6 < 10);
  }
  iVar4 = DAT_004b43b8;
  *(undefined4 *)((int)DAT_004b43b8 + 0x18f80) = 0xffffffff;
switchD_00432308_caseD_b:
  *(undefined4 *)((int)iVar4 + 0x18f94) = 0;
  return 1;
}


