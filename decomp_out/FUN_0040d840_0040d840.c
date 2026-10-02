/* int __fastcall FUN_0040d840(undefined4 param_1, int param_2) @ 0040d840  25 bytes */
#include "th12.h"

int __fastcall FUN_0040d840(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if ((char)(&DAT_004af208)[iVar2] == param_2) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x71);
  return iVar1;
}


