/* undefined4 __thiscall FUN_004287c0(void * this, undefined4 * param_1) @ 004287c0  758 bytes */

#include "th12.h"

undefined4 __thiscall FUN_004287c0(void *this,undefined4 *param_1)

{
  short sVar1;
  void *this_00;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  undefined4 extraout_ECX_01;
  short *extraout_EDX;
  short *extraout_EDX_00;
  short *psVar4;
  uint uVar5;
  undefined4 *puVar6;
  float local_14;
  float local_10;
  
  puVar6 = (undefined4 *)((int)this + 0x454);
  for (iVar2 = 0x7a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)((int)this + 0xc) = 2;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x450) = *(undefined2 *)((int)this + 0x478);
  *(undefined2 *)((int)this + 0x452) = *(undefined2 *)((int)this + 0x47a);
  FUN_00402520();
  iVar2 = DAT_004b44f4;
  *(undefined **)((int)this + 0xae8) = &LAB_00428ac0;
  *(void **)((int)this + 0xaec) = this;
  FUN_00454ee0(*(undefined2 **)(iVar2 + 0x488),
               *(short **)(&DAT_004af280 + *(short *)((int)this + 0x450) * 0xd0));
  uVar3 = extraout_ECX;
  if (*(code **)((int)this + 0xad0) != (code *)0x0) {
    (**(code **)((int)this + 0xad0))();
    uVar3 = extraout_ECX_00;
  }
  *(undefined2 *)((int)this + 0xa00) = 2;
  FUN_00455630(uVar3,(short *)0x2,(int)this + 0x63c);
  iVar2 = DAT_004b44f4;
  *(uint *)((int)this + 0xab8) = *(uint *)((int)this + 0xab8) & 0xffffff3f | 0x20;
  sVar1 = *(short *)((int)this + 0x47a);
  *(uint *)((int)this + 0xab8) = *(uint *)((int)this + 0xab8) & 0xf0c7ffff | 0xc00000;
  this_00 = *(void **)(iVar2 + 0x488);
  FUN_00402520();
  *(undefined *)((int)this + 0xf8d) = 0x10;
  *(undefined *)((int)this + 0xf8c) = 0x10;
  FUN_00454d10(this_00,(void *)((int)this + 0xaf0),sVar1 + 0x35);
  psVar4 = extraout_EDX;
  if (*(code **)((int)this + 0xf84) != (code *)0x0) {
    (**(code **)((int)this + 0xf84))();
    psVar4 = extraout_EDX_00;
  }
  *(undefined2 *)((int)this + 0xeb4) = 2;
  FUN_00455630(2,psVar4,(uint)((int)this + 0xaf0));
  uVar5 = *(uint *)((int)this + 0xf6c) & 0xffffff3f | 0x20;
  *(uint *)((int)this + 0xf6c) = uVar5;
  *(uint *)((int)this + 0xf6c) = *(uint *)((int)this + 0xf6c) & 0xf0ffffff | 0x800000;
  if ((*(uint *)((int)this + 0x448) & 1) == 0) {
    *(undefined4 *)((int)this + 0x440) = 0;
    *(undefined4 *)((int)this + 0x43c) = 0;
    *(undefined4 *)((int)this + 0x438) = 0xfff0bdc1;
    *(undefined4 **)((int)this + 0x444) = &DAT_004b2ed0;
    *(uint *)((int)this + 0x448) = *(uint *)((int)this + 0x448) | 1;
  }
  *(undefined4 *)((int)this + 0x43c) = 0x1e;
  *(undefined4 *)((int)this + 0x440) = 0x41f00000;
  *(undefined4 *)((int)this + 0x438) = 0x1d;
  if (-1 < *(int *)((int)this + 0x634)) {
    FUN_00453e20(extraout_ECX_01,uVar5,0);
  }
  if ((*(uint *)((int)this + 0x38) & 1) == 0) {
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x28) = 0xfff0bdc1;
    *(undefined4 **)((int)this + 0x34) = &DAT_004b2ed0;
    *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) | 1;
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  if ((*(uint *)((int)this + 0x4c) & 1) == 0) {
    *(undefined4 *)((int)this + 0x44) = 0;
    *(undefined4 *)((int)this + 0x40) = 0;
    *(undefined4 *)((int)this + 0x3c) = 0xfff0bdc1;
    *(undefined4 **)((int)this + 0x48) = &DAT_004b2ed0;
    *(uint *)((int)this + 0x4c) = *(uint *)((int)this + 0x4c) | 1;
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)this + 0x454);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 0x458);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)this + 0x45c);
  if (NAN(*(float *)((int)this + 0x47c)) == (*(float *)((int)this + 0x47c) == 0.0)) {
    FUN_0042e880(&local_14,*(float *)((int)this + 0x460),*(float *)((int)this + 0x47c));
    *(float *)((int)this + 0x50) = local_14 + *(float *)((int)this + 0x50);
    *(float *)((int)this + 0x54) = *(float *)((int)this + 0x54) + local_10;
  }
  uVar3 = 0;
  *(float *)((int)this + 0x6c) = *(float *)((int)this + 0x468);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)this + 0x470);
  *(float *)((int)this + 0x74) = *(float *)((int)this + 0x474);
  *(float *)((int)this + 0x68) = *(float *)((int)this + 0x460);
  if (0.0 < *(float *)((int)this + 0x468)) {
    uVar3 = 0x3c23d70a;
  }
  *(undefined4 *)((int)this + 0x78) = uVar3;
  FUN_0042e880((void *)((int)this + 0x5c),*(float *)((int)this + 0x460),
               *(float *)((int)this + 0x474));
  return 0;
}


