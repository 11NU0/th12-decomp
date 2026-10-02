/* int * __fastcall FUN_004691b0(int param_1) @ 004691b0  29 bytes */
#include "th12.h"

int * __fastcall FUN_004691b0(int param_1)

{
  int in_EAX;
  int *piVar1;
  
  piVar1 = (int *)((int)in_EAX + 0x1030);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*(int *)(*piVar1 + 0x1010) == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  return piVar1;
}


