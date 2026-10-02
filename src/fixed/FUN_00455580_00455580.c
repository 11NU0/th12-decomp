/* undefined4 * __fastcall FUN_00455580(undefined4 param_1, int param_2) @ 00455580  62 bytes */
#include "th12.h"

undefined4 * __fastcall FUN_00455580(undefined4 param_1,int param_2)

{
  undefined4 *in_EAX;
  
  switch(*in_EAX) {
  case 10000:
    return (undefined4 *)((int)param_2 + 0x3fc);
  case 0x2711:
    return (undefined4 *)((int)param_2 + 0x400);
  case 0x2712:
    return (undefined4 *)((int)param_2 + 0x404);
  case 0x2713:
    return (undefined4 *)((int)param_2 + 0x408);
  case 0x2718:
    return (undefined4 *)((int)param_2 + 0x41c);
  case 0x2719:
    in_EAX = (undefined4 *)((int)param_2 + 0x420);
  }
  return in_EAX;
}


