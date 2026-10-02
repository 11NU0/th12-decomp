/* undefined4 __thiscall FUN_0042ab80(void * this, undefined4 * param_1) @ 0042ab80  543 bytes */
#include "th12.h"

undefined4 __thiscall FUN_0042ab80(void *this,undefined4 *param_1)

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
  for (iVar2 = 0x82; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)((int)this + 0xc) = 3;
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined2 *)((int)this + 0x450) = *(undefined2 *)((int)this + 0x4a4);
  *(undefined2 *)((int)this + 0x452) = *(undefined2 *)((int)this + 0x4a6);
  FUN_00402520();
  iVar2 = DAT_004b44f4;
  *(undefined **)((int)this + 0xb0c) = &LAB_00428ac0;
  *(void **)((int)this + 0xb10) = this;
  FUN_00454ee0(*(undefined2 **)(iVar2 + 0x488),
               *(short **)(&DAT_004af280 + *(short *)((int)this + 0x450) * 0xd0));
  uVar3 = extraout_ECX;
  if (*(code **)((int)this + 0xaf4) != (code *)0x0) {
    (**(code **)((int)this + 0xaf4))();
    uVar3 = extraout_ECX_00;
  }
  *(undefined2 *)((int)this + 0xa24) = 2;
  FUN_00455630(uVar3,(short *)0x2,(int)this + 0x660);
  iVar2 = DAT_004b44f4;
  *(uint *)((int)this + 0xadc) = *(uint *)((int)this + 0xadc) & 0xffffff3f | 0x20;
  sVar1 = *(short *)((int)this + 0x4a6);
  *(uint *)((int)this + 0xadc) = *(uint *)((int)this + 0xadc) & 0xf0c7ffff | 0xc00000;
  this_00 = *(void **)(iVar2 + 0x488);
  FUN_00402520();
  *(undefined *)((int)this + 0xfb1) = 0x10;
  *(undefined *)((int)this + 0xfb0) = 0x10;
  FUN_00454d10(this_00,(void *)((int)this + 0xb14),sVar1 + 0x35);
  psVar4 = extraout_EDX;
  if (*(code **)((int)this + 0xfa8) != (code *)0x0) {
    (**(code **)((int)this + 0xfa8))();
    psVar4 = extraout_EDX_00;
  }
  *(undefined2 *)((int)this + 0xed8) = 2;
  FUN_00455630(2,psVar4,(uint)((int)this + 0xb14));
  uVar5 = *(uint *)((int)this + 0xf90) & 0xffffff3f | 0x20;
  *(uint *)((int)this + 0xf90) = uVar5;
  *(uint *)((int)this + 0xf90) = *(uint *)((int)this + 0xf90) & 0xf0ffffff | 0x800000;
  if (-1 < *(int *)((int)this + 0x494)) {
    FUN_00453e20(extraout_ECX_01,uVar5,0);
  }
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)this + 0x454);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 0x458);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)this + 0x45c);
  if (NAN(*(float *)((int)this + 0x4a0)) == (*(float *)((int)this + 0x4a0) == 0.0)) {
    FUN_0042e880(&local_14,*(float *)((int)this + 0x46c),*(float *)((int)this + 0x4a0));
    *(float *)((int)this + 0x50) = local_14 + *(float *)((int)this + 0x50);
    *(float *)((int)this + 0x54) = *(float *)((int)this + 0x54) + local_10;
  }
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x478);
  *(undefined4 *)((int)this + 0x70) = 0x40000000;
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)this + 0x49c);
  *(undefined4 *)((int)this + 0x65c) = 0;
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)this + 0x480);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0x46c);
  return 0;
}


