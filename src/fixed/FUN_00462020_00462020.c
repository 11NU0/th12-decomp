/* int __fastcall FUN_00462020(undefined4 param_1, int param_2) @ 00462020  47 bytes */
#include "th12.h"

int __fastcall FUN_00462020(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  piVar1 = (int *)((int)unaff_ESI + 0x10);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar2 = *piVar1;
    if ((*(short *)((int)iVar2 + 0x3ea) == param_2) || ((param_2 == -1 && (iVar2 != unaff_ESI)))) break;
    piVar1 = (int *)piVar1[1];
  }
  return iVar2;
}


