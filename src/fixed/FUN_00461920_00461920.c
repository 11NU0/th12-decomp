/* int * __fastcall FUN_00461920(undefined4 param_1, int param_2, int param_3) @ 00461920  79 bytes */
#include "th12.h"

int * __fastcall FUN_00461920(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  if (param_3 == 0) {
    return (int *)0x0;
  }
  for (puVar1 = *(undefined4 **)((int)param_2 + 0x8856b8); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[1]) {
    if (*(int *)*puVar1 == param_3) {
      return (int *)*puVar1;
    }
  }
  puVar1 = *(undefined4 **)((int)param_2 + 0x8856c0);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    if (*(int *)*puVar1 == param_3) break;
    puVar1 = (undefined4 *)puVar1[1];
  }
  return (int *)*puVar1;
}


