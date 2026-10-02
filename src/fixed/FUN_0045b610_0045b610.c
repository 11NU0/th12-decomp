/* undefined4 __stdcall FUN_0045b610(void) @ 0045b610  791 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

typedef struct local_20__u { undefined4 _; undefined1 _3_1_; undefined1 _0_3_; undefined1 _2_2_; undefined1 _1_1_; undefined1 _2_1_; } local_20__u;
typedef struct DAT_004d47f8__u { undefined4 _; undefined1 _1_3_; undefined1 _0_2_; } DAT_004d47f8__u;
undefined4 __stdcall FUN_0045b610(void)

{
  local_20__u *local_20__u_alias;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  char cVar12;
  uint extraout_ECX;
  uint uVar13;
  undefined4 extraout_ECX_00;
  uint extraout_EDX;
  uint uVar14;
  int unaff_ESI;
  void *unaff_EDI;
  float10 fVar15;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  ulonglong uVar16;
  undefined4 local_20;
  char local_1c;
  
  iVar7 = FUN_0045b210();
  if (iVar7 != 0) {
    return 0xffffffff;
  }
  fVar1 = DAT_004cee34[0x3f];
  fVar2 = DAT_004cee34[0x40];
  if ((*(byte *)((int)unaff_ESI + 0x47e) & 1) == 0) {
    local_20 = *(uint *)((int)unaff_ESI + 0x3bc);
  }
  else {
    local_20 = *(uint *)((int)unaff_ESI + 0x3c0);
  }
  fVar3 = (*(float *)((int)unaff_ESI + 0x43c) +
          *(float *)((int)unaff_ESI + 0x430) + *(float *)((int)unaff_ESI + 0x424)) - *DAT_004cee34;
  fVar4 = (*(float *)((int)unaff_ESI + 0x440) +
          *(float *)((int)unaff_ESI + 0x434) + *(float *)((int)unaff_ESI + 0x428)) - DAT_004cee34[1];
  fVar5 = (*(float *)((int)unaff_ESI + 0x444) +
          *(float *)((int)unaff_ESI + 0x438) + *(float *)((int)unaff_ESI + 0x42c)) - DAT_004cee34[2];
  fVar15 = FUN_00408860(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
  uVar13 = extraout_ECX;
  uVar14 = extraout_EDX;
  uVar8 = local_20;
  if (*(int *)((int)unaff_EDI + 0x88ed50) != 0) {
    uVar8 = (uint)*(byte *)((int)unaff_EDI + 0x88ed4e) * (local_20 >> 0x10 & 0xff) >> 7;
    if (0xff < uVar8) {
      uVar8 = 0xff;
    }
    uVar13 = local_20 >> 8;
  local_20__u_alias = (local_20__u *)&local_20;
    bVar6 = local_20__u_alias->_3_1_;
    ((local_20__u *)&local_20)->_0_3_ = CONCAT12((char)uVar8,(undefined2)local_20);
    uVar9 = (uint)*(byte *)((int)unaff_EDI + 0x88ed4d) * (uVar13 & 0xff) >> 7;
    if (0xff < uVar9) {
      uVar9 = 0xff;
    }
    uVar13 = (uint3)local_20 & 0xff;
    uVar8 = *(byte *)((int)unaff_EDI + 0x88ed4c) * uVar13 >> 7;
    if (0xff < uVar8) {
      uVar8 = 0xff;
    }
    uVar14 = (uint)bVar6;
    uVar10 = *(byte *)((int)unaff_EDI + 0x88ed4f) * uVar14 >> 7;
    local_20 = CONCAT31(CONCAT21(((local_20__u *)&local_20)->_2_2_,(char)uVar9),(char)uVar8);
    if (0xff < uVar10) {
      uVar10 = 0xff;
    }
    local_20 = CONCAT13((char)uVar10,(uint3)local_20);
  }
  if ((float)fVar15 <= _DAT_004cebe8) {
    DAT_004d47f8 = local_20;
  }
  else {
    if (1.0 <= (_DAT_004cebe8 - (float)fVar15) / (fVar1 - fVar2)) {
      return 0xffffffff;
    }
    uVar16 = FUN_004931e0(uVar13,uVar14);
    iVar7 = (uVar8 & 0xff) - (int)uVar16;
    uVar13 = (uint)ROUND((float10)iVar7 * extraout_ST0);
    local_1c = (char)uVar13;
    DAT_004d47f8 = CONCAT31(((DAT_004d47f8__u *)&DAT_004d47f8)->_1_3_,(char)uVar8 - local_1c);
    uVar16 = FUN_004931e0(iVar7,uVar13 & 0xff);
    iVar7 = (uint)((local_20__u *)&local_20)->_1_1_ - (int)uVar16;
    local_1c = (char)(int)ROUND((float10)iVar7 * extraout_ST0_00);
    ((DAT_004d47f8__u *)&DAT_004d47f8)->_0_2_ = CONCAT11(((local_20__u *)&local_20)->_1_1_ - local_1c,(undefined)DAT_004d47f8);
    uVar16 = FUN_004931e0(CONCAT31((int3)((uint)extraout_ECX_00 >> 8),((local_20__u *)&local_20)->_1_1_ - local_1c),
                          iVar7);
    local_1c = (char)(int)ROUND((float10)((uint)((local_20__u *)&local_20)->_2_1_ - (int)uVar16) * extraout_ST0_01);
  local_20__u_alias = (local_20__u *)&local_20;
    cVar12 = local_20__u_alias->_2_1_ - local_1c;
    local_1c = (char)(int)ROUND((float10)(local_20 >> 0x18) * ((float10)1 - extraout_ST0_01));
    DAT_004d47f8 = CONCAT13(local_1c,CONCAT12(cVar12,(undefined2)DAT_004d47f8));
  }
  _DAT_004d4814 = DAT_004d47f8;
  _DAT_004d4830 = DAT_004d47f8;
  _DAT_004d484c = DAT_004d47f8;
  uVar11 = FUN_00459e50(unaff_EDI,2);
  return uVar11;
}


