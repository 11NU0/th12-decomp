/* bool __fastcall FUN_0043c9b0(undefined4 param_1, undefined2 param_2, undefined2 param_3, undefined2 param_4) @ 0043c9b0  83 bytes */
#include "th12.h"

bool __fastcall
FUN_0043c9b0(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int in_EAX;
  
  **(undefined2 **)(in_EAX + 0x1518) = param_2;
  *(undefined2 *)(*(int *)(in_EAX + 0x1518) + 2) = param_3;
  *(undefined2 *)(*(int *)(in_EAX + 0x1518) + 4) = param_4;
  *(int *)(in_EAX + 0x1518) = *(int *)(in_EAX + 0x1518) + 6;
  return 899 < (*(int *)(in_EAX + 0x1518) - in_EAX) / 6;
}


