/* undefined4 __stdcall FUN_004237e0(int param_1) @ 004237e0  1768 bytes */
#include "th12.h"

undefined4 __stdcall FUN_004237e0(int param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  void *this;
  undefined4 *in_EAX;
  void *pvVar7;
  undefined4 *puVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar11;
  undefined local_44;
  float fStack_30;
  float fStack_2c;
  float afStack_28 [3];
  float fStack_1c;
  float afStack_18 [3];
  float fStack_c;
  float afStack_8 [2];
  
  if (in_EAX == (undefined4 *)0x0) {
    return 0;
  }
LAB_004237f0:
  puVar1 = (undefined4 *)in_EAX[1];
  pfVar2 = (float *)*in_EAX;
  if ((pfVar2[0x1a] == 0.0) || (pfVar2[0x1a] == DAT_004b0cb8)) {
    pfVar2[0x18] = (float)((int)pfVar2[0x18] + -1);
  }
  if ((int)pfVar2[0x18] < 1) {
    iVar3 = *(int *)((int)param_1 + 0x1a4);
    iVar4 = *(int *)(param_1 + 0xdc + iVar3 * 4);
    if (iVar4 != 0) {
      for (puVar8 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856b8); puVar8 != (undefined4 *)0x0;
          puVar8 = (undefined4 *)puVar8[1]) {
        piVar9 = (int *)*puVar8;
        if (*piVar9 == iVar4) goto LAB_0042386d;
      }
      for (puVar8 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856c0); puVar8 != (undefined4 *)0x0;
          puVar8 = (undefined4 *)puVar8[1]) {
        piVar9 = (int *)*puVar8;
        if (*piVar9 == iVar4) goto LAB_0042386d;
      }
    }
    goto LAB_0042389f;
  }
  goto LAB_00423eb2;
LAB_0042386d:
  if ((piVar9 != (int *)0x0) && (piVar9[0x11f] = piVar9[0x11f] | 0x10000000, piVar9[6] == 0)) {
    for (piVar9 = (int *)piVar9[5]; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[1]) {
      *(uint *)(*piVar9 + 0x47c) = *(uint *)(*piVar9 + 0x47c) | 0x10000000;
    }
  }
LAB_0042389f:
  *(undefined4 *)(param_1 + 0xdc + iVar3 * 4) = 0;
  pfVar2[1] = pfVar2[0x1f] * 8.0 + pfVar2[1];
  this = DAT_004cee70;
  if (1.0 < pfVar2[0x1f]) {
    iVar3 = *(int *)((int)param_1 + 0x1a4);
    if (pfVar2[0x1f] <= 2.0) {
      if ((DAT_004cee78 & 0x8000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
        DAT_004cf221 = DAT_004cf221 + '\x01';
      }
      *(int *)((int)this + 0x130) = *(int *)((int)this + 0x130) + 1;
      pvVar7 = FUN_004621c0();
      *(uint *)((int)pvVar7 + 0x480) = *(uint *)((int)pvVar7 + 0x480) | 1;
      *(undefined4 *)((int)pvVar7 + 0x20) = 0x17;
      *(float *)((int)pvVar7 + 0x430) = *pfVar2 + 32.0 + 192.0;
      *(float *)((int)pvVar7 + 0x434) = pfVar2[1] + 16.0;
      *(float *)((int)pvVar7 + 0x438) = pfVar2[2];
      FUN_00454d10(this,pvVar7,iVar3 + 0xe);
      puVar8 = (( undefined4 * (__stdcall *)())FUN_00461250)();
      uVar5 = *puVar8;
      if ((DAT_004cee78 & 0x8000) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
        DAT_004cf221 = DAT_004cf221 + -1;
      }
      iVar3 = *(int *)((int)param_1 + 0x1a4);
      *(undefined4 *)(param_1 + 0xdc + iVar3 * 4) = uVar5;
      iVar4 = *(int *)((int)param_1 + 0x1a4);
      piVar9 = FUN_00461920(iVar3,DAT_004ce8cc,*(int *)(param_1 + 0xdc + iVar4 * 4));
      if (piVar9 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0xdc + iVar4 * 4) = 0;
      }
      pfVar10 = afStack_28 + 2;
      pfVar11 = afStack_18;
      local_44 = (undefined)(int)ROUND(pfVar2[0x1f] * 15.0);
      *(undefined *)((int)piVar9 + 0x49d) = local_44;
      *(undefined *)((int)piVar9 + 0x127) = local_44;
      afStack_28[2] = pfVar2[0x1f] * 0.5;
      afStack_18[0] = afStack_28[2] * 1.5;
      afStack_18[1] = 0.0;
      fStack_1c = afStack_28[2];
    }
    else {
      if ((DAT_004cee78 & 0x8000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
        DAT_004cf221 = DAT_004cf221 + '\x01';
      }
      *(int *)((int)this + 0x130) = *(int *)((int)this + 0x130) + 1;
      pvVar7 = FUN_004621c0();
      *(uint *)((int)pvVar7 + 0x480) = *(uint *)((int)pvVar7 + 0x480) | 1;
      *(undefined4 *)((int)pvVar7 + 0x20) = 0x17;
      *(float *)((int)pvVar7 + 0x430) = *pfVar2 + 32.0 + 192.0;
      *(float *)((int)pvVar7 + 0x434) = pfVar2[1] + 16.0;
      *(float *)((int)pvVar7 + 0x438) = pfVar2[2];
      FUN_00454d10(this,pvVar7,iVar3 + 0xe);
      puVar8 = (( undefined4 * (__stdcall *)())FUN_00461250)();
      uVar5 = *puVar8;
      if ((DAT_004cee78 & 0x8000) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
        DAT_004cf221 = DAT_004cf221 + -1;
      }
      *(undefined4 *)(param_1 + 0xdc + *(int *)((int)param_1 + 0x1a4) * 4) = uVar5;
      iVar3 = *(int *)((int)param_1 + 0x1a4);
      uVar5 = *(undefined4 *)(param_1 + 0xdc + iVar3 * 4);
      piVar9 = FUN_00461920(uVar5,DAT_004ce8cc,uVar5);
      if (piVar9 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0xdc + iVar3 * 4) = 0;
      }
      *(undefined *)((int)piVar9 + 0x49d) = 0x1e;
      *(undefined *)((int)piVar9 + 0x127) = 0x1e;
      afStack_18[2] = pfVar2[0x1f] * 0.5;
      pfVar10 = afStack_18 + 2;
      pfVar11 = afStack_8;
      afStack_8[0] = afStack_18[2] * 1.5;
      afStack_8[1] = 0.0;
      fStack_c = afStack_18[2];
    }
    goto LAB_00423c9a;
  }
  iVar3 = *(int *)((int)param_1 + 0x1a4);
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + '\x01';
  }
  *(int *)((int)this + 0x130) = *(int *)((int)this + 0x130) + 1;
  pvVar7 = FUN_004621c0();
  *(uint *)((int)pvVar7 + 0x480) = *(uint *)((int)pvVar7 + 0x480) | 1;
  *(undefined4 *)((int)pvVar7 + 0x20) = 0x17;
  *(float *)((int)pvVar7 + 0x430) = *pfVar2 + 32.0 + 192.0;
  *(float *)((int)pvVar7 + 0x434) = pfVar2[1] + 16.0;
  *(float *)((int)pvVar7 + 0x438) = pfVar2[2];
  FUN_00454d10(this,pvVar7,iVar3 + 4);
  puVar8 = (( undefined4 * (__stdcall *)())FUN_00461250)();
  uVar5 = *puVar8;
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + -1;
  }
  *(undefined4 *)(param_1 + 0xdc + *(int *)((int)param_1 + 0x1a4) * 4) = uVar5;
  iVar3 = *(int *)(param_1 + 0xdc + *(int *)((int)param_1 + 0x1a4) * 4);
  if (iVar3 != 0) {
    for (puVar8 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856b8); puVar8 != (undefined4 *)0x0;
        puVar8 = (undefined4 *)puVar8[1]) {
      piVar9 = (int *)*puVar8;
      if (*piVar9 == iVar3) goto LAB_004239dc;
    }
    puVar8 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856c0);
    if (puVar8 != (undefined4 *)0x0) {
      do {
        piVar9 = (int *)*puVar8;
        if (*piVar9 == iVar3) goto LAB_004239dc;
        puVar8 = (undefined4 *)puVar8[1];
      } while (puVar8 != (undefined4 *)0x0);
      piVar9 = (int *)0x0;
      goto LAB_004239e0;
    }
  }
  piVar9 = (int *)0x0;
LAB_004239e0:
  *(undefined4 *)(param_1 + 0xdc + *(int *)((int)param_1 + 0x1a4) * 4) = 0;
LAB_004239e6:
  *(undefined *)((int)piVar9 + 0x49d) = 0xf;
  *(undefined *)((int)piVar9 + 0x127) = 0xf;
  afStack_28[0] = pfVar2[0x1f] * 1.5;
  pfVar10 = &fStack_30;
  pfVar11 = afStack_28;
  afStack_28[1] = 0.0;
  fStack_30 = pfVar2[0x1f];
  fStack_2c = pfVar2[0x1f];
LAB_00423c9a:
  FUN_00425790(pfVar10,pfVar11,8,4);
  fVar6 = pfVar2[0x19];
  if (fVar6 == 0.0) {
    iVar3 = *(int *)((int)param_1 + 0x1a4);
    *(int *)(param_1 + 0x104 + iVar3 * 0xc) = piVar9[0x10c];
    iVar3 = param_1 + 0x104 + iVar3 * 0xc;
    *(int *)((int)iVar3 + 4) = piVar9[0x10d];
    *(int *)((int)iVar3 + 8) = piVar9[0x10e];
    *(float *)(param_1 + 0x17c + *(int *)((int)param_1 + 0x1a4) * 4) = pfVar2[0x20];
    FUN_004608f0(0xffffff,0,0,0,(char *)((int)pfVar2 + 7));
  }
  else if (fVar6 == 1.4013e-45) {
    iVar3 = *(int *)((int)param_1 + 0x1a4);
    *(int *)(param_1 + 0x104 + iVar3 * 0xc) = piVar9[0x10c];
    iVar3 = param_1 + 0x104 + iVar3 * 0xc;
    *(int *)((int)iVar3 + 4) = piVar9[0x10d];
    *(int *)((int)iVar3 + 8) = piVar9[0x10e];
    pfVar10 = (float *)(param_1 + 0x104 + *(int *)((int)param_1 + 0x1a4) * 0xc);
    *pfVar10 = pfVar2[0x20] * 0.5 + *pfVar10;
    *(float *)(param_1 + 0x17c + *(int *)((int)param_1 + 0x1a4) * 4) = pfVar2[0x20];
    FUN_00460760(0xffffff,0,0,0,(char *)((int)pfVar2 + 7));
    piVar9[0x11f] = piVar9[0x11f] & 0xffefffffU | 0x80000;
  }
  else if (fVar6 == 2.8026e-45) {
    iVar3 = *(int *)((int)param_1 + 0x1a4);
    *(int *)(param_1 + 0x104 + iVar3 * 0xc) = piVar9[0x10c];
    iVar3 = param_1 + 0x104 + iVar3 * 0xc;
    *(int *)((int)iVar3 + 4) = piVar9[0x10d];
    *(int *)((int)iVar3 + 8) = piVar9[0x10e];
    *(float *)(param_1 + 0x104 + *(int *)((int)param_1 + 0x1a4) * 0xc) =
         *(float *)(param_1 + 0x104 + *(int *)((int)param_1 + 0x1a4) * 0xc) - pfVar2[0x20] * 0.5;
    *(float *)(param_1 + 0x17c + *(int *)((int)param_1 + 0x1a4) * 4) = pfVar2[0x20];
    FUN_00460800(0xffffff,0,0,0,(char *)((int)pfVar2 + 7));
    piVar9[0x11f] = piVar9[0x11f] & 0xfff7ffffU | 0x100000;
  }
  piVar9[0xef] = (int)pfVar2[0x21];
  *(undefined *)((int)piVar9 + 0x3bf) = 0;
  piVar9[0xff] = (int)pfVar2[0x1b];
  piVar9[0x100] = (uint)*(byte *)((int)pfVar2 + 0x87);
  *(int *)((int)param_1 + 0x1a4) = (*(int *)((int)param_1 + 0x1a4) + 1) % 10;
  if (pfVar2[4] != 0.0) {
    *(float *)((int)pfVar2[4] + 8) = pfVar2[5];
  }
  if (pfVar2[5] != 0.0) {
    *(float *)((int)pfVar2[5] + 4) = pfVar2[4];
  }
  pfVar2[4] = 0.0;
  pfVar2[5] = 0.0;
  FUN_0046ca4f(pfVar2);
LAB_00423eb2:
  in_EAX = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  goto LAB_004237f0;
LAB_004239dc:
  if (piVar9 == (int *)0x0) goto LAB_004239e0;
  goto LAB_004239e6;
}


