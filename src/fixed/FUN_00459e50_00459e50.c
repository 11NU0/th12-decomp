/* undefined4 __thiscall FUN_00459e50(void * this, byte param_1) @ 00459e50  1320 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00459e50(void *this,byte param_1)

{
  float fVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_EAX;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  float local_c;
  float local_8;
  float local_4;
  
  bVar2 = param_1;
  DAT_004d47e8 = DAT_004d47e8 + *(float *)((int)this + 0xb0);
  DAT_004d47ec = *(float *)((int)this + 0xb4) + DAT_004d47ec;
  DAT_004d4804 = DAT_004d4804 + *(float *)((int)this + 0xb0);
  DAT_004d4808 = *(float *)((int)this + 0xb4) + DAT_004d4808;
  DAT_004d4820 = DAT_004d4820 + *(float *)((int)this + 0xb0);
  DAT_004d4824 = *(float *)((int)this + 0xb4) + DAT_004d4824;
  DAT_004d483c = DAT_004d483c + *(float *)((int)this + 0xb0);
  DAT_004d4840 = *(float *)((int)this + 0xb4) + DAT_004d4840;
  if ((param_1 & 1) != 0) {
    DAT_004d47e8 = ROUND(DAT_004d47e8) - 0.5;
    DAT_004d4804 = ROUND(DAT_004d4804) - 0.5;
    DAT_004d47ec = ROUND(DAT_004d47ec) - 0.5;
    DAT_004d4824 = ROUND(DAT_004d4824) - 0.5;
    DAT_004d4808 = DAT_004d47ec;
    DAT_004d4820 = DAT_004d47e8;
    DAT_004d483c = DAT_004d4804;
    DAT_004d4840 = DAT_004d4824;
  }
  _DAT_004d47fc = *(float *)((int)in_EAX + 0x7c) + *(float *)((int)in_EAX + 0x60);
  *(float *)((int)in_EAX + 0x448) = DAT_004d47e8;
  *(float *)((int)in_EAX + 0x44c) = DAT_004d47ec;
  *(undefined4 *)((int)in_EAX + 0x450) = DAT_004d47f0;
  *(float *)((int)in_EAX + 0x454) = DAT_004d4804;
  *(float *)((int)in_EAX + 0x458) = DAT_004d4808;
  *(undefined4 *)((int)in_EAX + 0x45c) = DAT_004d480c;
  *(float *)((int)in_EAX + 0x460) = DAT_004d4820;
  *(float *)((int)in_EAX + 0x464) = DAT_004d4824;
  *(undefined4 *)((int)in_EAX + 0x468) = DAT_004d4828;
  *(float *)((int)in_EAX + 0x46c) = DAT_004d483c;
  *(float *)((int)in_EAX + 0x470) = DAT_004d4840;
  *(undefined4 *)((int)in_EAX + 0x474) = DAT_004d4844;
  _DAT_004d4800 = *(float *)((int)in_EAX + 0x80) + *(float *)((int)in_EAX + 100);
  _DAT_004d4818 =
       *(float *)((int)in_EAX + 0x7c) + *(float *)((int)in_EAX + 0x60) +
       (*(float *)((int)in_EAX + 0x84) - *(float *)((int)in_EAX + 0x7c)) * *(float *)((int)in_EAX + 0x50);
  _DAT_004d481c = *(float *)((int)in_EAX + 0x88) + *(float *)((int)in_EAX + 100);
  _DAT_004d4834 = *(float *)((int)in_EAX + 0x60) + *(float *)((int)in_EAX + 0x8c);
  _DAT_004d4838 =
       *(float *)((int)in_EAX + 0x80) + *(float *)((int)in_EAX + 100) +
       (*(float *)((int)in_EAX + 0x90) - *(float *)((int)in_EAX + 0x80)) * *(float *)((int)in_EAX + 0x54);
  _DAT_004d4850 =
       *(float *)((int)in_EAX + 0x60) + *(float *)((int)in_EAX + 0x8c) +
       (*(float *)((int)in_EAX + 0x94) - *(float *)((int)in_EAX + 0x8c)) * *(float *)((int)in_EAX + 0x50);
  _DAT_004d4854 =
       *(float *)((int)in_EAX + 0x88) + *(float *)((int)in_EAX + 100) +
       (*(float *)((int)in_EAX + 0x98) - *(float *)((int)in_EAX + 0x88)) * *(float *)((int)in_EAX + 0x54);
  _param_1 = DAT_004d4804;
  if (DAT_004d4804 < DAT_004d47e8 != (NANP(DAT_004d4804) || NANP(DAT_004d47e8))) {
    _param_1 = DAT_004d47e8;
  }
  if (_param_1 < DAT_004d4820 != (NANP(_param_1) || NANP(DAT_004d4820))) {
    _param_1 = DAT_004d4820;
  }
  if (_param_1 < DAT_004d483c != (NANP(_param_1) || NANP(DAT_004d483c))) {
    _param_1 = DAT_004d483c;
  }
  if (DAT_004d4808 < DAT_004d47ec == (NANP(DAT_004d4808) || NANP(DAT_004d47ec))) {
    local_c = DAT_004d4808;
  }
  else {
    local_c = DAT_004d47ec;
  }
  if (local_c < DAT_004d4824 != (NANP(local_c) || NANP(DAT_004d4824))) {
    local_c = DAT_004d4824;
  }
  if (local_c < DAT_004d4840 != (NANP(local_c) || NANP(DAT_004d4840))) {
    local_c = DAT_004d4840;
  }
  local_8 = DAT_004d4804;
  if (DAT_004d47e8 < DAT_004d4804) {
    local_8 = DAT_004d47e8;
  }
  if (DAT_004d4820 < local_8) {
    local_8 = DAT_004d4820;
  }
  if (DAT_004d483c < local_8) {
    local_8 = DAT_004d483c;
  }
  local_4 = DAT_004d4808;
  if (DAT_004d47ec < DAT_004d4808 != (NANP(DAT_004d47ec) || NANP(DAT_004d4808))) {
    local_4 = DAT_004d47ec;
  }
  if (DAT_004d4824 < local_4) {
    local_4 = DAT_004d4824;
  }
  if (DAT_004d4840 < local_4) {
    local_4 = DAT_004d4840;
  }
  iVar6 = *(int *)((int)DAT_004cee34 + 0xcc);
  fVar1 = (float)iVar6;
  if (iVar6 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  if (fVar1 <= _param_1) {
    iVar12 = *(int *)((int)DAT_004cee34 + 0xd0);
    fVar1 = (float)iVar12;
    if (iVar12 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    if (fVar1 <= local_c) {
      iVar6 = *(int *)((int)DAT_004cee34 + 0xd4) + iVar6;
      fVar1 = (float)iVar6;
      if (iVar6 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      if (fVar1 < local_8 == (NANP(fVar1) || NANP(local_8))) {
        iVar12 = *(int *)((int)DAT_004cee34 + 0xd8) + iVar12;
        fVar1 = (float)iVar12;
        if (iVar12 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        if (fVar1 < local_4 == (NANP(fVar1) || NANP(local_4))) {
          iVar6 = *(int *)(*(int *)((int)in_EAX + 0x3f4) + 8);
          if (*(int *)((int)this + 0x4b563c) != iVar6) {
            *(int *)((int)this + 0x4b563c) = iVar6;
            FUN_0045a3c0();
            (**(code **)(*DAT_004ce8f0 + 0x104))
                      (DAT_004ce8f0,0,**(undefined4 **)((int)this + 0x4b563c));
            iVar12 = extraout_ECX;
          }
          if (*(char *)((int)this + 0x4b5642) != '\x01') {
            FUN_0045a3c0();
            *(undefined *)((int)this + 0x4b5642) = 1;
            iVar12 = extraout_ECX_00;
          }
          uVar7 = DAT_004d47f8;
          uVar3 = _DAT_004d4814;
          uVar4 = _DAT_004d4830;
          uVar5 = _DAT_004d484c;
          if ((bVar2 & 2) == 0) {
            if ((*(byte *)((int)in_EAX + 0x47e) & 1) == 0) {
              uVar7 = *(undefined4 *)((int)in_EAX + 0x3bc);
            }
            else {
              uVar7 = *(undefined4 *)((int)in_EAX + 0x3c0);
            }
            uVar3 = uVar7;
            uVar4 = uVar7;
            uVar5 = uVar7;
            if (*(int *)((int)this + 0x88ed50) != 0) {
              uVar8 = FUN_00459a40(CONCAT31((int3)((uint)iVar12 >> 8),
                                            *(undefined *)((int)this + 0x88ed4e)));
              uVar9 = FUN_00459a40(CONCAT31((int3)((uint)extraout_ECX_01 >> 8),
                                            *(undefined *)((int)this + 0x88ed4d)));
              uVar10 = FUN_00459a40(CONCAT31((int3)((uint)extraout_ECX_02 >> 8),
                                             *(undefined *)((int)this + 0x88ed4c)));
              uVar11 = FUN_00459a40(CONCAT31((int3)((uint)extraout_ECX_03 >> 8),
                                             *(undefined *)((int)this + 0x88ed4f)));
              uVar7 = CONCAT13((char)uVar11,
                               (int3)CONCAT31(CONCAT21((short)uVar8,(char)uVar9),(char)uVar10));
              uVar3 = uVar7;
              uVar4 = uVar7;
              uVar5 = uVar7;
            }
          }
          _DAT_004d484c = uVar5;
          _DAT_004d4830 = uVar4;
          _DAT_004d4814 = uVar3;
          DAT_004d47f8 = uVar7;
          FUN_00459cf0();
          FUN_0045a4a0(extraout_ECX_04,&DAT_004d47e8);
        }
      }
    }
  }
  return 0;
}


