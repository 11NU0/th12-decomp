/* undefined __fastcall FUN_00454ee0(undefined2 * param_1, short * param_2) @ 00454ee0  185 bytes */
#include "th12.h"

void __fastcall FUN_00454ee0(undefined2 *param_1,short *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  void *in_EAX;
  uint uVar3;
  
  if ((*(int *)(*(int *)((int)param_1 + 0x8e) + (int)param_2 * 4) != 0) &&
     (*(int *)((int)param_1 + 0x92) == 0)) {
    *(short *)((int)in_EAX + 0x3ea) = (short)param_2;
    uVar1 = *param_1;
    *(uint *)((int)in_EAX + 0x47c) = *(uint *)((int)in_EAX + 0x47c) & 0xfffff3ff;
    *(undefined2 *)((int)in_EAX + 0x3e6) = uVar1;
    *(undefined2 **)((int)in_EAX + 0x3f8) = param_1;
    uVar2 = *(undefined4 *)(*(int *)((int)param_1 + 0x8e) + (int)param_2 * 4);
    *(undefined4 *)((int)in_EAX + 0x3ec) = uVar2;
    *(undefined4 *)((int)in_EAX + 0x3f0) = uVar2;
    uVar3 = *(uint *)((int)in_EAX + 0x78);
    if ((uVar3 & 1) == 0) {
      uVar3 = uVar3 | 1;
      *(undefined4 *)((int)in_EAX + 0x70) = 0;
      *(undefined4 *)((int)in_EAX + 0x6c) = 0;
      *(undefined4 *)((int)in_EAX + 0x68) = 0xfff0bdc1;
      *(undefined4 **)((int)in_EAX + 0x74) = &DAT_004b2ed0;
      *(uint *)((int)in_EAX + 0x78) = uVar3;
    }
    *(undefined4 *)((int)in_EAX + 0x70) = 0;
    *(undefined4 *)((int)in_EAX + 0x6c) = 0;
    *(undefined4 *)((int)in_EAX + 0x68) = 0xffffffff;
    *(uint *)((int)in_EAX + 0x47c) = *(uint *)((int)in_EAX + 0x47c) & 0xfffffffe;
    FUN_00455630(uVar3,param_2,(uint)in_EAX);
    *(int *)((int)DAT_004ce8cc + 0xa0) = *(int *)((int)DAT_004ce8cc + 0xa0) + 1;
    return;
  }
  _memset(in_EAX,0,0x4b4);
  return;
}


