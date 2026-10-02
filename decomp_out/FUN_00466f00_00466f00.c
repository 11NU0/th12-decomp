/* undefined4 __stdcall FUN_00466f00(float * param_1) @ 00466f00  613 bytes */
#include "th12.h"

undefined4 FUN_00466f00(float *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_EAX;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint extraout_EDX;
  int iVar9;
  int iVar10;
  undefined4 *unaff_EDI;
  float10 fVar11;
  ulonglong uVar12;
  undefined4 local_8;
  
  iVar2 = *(int *)(in_EAX + 0x1008);
  iVar9 = *(int *)(unaff_EDI[1] + 0x10) + 4 + (int)param_1 * 4;
  local_8 = 0;
  iVar5 = iVar2 + 0xc;
  if (iVar2 == 0) {
    *(undefined4 *)(in_EAX + 8) = 0;
    *(int *)(in_EAX + 0x1008) = *(int *)(in_EAX + 0x1008) + 4;
    iVar5 = 0x10;
  }
  iVar10 = (int)param_1 + 1;
  if (iVar10 < (int)(uint)*(byte *)(unaff_EDI[1] + 0xb)) {
    param_1 = (float *)(iVar5 + 8 + in_EAX);
    uVar7 = iVar9 + 4;
    do {
      iVar5 = unaff_EDI[1];
      cVar1 = *(char *)(iVar5 + 0x10 + iVar9);
      if ((cVar1 == 'f') || (cVar1 == 'g')) {
        fVar4 = *(float *)(iVar5 + 0x10 + (uVar7 & 0xfffffffc));
        uVar8 = (uint)*(ushort *)(iVar5 + 8);
        fVar11 = (float10)fVar4;
        if ((1 << ((byte)iVar10 & 0x1f) & uVar8) != 0) {
          fVar11 = FUN_00468fe0(iVar10,uVar8,fVar4);
          uVar8 = extraout_EDX;
        }
        if (*(char *)(iVar9 + 0x11 + unaff_EDI[1]) != 'f') {
          uVar12 = FUN_004931e0(unaff_EDI[1],uVar8);
          fVar4 = (float)uVar12;
          goto LAB_00467017;
        }
        *param_1 = (float)fVar11;
      }
      else {
        fVar4 = *(float *)(iVar5 + 0x10 + (uVar7 & 0xfffffffc));
        if ((1 << ((byte)iVar10 & 0x1f) & (uint)*(ushort *)(iVar5 + 8)) != 0) {
          uVar12 = FUN_00468f70(unaff_EDI,(int)fVar4);
          fVar4 = (float)uVar12;
        }
        if (*(char *)(iVar9 + 0x11 + unaff_EDI[1]) == 'f') {
          *param_1 = (float)(int)fVar4;
        }
        else {
LAB_00467017:
          *param_1 = fVar4;
        }
      }
      uVar7 = uVar7 + 8;
      param_1 = param_1 + 1;
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 8;
    } while (iVar10 < (int)(uint)*(byte *)(unaff_EDI[1] + 0xb));
  }
  iVar5 = *(int *)(in_EAX + 0x1008);
  if (iVar2 == 0) {
    *(undefined4 *)(in_EAX + 0x1008) = 4;
  }
  else {
    if (-1 < iVar5 + -4) {
      *(int *)(in_EAX + 0x1008) = iVar5 + -4;
      local_8 = *(undefined4 *)(iVar5 + 4 + in_EAX);
    }
    *(int *)(in_EAX + 0x1008) = iVar2;
    *(undefined4 *)(iVar2 + 4 + in_EAX) = local_8;
  }
  if (*(int *)(in_EAX + 0x1008) + 4 < 0x1000) {
    *(int *)(*(int *)(in_EAX + 0x1008) + 8 + in_EAX) = iVar5;
    *(int *)(in_EAX + 0x1008) = *(int *)(in_EAX + 0x1008) + 4;
  }
  iVar5 = *(int *)(in_EAX + 0x1008);
  if (iVar2 == 0) {
    uVar6 = 0;
    if (iVar5 + 4 < 0x1000) {
      *(undefined4 *)(iVar5 + 8 + in_EAX) = 0;
      *(int *)(in_EAX + 0x1008) = *(int *)(in_EAX + 0x1008) + 4;
    }
    iVar5 = *(int *)(in_EAX + 0x1008);
    if (0xfff < iVar5 + 4) goto LAB_004670f9;
  }
  else {
    if (iVar5 + 4 < 0x1000) {
      *(undefined4 *)(iVar5 + 8 + in_EAX) = *unaff_EDI;
      *(int *)(in_EAX + 0x1008) = *(int *)(in_EAX + 0x1008) + 4;
    }
    iVar5 = *(int *)(in_EAX + 0x1008);
    if (0xfff < iVar5 + 4) goto LAB_004670f9;
    uVar6 = unaff_EDI[1];
  }
  *(undefined4 *)(iVar5 + 8 + in_EAX) = uVar6;
  *(int *)(in_EAX + 0x1008) = *(int *)(in_EAX + 0x1008) + 4;
LAB_004670f9:
  uVar6 = *(undefined4 *)(unaff_EDI[0x405] + 4);
  *(int *)(unaff_EDI[0x405] + 4) = in_EAX;
  iVar5 = unaff_EDI[0x405];
  iVar9 = FUN_004694f0((byte *)(unaff_EDI[1] + 0x14));
  *(int *)(*(int *)(iVar5 + 4) + 4) = iVar9;
  puVar3 = *(undefined4 **)(iVar5 + 4);
  *puVar3 = 0;
  if (puVar3[1] == 0) {
    FUN_00466ea0();
    unaff_EDI[1] = 0;
    return 0xffffffff;
  }
  *(undefined4 *)(unaff_EDI[0x405] + 4) = uVar6;
  return 0;
}


