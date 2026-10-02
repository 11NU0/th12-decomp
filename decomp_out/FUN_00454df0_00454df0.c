/* undefined __stdcall FUN_00454df0(int param_1) @ 00454df0  228 bytes */
#include "th12.h"

void FUN_00454df0(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  short *psVar3;
  undefined4 uVar4;
  void *in_EAX;
  undefined4 *unaff_EBX;
  undefined2 *unaff_EDI;
  
  if ((*(int *)(*(int *)(unaff_EDI + 0x8e) + param_1 * 4) != 0) && (*(int *)(unaff_EDI + 0x92) == 0)
     ) {
    FUN_00402520();
    uVar2 = *unaff_EBX;
    *(undefined4 *)((int)in_EAX + 0x424) = uVar2;
    *(undefined4 *)((int)in_EAX + 0x428) = unaff_EBX[1];
    *(undefined4 *)((int)in_EAX + 0x42c) = unaff_EBX[2];
    *(short *)((int)in_EAX + 0x3ea) = (short)param_1;
    uVar1 = *unaff_EDI;
    *(uint *)((int)in_EAX + 0x47c) = *(uint *)((int)in_EAX + 0x47c) & 0xfffff3ff;
    *(undefined2 *)((int)in_EAX + 0x3e6) = uVar1;
    *(undefined2 **)((int)in_EAX + 0x3f8) = unaff_EDI;
    psVar3 = *(short **)(unaff_EDI + 0x8e);
    uVar4 = *(undefined4 *)(psVar3 + param_1 * 2);
    *(undefined4 *)((int)in_EAX + 0x3ec) = uVar4;
    *(undefined4 *)((int)in_EAX + 0x3f0) = uVar4;
    if ((*(uint *)((int)in_EAX + 0x78) & 1) == 0) {
      *(undefined4 *)((int)in_EAX + 0x70) = 0;
      *(undefined4 *)((int)in_EAX + 0x6c) = 0;
      *(undefined4 *)((int)in_EAX + 0x68) = 0xfff0bdc1;
      *(undefined4 **)((int)in_EAX + 0x74) = &DAT_004b2ed0;
      *(uint *)((int)in_EAX + 0x78) = *(uint *)((int)in_EAX + 0x78) | 1;
    }
    *(undefined4 *)((int)in_EAX + 0x70) = 0;
    *(undefined4 *)((int)in_EAX + 0x6c) = 0;
    *(undefined4 *)((int)in_EAX + 0x68) = 0xffffffff;
    *(uint *)((int)in_EAX + 0x47c) = *(uint *)((int)in_EAX + 0x47c) & 0xfffffffe;
    FUN_00455630(CONCAT22((short)((uint)uVar2 >> 0x10),uVar1),psVar3,(uint)in_EAX);
    *(int *)(DAT_004ce8cc + 0xa0) = *(int *)(DAT_004ce8cc + 0xa0) + 1;
    return;
  }
  _memset(in_EAX,0,0x4b4);
  return;
}


