/* undefined __stdcall FUN_0041f900(undefined4 param_1) @ 0041f900  732 bytes */

#include "th12.h"

void __stdcall FUN_0041f900(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  void *unaff_ESI;
  
  *(uint *)((int)unaff_ESI + 0x14) = *(uint *)((int)unaff_ESI + 0x14) & 0xfffffffe;
  *(uint *)((int)unaff_ESI + 0x28) = *(uint *)((int)unaff_ESI + 0x28) & 0xfffffffe;
  *(uint *)((int)unaff_ESI + 0x3c) = *(uint *)((int)unaff_ESI + 0x3c) & 0xfffffffe;
  _memset(unaff_ESI,0,0xac);
  if ((*(uint *)((int)unaff_ESI + 0x14) & 1) == 0) {
    *(undefined4 *)((int)unaff_ESI + 0xc) = 0;
    *(undefined4 *)((int)unaff_ESI + 8) = 0;
    *(undefined4 *)((int)unaff_ESI + 4) = 0xfff0bdc1;
    *(undefined4 **)((int)unaff_ESI + 0x10) = &DAT_004b2ed0;
    *(uint *)((int)unaff_ESI + 0x14) = *(uint *)((int)unaff_ESI + 0x14) | 1;
  }
  *(undefined4 *)((int)unaff_ESI + 0xc) = 0;
  *(undefined4 *)((int)unaff_ESI + 8) = 0;
  *(undefined4 *)((int)unaff_ESI + 4) = 0xffffffff;
  if ((*(uint *)((int)unaff_ESI + 0x28) & 1) == 0) {
    *(undefined4 *)((int)unaff_ESI + 0x20) = 0;
    *(undefined4 *)((int)unaff_ESI + 0x1c) = 0;
    *(undefined4 *)((int)unaff_ESI + 0x18) = 0xfff0bdc1;
    *(undefined4 **)((int)unaff_ESI + 0x24) = &DAT_004b2ed0;
    *(uint *)((int)unaff_ESI + 0x28) = *(uint *)((int)unaff_ESI + 0x28) | 1;
  }
  *(undefined4 *)((int)unaff_ESI + 0x20) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x1c) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x18) = 0xffffffff;
  *(undefined4 *)((int)unaff_ESI + 0x60) = 0;
  if ((*(uint *)((int)unaff_ESI + 0x3c) & 1) == 0) {
    *(undefined4 *)((int)unaff_ESI + 0x34) = 0;
    *(undefined4 *)((int)unaff_ESI + 0x30) = 0;
    *(undefined4 *)((int)unaff_ESI + 0x2c) = 0xfff0bdc1;
    *(undefined4 **)((int)unaff_ESI + 0x38) = &DAT_004b2ed0;
    *(uint *)((int)unaff_ESI + 0x3c) = *(uint *)((int)unaff_ESI + 0x3c) | 1;
  }
  *(undefined4 *)((int)unaff_ESI + 0x34) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x30) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)unaff_ESI + 100) = param_1;
  FUN_004615a0((void *)0x0,DAT_004cee70,&param_1,0,0);
  *(undefined4 *)((int)unaff_ESI + 0x4c) = param_1;
  FUN_004615a0((void *)0x0,DAT_004cee70,&param_1,1,0);
  iVar2 = DAT_004ce8cc;
  *(undefined4 *)((int)unaff_ESI + 0x50) = param_1;
  piVar3 = FUN_00461920(*(undefined4 *)((int)unaff_ESI + 0x4c),iVar2,
                        *(undefined4 *)((int)unaff_ESI + 0x4c));
  if (piVar3 == (int *)0x0) {
    *(undefined4 *)((int)unaff_ESI + 0x4c) = 0;
  }
  *(undefined *)(piVar3 + 0x127) = 0x10;
  piVar3 = FUN_00461920(extraout_ECX,iVar2,*(int *)((int)unaff_ESI + 0x4c));
  if (piVar3 == (int *)0x0) {
    *(undefined4 *)((int)unaff_ESI + 0x4c) = 0;
  }
  *(undefined *)((int)piVar3 + 0x49d) = 0x10;
  piVar3 = FUN_00461920(extraout_ECX_00,iVar2,*(int *)((int)unaff_ESI + 0x50));
  if (piVar3 == (int *)0x0) {
    *(undefined4 *)((int)unaff_ESI + 0x50) = 0;
  }
  *(undefined *)(piVar3 + 0x127) = 0x10;
  piVar3 = FUN_00461920(*(undefined4 *)((int)unaff_ESI + 0x50),iVar2,
                        *(undefined4 *)((int)unaff_ESI + 0x50));
  if (piVar3 == (int *)0x0) {
    *(undefined4 *)((int)unaff_ESI + 0x50) = 0;
  }
  *(undefined *)((int)piVar3 + 0x49d) = 0x10;
  FUN_004615a0((void *)0x0,DAT_004cee70,&param_1,2,0);
  *(undefined4 *)((int)unaff_ESI + 0x54) = param_1;
  FUN_004615a0((void *)0x0,DAT_004cee70,&param_1,3,0);
  iVar2 = DAT_004ce8cc;
  *(undefined4 *)((int)unaff_ESI + 0x58) = param_1;
  piVar3 = FUN_00461920(param_1,iVar2,*(int *)((int)unaff_ESI + 0x54));
  if (piVar3 == (int *)0x0) {
    *(undefined4 *)((int)unaff_ESI + 0x54) = 0;
  }
  *(undefined *)(piVar3 + 0x127) = 0x10;
  piVar3 = FUN_00461920(extraout_ECX_01,iVar2,*(int *)((int)unaff_ESI + 0x54));
  if (piVar3 == (int *)0x0) {
    *(undefined4 *)((int)unaff_ESI + 0x54) = 0;
  }
  *(undefined *)((int)piVar3 + 0x49d) = 0x10;
  piVar3 = FUN_00461920(*(undefined4 *)((int)unaff_ESI + 0x58),iVar2,
                        *(undefined4 *)((int)unaff_ESI + 0x58));
  if (piVar3 == (int *)0x0) {
    *(undefined4 *)((int)unaff_ESI + 0x58) = 0;
  }
  *(undefined *)(piVar3 + 0x127) = 0x10;
  piVar3 = FUN_00461920(extraout_ECX_02,iVar2,*(int *)((int)unaff_ESI + 0x58));
  if (piVar3 == (int *)0x0) {
    *(undefined4 *)((int)unaff_ESI + 0x58) = 0;
  }
  *(undefined *)((int)piVar3 + 0x49d) = 0x10;
  *(undefined4 *)((int)unaff_ESI + 0x68) = 0x41000000;
  *(undefined4 *)((int)unaff_ESI + 0x6c) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x70) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x74) = 0x41000000;
  *(undefined4 *)((int)unaff_ESI + 0x78) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x7c) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x80) = 0x41000000;
  *(undefined4 *)((int)unaff_ESI + 0x84) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x94) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x98) = 0;
  *(undefined4 *)((int)unaff_ESI + 0xa0) = 0xf8f08f;
  *(undefined4 *)((int)unaff_ESI + 0xa4) = 0x8088ff;
  *(undefined4 *)((int)unaff_ESI + 0xa8) = 0xd8d8d8;
  *(undefined4 *)((int)unaff_ESI + 0x9c) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x88) = 0;
  FUN_0040d230();
  piVar3 = *(int **)(DAT_004b44f4 + 0x18);
  while (piVar1 = piVar3, piVar1 != (int *)0x0) {
    piVar3 = (int *)piVar1[2];
    if (piVar1[3] != 1) {
      (**(code **)(*piVar1 + 0x14))(0,0);
    }
  }
  FUN_00414c60();
  return;
}


