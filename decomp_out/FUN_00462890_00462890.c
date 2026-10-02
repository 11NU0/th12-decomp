/* undefined __fastcall FUN_00462890(void * param_1, int param_2) @ 00462890  114 bytes */
#include "th12.h"

void __fastcall FUN_00462890(void *param_1,int param_2)

{
  int *piVar1;
  
  if (param_1 != (void *)0x0) {
    for (piVar1 = (int *)(param_2 + 0x14); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if ((void *)*piVar1 == param_1) goto LAB_004628bf;
    }
    piVar1 = (int *)(param_2 + 0x38);
    if (piVar1 != (int *)0x0) {
      while ((void *)*piVar1 != param_1) {
        piVar1 = (int *)piVar1[1];
        if (piVar1 == (int *)0x0) {
          return;
        }
      }
LAB_004628bf:
      if (piVar1[2] != 0) {
        if (piVar1[1] != 0) {
          *(int *)(piVar1[1] + 8) = piVar1[2];
        }
        if (piVar1[2] != 0) {
          *(int *)(piVar1[2] + 4) = piVar1[1];
        }
        piVar1[1] = 0;
        piVar1[2] = 0;
        *(undefined4 *)((int)param_1 + 8) = 0;
        if ((*(byte *)((int)param_1 + 4) & 1) != 0) {
          *(undefined4 *)((int)param_1 + 8) = 0;
          *(undefined4 *)((int)param_1 + 0xc) = 0;
          *(undefined4 *)((int)param_1 + 0x10) = 0;
          FUN_0046ca4f(param_1);
        }
      }
    }
  }
  return;
}


