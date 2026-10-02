/* undefined4 __thiscall FUN_0045c900(void * this, void * param_1) @ 0045c900  1151 bytes */
#include "th12.h"

undefined4 __thiscall FUN_0045c900(void *this,void *param_1)

{
  int iVar1;
  float in_EAX;
  undefined4 uVar2;
  uint uVar3;
  void *this_00;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  
  uVar3 = *(uint *)((int)in_EAX + 0x47c);
  if ((uVar3 & 1) == 0) {
    return 0xffffffff;
  }
  if ((uVar3 & 2) == 0) {
    return 0xffffffff;
  }
  switch(uVar3 >> 0x17 & 0x1f) {
  case 0:
    if (*(char *)((int)in_EAX + 0x3bf) != '\0') {
      uVar2 = FUN_0045a9f0(param_1);
      return uVar2;
    }
    break;
  case 1:
    if (*(char *)((int)in_EAX + 0x3bf) != '\0') {
      uVar2 = FUN_0045b1b0(param_1);
      return uVar2;
    }
    break;
  case 2:
    if (*(char *)((int)in_EAX + 0x3bf) != '\0') {
      uVar2 = FUN_0045ae50(this,param_1,in_EAX);
      return uVar2;
    }
    break;
  case 3:
    if (*(char *)((int)in_EAX + 0x3bf) != '\0') {
      uVar2 = FUN_0045b1e0(param_1);
      return uVar2;
    }
    break;
  case 4:
    if (*(char *)((int)in_EAX + 0x3bf) != '\0') {
      uVar2 = FUN_0045b5e0(param_1);
      return uVar2;
    }
    break;
  case 5:
    if (*(char *)((int)in_EAX + 0x3bf) != '\0') {
      uVar2 = FUN_0045ba90();
      return uVar2;
    }
    break;
  case 6:
    if (*(char *)((int)in_EAX + 0x3bf) != '\0') {
      uVar2 = FUN_0045b610();
      return uVar2;
    }
    break;
  case 7:
    if (*(char *)((int)in_EAX + 0x3bf) != '\0') {
      uVar2 = FUN_0045bac0(param_1,(int)in_EAX);
      return uVar2;
    }
    break;
  case 8:
    if (*(char *)((int)in_EAX + 0x3bf) != '\0') {
      uVar2 = FUN_0045bce0((int)param_1,(uint)in_EAX);
      return uVar2;
    }
    break;
  case 9:
  case 0xc:
  case 0xd:
    uVar2 = FUN_0045c3a0(param_1,*(undefined4 *)((int)in_EAX + 0x478),
                         *(int *)((int)in_EAX + 0x3fc) * 2);
    return uVar2;
  default:
    return 0;
  case 0xb:
    uVar2 = FUN_0045c800((int)param_1);
    return uVar2;
  case 0xe:
  case 0x12:
  case 0x13:
  case 0x14:
    local_2c = *(float *)((int)in_EAX + 0x2c);
    local_24 = *(float *)((int)in_EAX + 0x58) * *(float *)((int)in_EAX + 0x40);
    local_28 = *(float *)((int)in_EAX + 0x5c) * *(float *)((int)in_EAX + 0x44);
    FUN_0045d8c0((int)in_EAX);
    if (*(int *)((int)in_EAX + 0x3c) != 0) {
      FUN_0045d8c0(*(int *)((int)in_EAX + 0x3c));
      local_20 = local_14 + local_20;
      iVar1 = *(int *)((int)in_EAX + 0x3c);
      local_1c = local_10 + local_1c;
      local_24 = *(float *)(iVar1 + 0x40) * local_24;
      local_28 = *(float *)(iVar1 + 0x44) * local_28;
      local_2c = *(float *)(iVar1 + 0x2c) + local_2c;
    }
    FUN_00459a60((uint)in_EAX);
    switch(*(uint *)((int)in_EAX + 0x47c) >> 0x17 & 0x1f) {
    case 0xe:
      FUN_0045ce60(this_00,*(float *)((int)in_EAX + 0x3bc),local_20,local_1c,local_24,local_28,
                   local_2c);
      return 0;
    default:
      return 0;
    case 0x12:
      FUN_0045d0a0(this_00,*(float *)((int)in_EAX + 0x3c0),local_20,local_1c,local_24,local_28,
                   local_2c);
      return 0;
    case 0x13:
      FUN_0045d2e0(this_00,local_20,local_1c,local_24,local_28,local_2c);
      return 0;
    case 0x14:
      FUN_0045d380(local_20,local_1c,local_24,local_28,local_2c);
      return 0;
    }
  case 0xf:
  case 0x10:
    local_24 = *(float *)((int)in_EAX + 0x2c);
    local_28 = *(float *)((int)in_EAX + 0x58) * *(float *)((int)in_EAX + 0x40);
    FUN_0045d8c0((int)in_EAX);
    if (*(int *)((int)in_EAX + 0x3c) != 0) {
      FUN_0045d8c0(*(int *)((int)in_EAX + 0x3c));
      local_20 = local_14 + local_20;
      local_1c = local_10 + local_1c;
      local_28 = *(float *)(*(int *)((int)in_EAX + 0x3c) + 0x40) * local_28;
      local_24 = *(float *)(*(int *)((int)in_EAX + 0x3c) + 0x2c) + local_24;
    }
    FUN_00459a60((uint)in_EAX);
    uVar3 = *(uint *)((int)in_EAX + 0x47c) >> 0x17 & 0x1f;
    if (uVar3 != 0xf) {
      if (uVar3 != 0x10) {
        return 0;
      }
      FUN_0045d710((float)param_1,local_20,local_1c,local_28,local_24,*(int *)((int)in_EAX + 0x3fc),
                   *(float *)((int)in_EAX + 0x3bc));
      return 0;
    }
    FUN_0045d430(local_20,local_1c,local_28,local_24,*(int *)((int)in_EAX + 0x3fc),
                 *(float *)((int)in_EAX + 0x3c0));
    return 0;
  case 0x11:
    if (*(char *)((int)in_EAX + 0x3bf) != '\0') {
      FUN_004302c0();
      FUN_0045bce0((int)param_1,(uint)in_EAX);
      FUN_00430300();
      return 0;
    }
  }
  return 0xffffffff;
}


