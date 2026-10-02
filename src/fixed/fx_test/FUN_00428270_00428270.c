/* undefined4 __stdcall FUN_00428270(void) @ 00428270  296 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00428270(void)

{
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  byte bVar4;
  int iVar5;
  int unaff_EDI;
  ulonglong uVar6;
  
  piVar3 = *(int **)(unaff_EDI + 0x18);
  do {
    while( true ) {
      if (piVar3 == (int *)0x0) {
        return 1;
      }
      piVar1 = (int *)piVar3[2];
      if ((*(char *)(piVar3 + 0x1f) == '\0') ||
         (bVar4 = *(char *)(piVar3 + 0x1f) + 1, *(byte *)(piVar3 + 0x1f) = bVar4, bVar4 < 2)) break;
LAB_00428295:
      (**(code **)(*piVar3 + 0x10))();
      *(int *)(unaff_EDI + 0x468) = *(int *)(unaff_EDI + 0x468) + -1;
      *(int *)(piVar3[1] + 8) = piVar3[2];
      if (piVar3[2] != 0) {
        *(int *)(piVar3[2] + 4) = piVar3[1];
      }
      if (*(int **)(unaff_EDI + 0x464) == piVar3) {
        *(int *)(unaff_EDI + 0x464) = piVar3[1];
      }
LAB_004282cb:
      FUN_0046ca4f(piVar3);
      piVar3 = piVar1;
    }
    if (piVar3[3] == 1) {
      (**(code **)(*piVar3 + 0x10))();
      *(int *)(unaff_EDI + 0x468) = *(int *)(unaff_EDI + 0x468) + -1;
      *(int *)(piVar3[1] + 8) = piVar3[2];
      if (piVar3[2] != 0) {
        *(int *)(piVar3[2] + 4) = piVar3[1];
      }
      if (*(int **)(unaff_EDI + 0x464) != piVar3) goto LAB_004282cb;
      *(int *)(unaff_EDI + 0x464) = piVar3[1];
      FUN_0046ca4f(piVar3);
      piVar3 = piVar1;
    }
    else {
      iVar5 = (**(code **)(*piVar3 + 8))();
      if (iVar5 != 0) goto LAB_00428295;
      iVar5 = piVar3[6];
      pfVar2 = (float *)piVar3[8];
      piVar3[5] = iVar5;
      if ((*pfVar2 <= 0.99) || (1.01 <= *pfVar2)) {
        piVar3[7] = (int)(*pfVar2 + (float)piVar3[7]);
        uVar6 = FUN_004931e0(pfVar2,iVar5);
        piVar3[6] = (int)uVar6;
      }
      else {
        piVar3[6] = iVar5 + 1;
        piVar3[7] = (int)((float)piVar3[7] + 1.0);
      }
      *(undefined *)((int)piVar3 + 0x7d) = 1;
      piVar3 = piVar1;
    }
  } while( true );
}


