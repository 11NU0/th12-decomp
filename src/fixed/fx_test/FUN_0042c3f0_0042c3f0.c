/* undefined4 __thiscall FUN_0042c3f0(void * this, undefined4 * param_1) @ 0042c3f0  815 bytes */

#include "th12.h"

undefined4 __thiscall FUN_0042c3f0(void *this,undefined4 *param_1)

{
  short sVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar5;
  int extraout_ECX_03;
  short *extraout_EDX;
  short *extraout_EDX_00;
  short *extraout_EDX_01;
  short *extraout_EDX_02;
  short *psVar6;
  int iVar7;
  undefined4 *puVar8;
  float local_14;
  float local_10;
  
  puVar8 = (undefined4 *)((int)this + 0x454);
  for (iVar4 = 0x78; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *param_1;
    param_1 = param_1 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)((int)this + 0xc) = 2;
  *(undefined4 *)((int)this + 0x10) = 2;
  *(undefined2 *)((int)this + 0x450) = *(undefined2 *)((int)this + 0x46c);
  *(undefined2 *)((int)this + 0x452) = *(undefined2 *)((int)this + 0x46e);
  FUN_00402520();
  iVar4 = DAT_004b44f4;
  *(undefined **)((int)this + 0xae0) = &LAB_0042e6d0;
  *(void **)((int)this + 0xae4) = this;
  FUN_00454ee0(*(undefined2 **)(iVar4 + 0x488),(short *)(*(short *)((int)this + 0x450) + 0xd9));
  uVar5 = extraout_ECX;
  psVar6 = extraout_EDX;
  if (*(code **)((int)this + 0xac8) != (code *)0x0) {
    (**(code **)((int)this + 0xac8))();
    uVar5 = extraout_ECX_00;
    psVar6 = extraout_EDX_00;
  }
  *(undefined2 *)((int)this + 0x9f8) = 2;
  FUN_00455630(uVar5,psVar6,(int)this + 0x634);
  iVar4 = DAT_004b44f4;
  *(uint *)((int)this + 0xab0) = *(uint *)((int)this + 0xab0) & 0xffffff3f | 0x20;
  sVar1 = *(short *)((int)this + 0x46e);
  *(uint *)((int)this + 0xab0) = *(uint *)((int)this + 0xab0) & 0xf0c7ffff | 0xc00000;
  pvVar2 = *(void **)(iVar4 + 0x488);
  FUN_00402520();
  *(undefined *)((int)this + 0xf85) = 0x10;
  *(undefined *)((int)this + 0xf84) = 0x10;
  FUN_00454d10(pvVar2,(void *)((int)this + 0xae8),sVar1 + 0x35);
  uVar5 = extraout_ECX_01;
  psVar6 = extraout_EDX_01;
  if (*(code **)((int)this + 0xf7c) != (code *)0x0) {
    (**(code **)((int)this + 0xf7c))();
    uVar5 = extraout_ECX_02;
    psVar6 = extraout_EDX_02;
  }
  *(undefined2 *)((int)this + 0xeac) = 2;
  FUN_00455630(uVar5,psVar6,(uint)((int)this + 0xae8));
  *(uint *)((int)this + 0xf64) = *(uint *)((int)this + 0xf64) & 0xffffff3f | 0x20;
  *(uint *)((int)this + 0xf64) = *(uint *)((int)this + 0xf64) & 0xf0ffffff | 0x800000;
  pvVar2 = _malloc(*(int *)((int)this + 0x470) * 0x38);
  *(void **)((int)this + 4000) = pvVar2;
  pvVar2 = _malloc(*(int *)((int)this + 0x470) * 0x14);
  iVar4 = *(int *)((int)this + 0x458);
  *(void **)((int)this + 0xf9c) = pvVar2;
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)this + 0x454);
  *(int *)((int)this + 0x54) = iVar4;
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)this + 0x45c);
  if (NAN(*(float *)((int)this + 0x474)) == (*(float *)((int)this + 0x474) == 0.0)) {
    FUN_0042e880(&local_14,*(float *)((int)this + 0x460),*(float *)((int)this + 0x474));
    *(float *)((int)this + 0x50) = *(float *)((int)this + 0x50) + local_14;
    *(float *)((int)this + 0x54) = *(float *)((int)this + 0x54) + local_10;
    iVar4 = extraout_ECX_03;
  }
  iVar7 = 0;
  if (0 < *(int *)((int)this + 0x470)) {
    iVar4 = 0;
    do {
      iVar3 = *(int *)((int)this + 0xf9c);
      *(undefined4 *)(iVar3 + iVar4) = *(undefined4 *)((int)this + 0x50);
      iVar3 = iVar3 + iVar4;
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)((int)this + 0x54);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)((int)this + 0x58);
      *(undefined4 *)(iVar4 + 0xc + *(int *)((int)this + 0xf9c)) =
           *(undefined4 *)((int)this + 0x460);
      iVar7 = iVar7 + 1;
      *(undefined4 *)(iVar4 + 0x10 + *(int *)((int)this + 0xf9c)) =
           *(undefined4 *)((int)this + 0x468);
      iVar4 = iVar4 + 0x14;
    } while (iVar7 < *(int *)((int)this + 0x470));
  }
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
  if (-1 < *(int *)((int)this + 0x62c)) {
    FUN_00453e20(iVar4,iVar7,0);
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
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)this + 0x464);
  *(float *)((int)this + 0x68) = *(float *)((int)this + 0x460);
  *(float *)((int)this + 0x74) = *(float *)((int)this + 0x468);
  FUN_0042e880((void *)((int)this + 0x5c),*(float *)((int)this + 0x460),
               *(float *)((int)this + 0x468));
  return 0;
}


