/* undefined __fastcall FUN_004442b0(int param_1, int param_2) @ 004442b0  199 bytes */
#include "th12.h"

void __fastcall FUN_004442b0(int param_1,int param_2)

{
  int in_EAX;
  undefined4 extraout_ECX;
  
  if (*(short *)(param_2 + 0x5a68 + in_EAX * 2) != param_1) {
    if ((in_EAX != 0) && (*(short *)((int)param_2 + 0x5a68) == param_1)) {
      *(undefined2 *)((int)param_2 + 0x5a68) = *(undefined2 *)(param_2 + 0x5a68 + in_EAX * 2);
    }
    if ((in_EAX != 1) && (*(short *)((int)param_2 + 0x5a6a) == param_1)) {
      *(undefined2 *)((int)param_2 + 0x5a6a) = *(undefined2 *)(param_2 + 0x5a68 + in_EAX * 2);
    }
    if ((in_EAX != 2) && (*(short *)((int)param_2 + 0x5a6c) == param_1)) {
      *(undefined2 *)((int)param_2 + 0x5a6c) = *(undefined2 *)(param_2 + 0x5a68 + in_EAX * 2);
    }
    if ((in_EAX != 3) && (*(short *)((int)param_2 + 0x5a6e) == param_1)) {
      *(undefined2 *)((int)param_2 + 0x5a6e) = *(undefined2 *)(param_2 + 0x5a68 + in_EAX * 2);
    }
    if ((in_EAX != 4) && (*(short *)((int)param_2 + 0x5a70) == param_1)) {
      *(undefined2 *)((int)param_2 + 0x5a70) = *(undefined2 *)(param_2 + 0x5a68 + in_EAX * 2);
    }
    *(short *)(param_2 + 0x5a68 + in_EAX * 2) = (short)param_1;
    FUN_00443920(param_1);
    FUN_00453d90(extraout_ECX,7);
    return;
  }
  return;
}


