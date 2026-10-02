/* undefined4 __fastcall FUN_004270b0(int param_1) @ 004270b0  262 bytes */
#include "th12.h"

undefined4 __fastcall FUN_004270b0(int param_1)

{
  int iVar1;
  int in_EAX;
  undefined4 extraout_ECX;
  short *extraout_EDX;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  int local_10;
  float local_c [3];
  
  iVar1 = DAT_004b43c8;
  iVar2 = DAT_004b0c58;
  if (2 < DAT_004b0c58) {
    DAT_004b0c78 = DAT_004b0c78 + 100000;
    if (DAT_004b0cf4 < DAT_004b0c78) {
      DAT_004b0c78 = DAT_004b0cf4;
    }
    FUN_0043e250((undefined4 *)(param_1 + 0x96c),0xff80ff80);
    return 0;
  }
  local_c[1] = 440.0;
  *(uint *)(param_1 + 0x47c) = *(uint *)(param_1 + 0x47c) & 0xfffffffe;
  *(uint *)(param_1 + 0x930) = *(uint *)(param_1 + 0x930) & 0xfffffffe;
  local_c[2] = 0.0;
  FUN_004615a0((void *)0x0,*(void **)(&DAT_004debdc + iVar1),&local_10,in_EAX + 0xc9,0);
  FUN_00422e80();
  if (DAT_004b0c5c == 4) {
    iVar2 = iVar2 + -1;
  }
  bVar4 = 4;
  uVar3 = 0xf;
  local_c[0] = (float)(iVar2 * 0x15) + 52.0;
  FUN_00461920(iVar2 * 0x15,DAT_004ce8cc,local_10);
  FUN_00427b90(local_c,(undefined4 *)(param_1 + 0x424),uVar3,bVar4);
  FUN_004214b0(extraout_ECX,extraout_EDX,DAT_004b43e4,iVar2);
  return 0;
}


