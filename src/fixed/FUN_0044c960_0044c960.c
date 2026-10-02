/* int __fastcall FUN_0044c960(undefined4 param_1, int param_2, int * param_3) @ 0044c960  416 bytes */
#include "th12.h"

int __fastcall FUN_0044c960(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar4 = 0;
  iVar5 = DAT_004cc548;
  do {
    iVar1 = iVar5;
    iVar5 = 0;
    do {
      iVar2 = (uint)(byte)(&DAT_004cc550)[iVar5 + param_2 & 0x1fff] -
              (uint)(byte)(&DAT_004cc550)[(iVar1 - param_2) + iVar5 + param_2 & 0x1fff];
      if (iVar2 != 0) break;
      iVar2 = (uint)(byte)(&DAT_004cc550)[iVar5 + 1 + param_2 & 0x1fff] -
              (uint)(byte)(&DAT_004cc550)[iVar5 + 1 + iVar1 & 0x1fff];
      if (iVar2 != 0) {
        iVar5 = iVar5 + 1;
        break;
      }
      iVar2 = (uint)(byte)(&DAT_004cc550)[iVar5 + 2 + param_2 & 0x1fff] -
              (uint)(byte)(&DAT_004cc550)[iVar5 + 2 + iVar1 & 0x1fff];
      if (iVar2 != 0) {
        iVar5 = iVar5 + 2;
        break;
      }
      iVar2 = (uint)(byte)(&DAT_004cc550)[iVar5 + 3 + param_2 & 0x1fff] -
              (uint)(byte)(&DAT_004cc550)[iVar5 + 3 + iVar1 & 0x1fff];
      if (iVar2 != 0) {
        iVar5 = iVar5 + 3;
        break;
      }
      iVar2 = (uint)(byte)(&DAT_004cc550)[iVar5 + 4 + param_2 & 0x1fff] -
              (uint)(byte)(&DAT_004cc550)[iVar5 + 4 + iVar1 & 0x1fff];
      if (iVar2 != 0) {
        iVar5 = iVar5 + 4;
        break;
      }
      iVar2 = (uint)(byte)(&DAT_004cc550)[iVar5 + 5 + param_2 & 0x1fff] -
              (uint)(byte)(&DAT_004cc550)[iVar5 + 5 + iVar1 & 0x1fff];
      if (iVar2 != 0) {
        iVar5 = iVar5 + 5;
        break;
      }
      iVar5 = iVar5 + 6;
    } while (iVar5 < 0x12);
    if ((iVar4 <= iVar5) && (*param_3 = iVar1, iVar4 = iVar5, 0x11 < iVar5)) {
      FUN_0044cba0(iVar2,param_2);
      return iVar5;
    }
    if (iVar2 < 0) {
      piVar3 = ((char *)&DAT_004b4544 + iVar1 * 3);
    }
    else {
      piVar3 = ((char *)&DAT_004b4548 + iVar1 * 3);
    }
    iVar5 = *piVar3;
    if (*piVar3 == 0) {
      *piVar3 = param_2;
      (&DAT_004b4540)[param_2 * 3] = iVar1;
      (&DAT_004b4548)[param_2 * 3] = 0;
      (&DAT_004b4544)[param_2 * 3] = 0;
      return iVar4;
    }
  } while( true );
}


