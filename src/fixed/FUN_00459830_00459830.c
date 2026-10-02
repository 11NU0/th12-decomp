/* undefined __fastcall FUN_00459830(byte * param_1, byte * param_2, undefined4 param_3, byte param_4) @ 00459830  216 bytes */
#include "th12.h"

void __fastcall FUN_00459830(byte *param_1,byte *param_2,undefined4 param_3,byte param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int in_EAX;
  
  *(undefined4 *)((int)in_EAX + 300) = param_3;
  *(undefined4 *)((int)in_EAX + 0x100) = 0;
  *(undefined4 *)((int)in_EAX + 0x10c) = 0;
  *(undefined4 *)((int)in_EAX + 0x104) = 0;
  *(undefined4 *)((int)in_EAX + 0x110) = 0;
  *(uint *)((int)in_EAX + 0x130) = (uint)param_4;
  *(undefined4 *)((int)in_EAX + 0x108) = 0;
  *(undefined4 *)((int)in_EAX + 0x114) = 0;
  bVar1 = param_1[2];
  bVar2 = param_1[1];
  bVar3 = param_2[2];
  bVar4 = param_2[1];
  bVar5 = *param_2;
  *(uint *)((int)in_EAX + 0xf4) = (uint)*param_1;
  *(uint *)((int)in_EAX + 0xf8) = (uint)bVar2;
  *(uint *)((int)in_EAX + 0xe8) = (uint)bVar5;
  *(uint *)((int)in_EAX + 0xfc) = (uint)bVar1;
  *(uint *)((int)in_EAX + 0xec) = (uint)bVar4;
  *(uint *)((int)in_EAX + 0xf0) = (uint)bVar3;
  if ((*(uint *)((int)in_EAX + 0x128) & 1) == 0) {
    *(undefined4 *)((int)in_EAX + 0x120) = 0;
    *(undefined4 *)((int)in_EAX + 0x11c) = 0;
    *(undefined4 *)((int)in_EAX + 0x118) = 0xfff0bdc1;
    *(undefined4 **)((int)in_EAX + 0x124) = &DAT_004b2ed0;
    *(uint *)((int)in_EAX + 0x128) = *(uint *)((int)in_EAX + 0x128) | 1;
  }
  *(undefined4 *)((int)in_EAX + 0x120) = 0;
  *(undefined4 *)((int)in_EAX + 0x11c) = 0;
  *(undefined4 *)((int)in_EAX + 0x118) = 0xffffffff;
  return;
}


