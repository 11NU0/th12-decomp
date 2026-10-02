/* bool __cdecl __handle_exc(uint param_1, double * param_2, uint param_3) @ 00496491  482 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __handle_exc
   
   Library: Visual Studio 2008 Release */

bool __cdecl __handle_exc(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  uint local_18;
  byte bStack_14;
  undefined uStack_13;
  ushort uStack_12;
  int local_c;
  uint local_8;
  
  uVar4 = param_1 & 0x1f;
  bVar3 = true;
  local_8 = uVar4;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_004911aa(1);
    uVar4 = param_1 & 0x17;
    goto LAB_00496651;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_004911aa(4);
    uVar4 = param_1 & 0x1b;
    goto LAB_00496651;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) == 0) || ((param_3 & 0x10) == 0)) goto LAB_00496651;
    bVar5 = (param_1 & 0x10) != 0;
    if (NAN(*param_2) == (*param_2 == 0.0)) {
      fVar6 = (float10)FUN_00496afd(SUB84(*param_2,0),(uint)((ulonglong)*param_2 >> 0x20),&local_c);
      dVar1 = (double)fVar6;
      local_18 = SUB84(dVar1,0);
      bStack_14 = (byte)((ulonglong)dVar1 >> 0x20);
      uStack_13 = (undefined)((ulonglong)dVar1 >> 0x28);
      uStack_12 = (ushort)((ulonglong)dVar1 >> 0x30);
      local_c = local_c + -0x600;
      if (local_c < -0x432) {
        dVar1 = dVar1 * 0.0;
        bVar5 = bVar3;
LAB_00496631:
        local_18 = SUB84(dVar1,0);
        bStack_14 = (byte)((ulonglong)dVar1 >> 0x20);
        uStack_13 = (undefined)((ulonglong)dVar1 >> 0x28);
        uStack_12 = (ushort)((ulonglong)dVar1 >> 0x30);
      }
      else {
        uStack_12 = uStack_12 & 0xf | 0x10;
        if (local_c < -0x3fd) {
          local_c = -0x3fd - local_c;
          do {
            if (((local_18 & 1) != 0) && (!bVar5)) {
              bVar5 = bVar3;
            }
            local_18 = local_18 >> 1;
            if ((bStack_14 & 1) != 0) {
              local_18 = local_18 | 0x80000000;
            }
            uVar4 = CONCAT22(uStack_12,CONCAT11(uStack_13,bStack_14)) >> 1;
            bStack_14 = (byte)uVar4;
            uStack_13 = (undefined)(uVar4 >> 8);
            uStack_12 = uStack_12 >> 1;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        if (dVar1 < 0.0) {
          dVar1 = -(double)CONCAT26(uStack_12,CONCAT15(uStack_13,CONCAT14(bStack_14,local_18)));
          goto LAB_00496631;
        }
      }
      *param_2 = (double)CONCAT26(uStack_12,CONCAT15(uStack_13,CONCAT14(bStack_14,local_18)));
      bVar3 = bVar5;
    }
    if (bVar3) {
      FUN_004911aa(0x10);
    }
    uVar4 = local_8 & 0xfffffffd;
    local_8 = uVar4;
    goto LAB_00496651;
  }
  FUN_004911aa(8);
  uVar4 = param_3 & 0xc00;
  dVar1 = _DAT_004b3890;
  dVar2 = _DAT_004b3890;
  if (uVar4 == 0) {
    if (0.0 < *param_2 == NAN(*param_2)) {
LAB_00496571:
      dVar1 = -dVar2;
    }
LAB_00496573:
    *param_2 = dVar1;
  }
  else {
    if (uVar4 == 0x400) {
      dVar1 = _DAT_004b38a0;
      if (0.0 < *param_2 == NAN(*param_2)) goto LAB_00496571;
      goto LAB_00496573;
    }
    dVar2 = _DAT_004b38a0;
    if (uVar4 == 0x800) {
      if (0.0 < *param_2 == NAN(*param_2)) goto LAB_00496571;
      goto LAB_00496573;
    }
    if (uVar4 == 0xc00) {
      dVar1 = _DAT_004b38a0;
      if (0.0 < *param_2 == NAN(*param_2)) goto LAB_00496571;
      goto LAB_00496573;
    }
  }
  uVar4 = param_1 & 0x1e;
LAB_00496651:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_004911aa(0x20);
    uVar4 = uVar4 & 0xffffffef;
  }
  return uVar4 == 0;
}


