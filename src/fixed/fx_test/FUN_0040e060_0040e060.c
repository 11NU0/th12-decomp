/* undefined __thiscall FUN_0040e060(void * this, undefined4 param_1) @ 0040e060  1359 bytes */

#include "th12.h"

void __thiscall FUN_0040e060(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *in_EAX;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar11;
  char *pcVar12;
  void *pvVar13;
  undefined4 local_4;
  
  iVar6 = DAT_004b43cc;
  uVar4 = *(uint *)(DAT_004b43cc + 0x34);
  if ((uVar4 & 1) == 0) {
    *(undefined4 *)(DAT_004b43cc + 0x2c) = 0;
    *(undefined4 *)(iVar6 + 0x28) = 0;
    *(undefined4 *)(iVar6 + 0x24) = 0xfff0bdc1;
    *(undefined4 **)(iVar6 + 0x30) = &DAT_004b2ed0;
    *(uint *)(iVar6 + 0x34) = uVar4 | 1;
  }
  *(undefined4 *)(iVar6 + 0x2c) = 0;
  *(undefined4 *)(iVar6 + 0x28) = 0;
  *(undefined4 *)(iVar6 + 0x24) = 0xffffffff;
  *(void **)(iVar6 + 0x78) = this;
  pcVar8 = in_EAX;
  do {
    cVar3 = *pcVar8;
    pcVar8[(iVar6 + 0x38) - (int)in_EAX] = cVar3;
    iVar9 = DAT_004b4518;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  *(uint *)(iVar6 + 0x7c) = *(uint *)(iVar6 + 0x7c) & 0xffffffe7 | 3;
  iVar2 = DAT_004b451c;
  if (*(int *)(iVar9 + 0x10) != 1) {
    iVar9 = (int)this * 0x90;
    pcVar8 = (char *)((DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4 + iVar9 + 0x66c + DAT_004b451c);
    pcVar12 = in_EAX;
    do {
      cVar3 = *pcVar12;
      *pcVar8 = cVar3;
      pcVar12 = pcVar12 + 1;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    iVar1 = (DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4 + iVar9 + 0x66c + iVar2;
    iVar5 = *(int *)(iVar1 + 0x84);
    if (iVar5 < 99999) {
      *(int *)(iVar1 + 0x84) = iVar5 + 1;
    }
    iVar2 = iVar9 + 0x1aa24 + iVar2;
    pcVar8 = in_EAX;
    do {
      cVar3 = *pcVar8;
      pcVar8[iVar2 - (int)in_EAX] = cVar3;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    if (*(int *)(iVar2 + 0x84) < 99999) {
      *(int *)(iVar2 + 0x84) = *(int *)(iVar2 + 0x84) + 1;
    }
  }
  *(uint *)(iVar6 + 0x7c) = *(uint *)(iVar6 + 0x7c) & 0xffffffdf;
  if (*(int *)(DAT_004b43c4 + 0x3c) != 0) {
    *(uint *)(iVar6 + 0x7c) = *(uint *)(iVar6 + 0x7c) | 0x20;
  }
  iVar9 = DAT_004b43b8;
  *(uint *)(iVar6 + 0x7c) = *(uint *)(iVar6 + 0x7c) & 0xffffffbf;
  *(undefined4 *)(iVar6 + 0x90) = 1;
  FUN_004615a0((void *)0x0,*(void **)(iVar9 + 0x18fb4),&local_4,1,0);
  *(undefined4 *)(iVar6 + 0x14) = local_4;
  FUN_004615a0((void *)0x0,DAT_004cee70,&local_4,0x4a,0);
  iVar9 = DAT_004b43b8;
  *(undefined4 *)(iVar6 + 0x18) = local_4;
  FUN_004615a0((void *)0x0,*(void **)(iVar9 + 0x18fb4),&local_4,2,0);
  iVar9 = DAT_004ce8cc;
  *(undefined4 *)(iVar6 + 0x1c) = local_4;
  piVar10 = FUN_00461920(*(undefined4 *)(iVar6 + 0x18),iVar9,*(undefined4 *)(iVar6 + 0x18));
  if (piVar10 == (int *)0x0) {
    *(undefined4 *)(iVar6 + 0x18) = 0;
  }
  FUN_00460800(0xffffff,0,0,0,in_EAX);
  FUN_00453d90(extraout_ECX,0x22);
  FUN_004615a0((void *)0x0,*(void **)(&DAT_004debdc + DAT_004b43c8),&local_4,0x7f,0);
  iVar2 = DAT_004ce8cc;
  iVar9 = DAT_004b43dc;
  *(undefined4 *)(iVar6 + 0x20) = local_4;
  iVar9 = *(int *)(iVar9 + 0x1c);
  *(undefined4 *)(iVar6 + 0xac) = *(undefined4 *)(iVar9 + 0x1074);
  *(undefined4 *)(iVar6 + 0xb0) = *(undefined4 *)(iVar9 + 0x1078);
  *(undefined4 *)(iVar6 + 0xb4) = *(undefined4 *)(iVar9 + 0x107c);
  piVar10 = FUN_00461920(local_4,iVar2,local_4);
  if (piVar10 != (int *)0x0) {
    piVar10[0x10c] = (int)(*(float *)(iVar6 + 0xac) + 32.0 + 192.0);
    piVar10[0x10d] = (int)(*(float *)(iVar6 + 0xb0) + 16.0);
    piVar10[0x10e] = *(int *)(iVar6 + 0xb4);
  }
  piVar10 = FUN_00461920(*(undefined4 *)(iVar6 + 0x20),iVar2,*(undefined4 *)(iVar6 + 0x20));
  uVar7 = param_1;
  if (piVar10 == (int *)0x0) {
    *(undefined4 *)(iVar6 + 0x20) = 0;
  }
  piVar10 = piVar10 + 4;
  uVar11 = extraout_ECX_00;
  if (piVar10 != (int *)0x0) {
    uVar11 = 0x7d;
    do {
      iVar9 = *piVar10;
      if (*(short *)(iVar9 + 0x3ea) == 0x7d) goto LAB_0040e318;
      piVar10 = (int *)piVar10[1];
    } while (piVar10 != (int *)0x0);
  }
  iVar9 = 0;
LAB_0040e318:
  *(undefined4 *)(iVar9 + 0x404) = param_1;
  piVar10 = FUN_00461920(uVar11,iVar2,*(int *)(iVar6 + 0x20));
  if (piVar10 == (int *)0x0) {
    *(undefined4 *)(iVar6 + 0x20) = 0;
  }
  for (piVar10 = piVar10 + 4; piVar10 != (int *)0x0; piVar10 = (int *)piVar10[1]) {
    iVar9 = *piVar10;
    if (*(short *)(iVar9 + 0x3ea) == 0x7e) goto LAB_0040e358;
  }
  iVar9 = 0;
LAB_0040e358:
  *(undefined4 *)(iVar9 + 0x404) = uVar7;
  *(undefined4 *)(iVar6 + 0x88) = uVar7;
  iVar9 = (DAT_004b0ca8 + DAT_004b0cb0) * 2000000;
  *(int *)(iVar6 + 0x80) = iVar9;
  *(int *)(iVar6 + 0x84) = iVar9;
  if (99999999 < iVar9) {
    *(undefined4 *)(iVar6 + 0x84) = 99999999;
  }
  FUN_004615a0((void *)0x0,*(void **)(&DAT_004debdc + DAT_004b43c8),&param_1,0x89,0);
  switch(DAT_004b0cb0) {
  case 1:
    FUN_004615a0((void *)0x0,*(void **)(DAT_004b43dc + 0x48),&param_1,0xe,0);
    iVar2 = DAT_004b43dc;
    iVar9 = 0x15;
    *(undefined4 *)(iVar6 + 0x10) = param_1;
    pvVar13 = *(void **)(iVar2 + 0x48);
    break;
  case 2:
    FUN_004615a0((void *)0x0,*(void **)(DAT_004b43dc + 0x48),&param_1,0x11,0);
    iVar2 = DAT_004b43dc;
    iVar9 = 0x19;
    *(undefined4 *)(iVar6 + 0x10) = param_1;
    pvVar13 = *(void **)(iVar2 + 0x48);
    break;
  case 3:
LAB_0040e452:
    FUN_004615a0((void *)0x0,*(void **)(DAT_004b43dc + 0x48),&param_1,0xb,0);
    iVar9 = 0x12;
LAB_0040e58f:
    iVar2 = DAT_004b43dc;
    *(undefined4 *)(iVar6 + 0x10) = param_1;
    pvVar13 = *(void **)(iVar2 + 0x48);
    break;
  case 4:
    FUN_004615a0((void *)0x0,*(void **)(DAT_004b43dc + 0x48),&param_1,0x14,0);
    iVar2 = DAT_004b43dc;
    iVar9 = 0x1b;
    *(undefined4 *)(iVar6 + 0x10) = param_1;
    pvVar13 = *(void **)(iVar2 + 0x48);
    break;
  case 5:
    if (0x17 < DAT_004b0cb8) goto LAB_0040e452;
    FUN_004615a0((void *)0x0,*(void **)(DAT_004b43dc + 0x4c),&param_1,0xb,0);
    iVar2 = DAT_004b43dc;
    iVar9 = 0xe;
    *(undefined4 *)(iVar6 + 0x10) = param_1;
    pvVar13 = *(void **)(iVar2 + 0x4c);
    break;
  case 6:
    FUN_004615a0((void *)0x0,*(void **)(DAT_004b43dc + 0x48),&param_1,0xd,0);
    iVar2 = DAT_004b43dc;
    iVar9 = 0x14;
    *(undefined4 *)(iVar6 + 0x10) = param_1;
    pvVar13 = *(void **)(iVar2 + 0x48);
    break;
  case 7:
    if (0x17 < DAT_004b0cb8) {
      FUN_004615a0((void *)0x0,*(void **)(DAT_004b43dc + 0x48),&param_1,0xc,0);
      iVar9 = 0x14;
      goto LAB_0040e58f;
    }
    FUN_004615a0((void *)0x0,*(void **)(DAT_004b43dc + 0x4c),&param_1,0xe,0);
    iVar2 = DAT_004b43dc;
    iVar9 = 0x12;
    *(undefined4 *)(iVar6 + 0x10) = param_1;
    pvVar13 = *(void **)(iVar2 + 0x4c);
    break;
  default:
    goto switchD_0040e3c6_caseD_7;
  }
  FUN_004615a0((void *)0x0,pvVar13,&param_1,iVar9,0);
switchD_0040e3c6_caseD_7:
  return;
}


