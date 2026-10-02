/* undefined4 __thiscall FUN_00412de9(void * this, int * param_1) @ 00412de9  205 bytes */
#include "th12.h"

undefined4 __fastcall FUN_00412de9(void *this,int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int unaff_EDI;
  
  uVar6 = 0;
  piVar3 = (int *)((int)unaff_EDI + 8);
  if (*(int *)((int)unaff_EDI + 4) != 0) {
    iVar5 = 0x44;
    do {
      iVar2 = FUN_0045fe60(uVar6 + 8);
      *(int *)(DAT_004b43dc + iVar5) = iVar2;
      if (iVar2 == 0) {
        FUN_00464220(&DAT_004b0ec8,&DAT_0049f434);
        return 0xffffffff;
      }
      do {
        cVar1 = *(char *)piVar3;
        piVar3 = (int *)((int)piVar3 + 1);
      } while (cVar1 != '\0');
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
      this = param_1;
    } while (uVar6 < *(uint *)((int)unaff_EDI + 4));
  }
  uVar6 = (int)piVar3 - unaff_EDI & 0x80000003;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
  }
  if (uVar6 != 0) {
    piVar3 = (int *)((int)piVar3 + (4 - uVar6));
  }
  if (*piVar3 == 0x494c4345) {
    uVar6 = 0;
    piVar4 = piVar3 + 2;
    if (piVar3[1] != 0) {
      do {
                    /* WARNING: Load size is inaccurate */
        (**(code **)(*(float *)this + 8))(piVar4);
        do {
          cVar1 = *(char *)piVar4;
          piVar4 = (int *)((int)piVar4 + 1);
        } while (cVar1 != '\0');
        uVar6 = uVar6 + 1;
        this = param_1;
      } while (uVar6 < (uint)piVar3[1]);
    }
  }
  return 0;
}


