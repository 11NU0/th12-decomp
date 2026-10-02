/* undefined4 __stdcall FUN_0045b210(void) @ 0045b210  976 bytes */
#include "th12.h"

undefined4 __stdcall FUN_0045b210(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_EAX;
  float fVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fVar9;
  float fVar10;
  float local_98;
  float local_94;
  float local_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float local_74;
  float local_70;
  undefined auStack_6c [4];
  undefined local_68 [16];
  float local_58;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  
  local_58 = *(float *)((int)in_EAX + 0x2c);
  fVar8 = (float10)fcos((float10)local_58);
  fVar7 = (float10)fsin((float10)local_58);
  local_70 = (float)fVar8;
  local_74 = (float)fVar7;
  local_98 = 0.0;
  local_94 = 0.0;
  local_90 = 0.0;
  local_18 = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  fVar5 = (float)(DAT_004cee34 + 0xcc);
  local_2c = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_8 = 0x3f800000;
  local_1c = 0x3f800000;
  local_30 = 0x3f800000;
  local_44 = 0x3f800000;
  local_14 = *(float *)((int)in_EAX + 0x430) + *(float *)((int)in_EAX + 0x424) + *(float *)((int)in_EAX + 0x43c);
  local_10 = *(float *)((int)in_EAX + 0x434) + *(float *)((int)in_EAX + 0x428) + *(float *)((int)in_EAX + 0x440);
  local_c = *(float *)((int)in_EAX + 0x438) + *(float *)((int)in_EAX + 0x42c) + *(float *)((int)in_EAX + 0x444);
  D3DXVec3Project(local_68,&local_98,fVar5,DAT_004cee34 + 0x8c,DAT_004cee34 + 0x4c,&local_44);
  if ((fStack_78 < 0.0 == NANP(fStack_78)) && (1.0 < fStack_78 == NANP(fStack_78))) {
    fStack_bc = (float)(DAT_004cee34 + 0x4c);
    fStack_c0 = (float)(DAT_004cee34 + 0x8c);
    fStack_c4 = (float)(DAT_004cee34 + 0xcc);
    fStack_c8 = (float)(DAT_004cee34 + 0x30);
    D3DXVec3Project(auStack_6c);
    fStack_b8 = fStack_84 - local_98;
    fVar9 = fStack_80 - local_94;
    fVar10 = fStack_7c - local_90;
    fVar8 = FUN_00408860(fVar10 * fVar10 + fStack_b8 * fStack_b8 + fVar9 * fVar9);
    fVar3 = *(float *)((int)in_EAX + 0x40) * (float)(fVar8 * (float10)0.5) * *(float *)((int)in_EAX + 0x58);
    fVar4 = (float)(fVar8 * (float10)0.5) * *(float *)((int)in_EAX + 0x5c) * *(float *)((int)in_EAX + 0x44);
    DAT_004d4844 = local_90;
    DAT_004d4828 = local_90;
    DAT_004d480c = local_90;
    DAT_004d47f0 = local_90;
    fVar8 = (float10)fcos((float10)fStack_88);
    fVar7 = (float10)fsin((float10)fStack_88);
    fVar1 = (float)fVar8;
    fVar2 = (float)fVar7;
    uVar6 = *(uint *)((int)in_EAX + 0x47c) >> 0x13 & 3;
    if (uVar6 == 0) {
      fStack_c8 = -fVar3 * 0.5;
      fStack_c4 = fVar3 * 0.5;
      fStack_c0 = fStack_c8;
      fStack_bc = fStack_c4;
    }
    else if (uVar6 == 1) {
      fStack_c0 = 0.0;
      fStack_c8 = 0.0;
      fStack_c4 = fVar3;
      fStack_bc = fVar3;
    }
    else if (uVar6 == 2) {
      fStack_c8 = -fVar3;
      fStack_bc = 0.0;
      fStack_c4 = 0.0;
      fStack_c0 = fStack_c8;
    }
    uVar6 = *(uint *)((int)in_EAX + 0x47c) >> 0x15 & 3;
    if (uVar6 == 0) {
      fStack_b8 = -fVar4 * 0.5;
      fVar10 = fVar4 * 0.5;
      fVar9 = fStack_b8;
      fVar5 = fVar10;
    }
    else if (uVar6 == 1) {
      fStack_b8 = 0.0;
      fVar9 = 0.0;
      fVar10 = fVar4;
      fVar5 = fVar4;
    }
    else if (uVar6 == 2) {
      fStack_b8 = -fVar4;
      fVar9 = fStack_b8;
      fVar10 = 0.0;
      fVar5 = 0.0;
    }
    DAT_004d47e8 = local_98 + (fVar1 * fStack_c8 - fVar2 * fStack_b8);
    DAT_004d47ec = local_94 + fVar1 * fStack_b8 + fVar2 * fStack_c8;
    DAT_004d4804 = (fStack_c4 * fVar1 - fVar9 * fVar2) + local_98;
    DAT_004d4808 = fVar9 * fVar1 + fStack_c4 * fVar2 + local_94;
    DAT_004d4820 = (fStack_c0 * fVar1 - fVar10 * fVar2) + local_98;
    DAT_004d4824 = fVar10 * fVar1 + fVar2 * fStack_c0 + local_94;
    DAT_004d483c = (fStack_bc * fVar1 - fVar5 * fVar2) + local_98;
    DAT_004d4840 = fVar5 * fVar1 + fStack_bc * fVar2 + local_94;
    return 0;
  }
  return 0xffffffff;
}


