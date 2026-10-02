/* undefined4 __thiscall FUN_00439630(void * this, int * param_1, undefined4 param_2) @ 00439630  928 bytes */
#include "th12.h"

undefined4 __thiscall FUN_00439630(void *this,int *param_1,undefined4 param_2)

{
  float fVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *extraout_ECX;
  int *extraout_ECX_00;
  int *piVar8;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int *piVar9;
  int unaff_EBX;
  int *piVar10;
  undefined4 *puVar11;
  float10 fVar12;
  
  piVar3 = param_1;
  puVar11 = (undefined4 *)(unaff_EBX + 0xa58);
  if ((*(char *)((int)param_1 + 0x1d) == '\x02') &&
     (*(int *)(unaff_EBX + 0xc430 + *(char *)(param_1 + 7) * 4) != 0)) {
    return 0;
  }
  iVar4 = 0;
  while (puVar11[0x12] != 0) {
    iVar4 = iVar4 + 1;
    puVar11 = puVar11 + 0x1e;
    if (0xff < iVar4) {
      return 0;
    }
  }
  puVar11[0x12] = 1;
  puVar11[0x1d] = param_1;
  if ((puVar11[4] & 1) == 0) {
    puVar11[2] = 0;
    puVar11[1] = 0;
    *puVar11 = 0xfff0bdc1;
    puVar11[3] = &DAT_004b2ed0;
    puVar11[4] = puVar11[4] | 1;
  }
  puVar11[2] = 0;
  puVar11[1] = 0;
  *puVar11 = 0xffffffff;
  puVar11[0x18] = (int)*(short *)((int)param_1 + 2);
  puVar11[0x1a] = param_1[3];
  puVar11[0x1b] = param_1[4];
  if (*(char *)(param_1 + 7) == '\0') {
                    /* WARNING: Load size is inaccurate */
    puVar11[5] = *this;
    puVar11[6] = *(undefined4 *)((int)this + 4);
    uVar7 = *(undefined4 *)((int)this + 8);
  }
  else {
    iVar5 = *(char *)(param_1 + 7) * 0xe4;
    iVar4 = *(int *)(iVar5 + 0x81dc + unaff_EBX);
    puVar11[5] = (float)*(int *)(iVar5 + 0x81d8 + unaff_EBX) * 0.0078125;
    puVar11[6] = (float)iVar4 * 0.0078125;
    uVar7 = 0;
  }
  puVar11[7] = uVar7;
  if (*(char *)((int)param_1 + 0x1d) == '\x02') {
    *(undefined4 *)(unaff_EBX + 0xc430 + *(char *)(param_1 + 7) * 4) = 1;
  }
  puVar11[0xb] = param_1[6];
  if ((float)param_1[5] < 1000.0) {
    if (((float)param_1[5] < 995.0) || (*(char *)(param_1 + 7) == '\0')) goto LAB_0043982e;
    fVar1 = *(float *)(*(char *)(param_1 + 7) * 0xe4 + 0x8224 + unaff_EBX);
LAB_00439831:
    fVar12 = FUN_004646e0(fVar1);
    fVar12 = FUN_004646e0((float)fVar12);
    puVar11[0xc] = (float)fVar12;
  }
  else {
    if (*(char *)(param_1 + 7) == '\0') {
LAB_0043982e:
      fVar1 = (float)param_1[5];
      goto LAB_00439831;
    }
    iVar4 = FUN_00464440();
    fVar1 = (float)iVar4;
    if (iVar4 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    param_1 = (int *)(((fVar1 * 4.656613e-10 - 1.0) * 3.1415927) / 12.0 +
                     *(float *)(*(char *)(piVar3 + 7) * 0xe4 + 0x8224 + unaff_EBX));
    fVar12 = FUN_004646e0((float)param_1);
    fVar12 = FUN_004646e0((float)fVar12);
    puVar11[0xc] = (float)fVar12;
    iVar4 = FUN_00464440();
    fVar1 = (float)iVar4;
    if (iVar4 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    param_1 = (int *)(fVar1 * 4.656613e-10 - 1.0);
    puVar11[0xb] = (float)param_1 + (float)param_1 + (float)piVar3[6];
  }
  if ((*(byte *)(puVar11 + 0x11) & 1) == 0) {
    FUN_00465390(puVar11 + 8,(float)puVar11[0xc],(float)puVar11[0xb]);
    puVar11[10] = 0;
  }
  else {
    puVar11[0xd] = (float)puVar11[0xe] + (float)puVar11[0xd];
    param_1 = (int *)((float)puVar11[0xb] + (float)puVar11[0xc]);
    fVar12 = FUN_004646e0((float)param_1);
    fVar12 = FUN_004646e0((float)fVar12);
    puVar11[0xc] = (float)fVar12;
  }
  pvVar2 = *(void **)(unaff_EBX + 0x10);
  puVar11[5] = ((float)piVar3[1] - (float)puVar11[8]) + (float)puVar11[5];
  puVar11[6] = ((float)piVar3[2] - (float)puVar11[9]) + (float)puVar11[6];
  FUN_004615a0((void *)0x0,pvVar2,&param_1,*(short *)((int)piVar3 + 0x1e) + 5,0);
  puVar11[0x13] = param_1;
  piVar9 = extraout_EDX;
  if (param_1 != (int *)0x0) {
    for (puVar6 = (undefined4 *)DAT_004ce8cc[0x2215ae]; piVar9 = DAT_004ce8cc,
        puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)puVar6[1]) {
      piVar10 = (int *)*puVar6;
      if (*(int **)*puVar6 == param_1) goto LAB_0043991a;
    }
    puVar6 = (undefined4 *)DAT_004ce8cc[0x2215b0];
    if (puVar6 != (undefined4 *)0x0) {
      do {
        piVar9 = (int *)*puVar6;
        piVar10 = piVar9;
        if ((int *)*piVar9 == param_1) goto LAB_0043991a;
        puVar6 = (undefined4 *)puVar6[1];
      } while (puVar6 != (undefined4 *)0x0);
      piVar10 = (int *)0x0;
      goto LAB_0043991e;
    }
  }
  piVar10 = (int *)0x0;
LAB_0043991e:
  puVar11[0x13] = 0;
LAB_00439925:
  if ((piVar10[0x11f] & 0x20000000U) != 0) {
    piVar10[0xb] = piVar3[5];
    piVar10[0x11f] = piVar10[0x11f] | 4;
  }
  if (*(char *)((int)piVar3 + 0x1d) == '\x02') {
    FUN_004615a0((void *)0x0,*(void **)(unaff_EBX + 0x10),&param_1,8,0);
    puVar11[0x14] = param_1;
    piVar8 = extraout_ECX;
    piVar9 = param_1;
  }
  else {
    puVar11[0x14] = 0;
    piVar8 = param_1;
  }
  if ((code *)piVar3[9] != (code *)0x0) {
    (*(code *)piVar3[9])(param_2);
    piVar8 = extraout_ECX_00;
    piVar9 = extraout_EDX_00;
  }
  if (-1 < *(short *)((int)piVar3 + 0x22)) {
    FUN_00453e20(piVar8,piVar9,puVar11[5]);
  }
  piVar10[0x10c] = (int)((float)puVar11[5] + 32.0 + 192.0);
  piVar10[0x10d] = (int)((float)puVar11[6] + 16.0);
  piVar10[0x10e] = puVar11[7];
  return 0;
LAB_0043991a:
  if (piVar10 != (int *)0x0) goto LAB_00439925;
  goto LAB_0043991e;
}


