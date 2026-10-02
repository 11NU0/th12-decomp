/* undefined __fastcall FUN_00454fa0(int param_1, undefined2 * param_2) @ 00454fa0  285 bytes */
#include "th12.h"

void __fastcall FUN_00454fa0(int param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint in_EAX;
  short *psVar3;
  
  iVar2 = *(int *)(*(int *)((int)param_2 + 0x8e) + param_1 * 4);
  if ((iVar2 != 0) && (*(int *)((int)param_2 + 0x92) == 0)) {
    *(short *)((int)in_EAX + 0x3ea) = (short)param_1;
    *(undefined2 **)((int)in_EAX + 0x3f8) = param_2;
    if ((*(uint *)((int)in_EAX + 0x47c) & 0x400) != 0) {
      *(uint *)((int)in_EAX + 0x47c) = (*(uint *)((int)in_EAX + 0x47c) | 8) ^ 0x400;
      *(float *)((int)in_EAX + 0x40) = *(float *)((int)in_EAX + 0x40) * -1.0;
    }
    *(undefined2 *)((int)in_EAX + 0x47c) = 7;
    *(undefined4 *)((int)in_EAX + 0x3bc) = 0xffffffff;
    *(undefined4 *)((int)in_EAX + 0x70) = 0;
    *(undefined4 *)((int)in_EAX + 0x6c) = 0;
    *(undefined4 *)((int)in_EAX + 0x68) = 0xfff0bdc1;
    *(undefined4 *)((int)in_EAX + 0xe0) = 0;
    *(undefined4 *)((int)in_EAX + 300) = 0;
    *(undefined4 *)((int)in_EAX + 0x158) = 0;
    *(undefined4 *)((int)in_EAX + 0x1a4) = 0;
    *(undefined4 *)((int)in_EAX + 0x1e0) = 0;
    *(undefined4 *)((int)in_EAX + 0x21c) = 0;
    *(undefined4 *)((int)in_EAX + 0x268) = 0;
    *(undefined4 *)((int)in_EAX + 0x294) = 0;
    uVar1 = *param_2;
    *(uint *)((int)in_EAX + 0x47c) = *(uint *)((int)in_EAX + 0x47c) & 0xfffff3ff;
    *(undefined2 *)((int)in_EAX + 0x3e6) = uVar1;
    *(undefined2 **)((int)in_EAX + 0x3f8) = param_2;
    *(int *)((int)in_EAX + 0x3ec) = iVar2;
    *(int *)((int)in_EAX + 0x3f0) = iVar2;
    psVar3 = *(short **)((int)in_EAX + 0x78);
    if (((uint)psVar3 & 1) == 0) {
      psVar3 = (short *)((uint)psVar3 | 1);
      *(undefined4 *)((int)in_EAX + 0x70) = 0;
      *(undefined4 *)((int)in_EAX + 0x6c) = 0;
      *(undefined4 *)((int)in_EAX + 0x68) = 0xfff0bdc1;
      *(undefined4 **)((int)in_EAX + 0x74) = &DAT_004b2ed0;
      *(short **)((int)in_EAX + 0x78) = psVar3;
    }
    *(undefined4 *)((int)in_EAX + 0x70) = 0;
    *(undefined4 *)((int)in_EAX + 0x6c) = 0;
    *(undefined4 *)((int)in_EAX + 0x68) = 0xffffffff;
    *(uint *)((int)in_EAX + 0x47c) = *(uint *)((int)in_EAX + 0x47c) & 0xfffffffe;
    FUN_00455630(0,psVar3,in_EAX);
    *(int *)((int)DAT_004ce8cc + 0xa0) = *(int *)((int)DAT_004ce8cc + 0xa0) + 1;
  }
  return;
}


