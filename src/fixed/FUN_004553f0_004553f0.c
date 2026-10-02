/* int __fastcall FUN_004553f0(int param_1) @ 004553f0  138 bytes */
#include "th12.h"

int __fastcall FUN_004553f0(int param_1)

{
  int in_EAX;
  uint uVar1;
  ulonglong uVar2;
  
  if (in_EAX - 10000U < 0x17) {
    uVar1 = (uint)*(byte *)((int)in_EAX + 0x452d9c);
    switch(in_EAX) {
    case 10000:
      return *(int *)((int)param_1 + 0x3fc);
    case 0x2711:
      return *(int *)((int)param_1 + 0x400);
    case 0x2712:
      return *(int *)((int)param_1 + 0x404);
    case 0x2713:
      return *(int *)((int)param_1 + 0x408);
    case 0x2714:
      uVar2 = FUN_004931e0(param_1,uVar1);
      return (int)uVar2;
    case 0x2715:
      uVar2 = FUN_004931e0(param_1,uVar1);
      return (int)uVar2;
    case 0x2716:
      uVar2 = FUN_004931e0(param_1,uVar1);
      return (int)uVar2;
    case 0x2717:
      uVar2 = FUN_004931e0(param_1,uVar1);
      return (int)uVar2;
    case 0x2718:
      return *(int *)((int)param_1 + 0x41c);
    case 0x2719:
      return *(int *)((int)param_1 + 0x420);
    case 0x2726:
      in_EAX = FUN_00464440();
    }
  }
  return in_EAX;
}


