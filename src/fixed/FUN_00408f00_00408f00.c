/* undefined4 __fastcall FUN_00408f00(undefined4 param_1) @ 00408f00  765 bytes */
#include "th12.h"

undefined4 __fastcall FUN_00408f00(undefined4 param_1)

{
  int *piVar1;
  uint *_Dst;
  int *piVar2;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  undefined4 extraout_ECX_03;
  void *this;
  void *extraout_ECX_04;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint uVar3;
  int unaff_EDI;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  piVar1 = FUN_00461920(param_1,DAT_004ce8cc,*(int *)((int)unaff_EDI + 0x40));
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)((int)unaff_EDI + 0x40) = 0;
  }
  FUN_00406f60(0x28);
  if (piVar1 == (int *)0x0) {
    FUN_00461970(*(void **)((int)unaff_EDI + 0x48),(int)*(void **)((int)unaff_EDI + 0x48));
    *(undefined4 *)((int)unaff_EDI + 0x40) = 0;
    return 0xffffffff;
  }
  this = extraout_ECX;
  uVar3 = extraout_EDX;
  if (*(int *)((int)unaff_EDI + 0x18) == 0xb4) {
    FUN_00453d90(extraout_ECX,6);
    _Dst = (uint *)operator_new(0x44);
    this = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
    if (_Dst != (uint *)0x0) {
      _Dst[0x10] = _Dst[0x10] & 0xfffffffe;
      _memset(_Dst,0,0x44);
      *_Dst = *_Dst | 2;
      FUN_00452a60((int)_Dst,8,4,1,0x3c,10);
      this = extraout_ECX_01;
      uVar3 = extraout_EDX_01;
    }
  }
  if (*(int *)((int)unaff_EDI + 0x18) == 0) {
    uVar8 = 0xd;
    iVar7 = 0xb4;
    uVar6 = 0x3eb60b61;
    uVar5 = 0x41800000;
LAB_00408fe3:
    FUN_004390f0((undefined4 *)((int)unaff_EDI + 0x508),uVar5,uVar6,iVar7,uVar8);
    this = extraout_ECX_02;
    uVar3 = extraout_EDX_02;
  }
  else if (*(int *)((int)unaff_EDI + 0x18) == 0xb4) {
    uVar8 = 0x50;
    iVar7 = 100;
    uVar6 = 0x41a00000;
    uVar5 = 0x42a00000;
    goto LAB_00408fe3;
  }
  iVar7 = *(int *)((int)unaff_EDI + 0x18);
  if (iVar7 < 0xfa) {
    if (0x1d < iVar7) {
      iVar7 = FUN_00464440();
      fVar9 = (float)iVar7;
      if (iVar7 < 0) {
        fVar9 = fVar9 + 4.2949673e+09;
      }
      fVar9 = (float)piVar1[0x10] * fVar9 * 2.3283064e-10;
      local_10 = fVar9;
      fVar4 = FUN_00409310();
      FUN_004092f0(&local_c,(float)fVar4,fVar9);
      local_4 = *(float *)((int)unaff_EDI + 0x510) + 0.0;
      local_c = local_c + *(float *)((int)unaff_EDI + 0x508) + 32.0 + 192.0;
      local_8 = *(float *)((int)unaff_EDI + 0x50c) + local_8 + 16.0;
      FUN_0040fbe0((int *)&local_10,(void *)0x5);
      piVar2 = FUN_00461920(extraout_ECX_03,DAT_004ce8cc,(int)local_10);
      this = (void *)(piVar2[0x11f] & 0xffffff3fU | 0x20);
      piVar2[0x11f] = (int)this;
      uVar3 = extraout_EDX_03;
      goto LAB_004091b7;
    }
    if (iVar7 < 0xfa) goto LAB_004091b7;
  }
  iVar7 = FUN_00464440();
  fVar9 = (float)iVar7;
  if (iVar7 < 0) {
    fVar9 = fVar9 + 4.2949673e+09;
  }
  local_10 = fVar9 * 4.656613e-10 - 1.0;
  local_c = local_10 * 192.0;
  iVar7 = FUN_00464440();
  local_10 = (float)iVar7;
  if (iVar7 < 0) {
    local_10 = local_10 + 4.2949673e+09;
  }
  local_10 = local_10 * 2.3283064e-10;
  local_4 = 0.0;
  local_c = local_c + 32.0 + 192.0;
  local_8 = local_10 * 448.0 + 16.0;
  FUN_0040fbe0((int *)&local_10,(void *)0x5);
  piVar2 = FUN_00461920(local_10,DAT_004ce8cc,(int)local_10);
  uVar3 = piVar2[0x11f] & 0xffffff3fU | 0x20;
  piVar2[0x11f] = uVar3;
  this = extraout_ECX_04;
LAB_004091b7:
  if (399 < *(int *)((int)unaff_EDI + 0x18)) {
    FUN_00461970(this,*(int *)((int)unaff_EDI + 0x40));
    FUN_00461970(*(void **)((int)unaff_EDI + 0x48),(int)*(void **)((int)unaff_EDI + 0x48));
    *(undefined4 *)((int)unaff_EDI + 0x40) = 0;
    return 0;
  }
  FUN_00409220(this,uVar3);
  *(int *)((int)unaff_EDI + 0x514) = piVar1[0x11];
  return 0;
}


