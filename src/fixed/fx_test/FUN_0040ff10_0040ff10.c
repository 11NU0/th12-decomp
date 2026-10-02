/* undefined __stdcall FUN_0040ff10(int param_1) @ 0040ff10  264 bytes */

#include "th12.h"

void __stdcall FUN_0040ff10(int param_1)

{
  uint *puVar1;
  int iVar2;
  size_t _Size;
  int iVar3;
  int iVar4;
  int in_EAX;
  void *pvVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int *unaff_ESI;
  
  if (DAT_004cea94 != 0) {
    _Size = in_EAX * 4 - 1;
    *unaff_ESI = in_EAX;
    unaff_ESI[1] = param_1;
    pvVar5 = _malloc(_Size);
    unaff_ESI[2] = (int)pvVar5;
    pvVar5 = _malloc(_Size);
    unaff_ESI[3] = (int)pvVar5;
    pvVar5 = _malloc(in_EAX * param_1 * 0x1c);
    unaff_ESI[4] = (int)pvVar5;
    pvVar5 = _malloc(in_EAX * param_1 * 0xc);
    iVar8 = 0;
    unaff_ESI[5] = (int)pvVar5;
    if (*unaff_ESI != 1 && -1 < *unaff_ESI + -1) {
      do {
        puVar6 = (undefined4 *)FUN_004314d0();
        iVar3 = unaff_ESI[2];
        iVar2 = iVar8 * 4;
        *(undefined4 *)(iVar2 + iVar3) = *puVar6;
        iVar4 = unaff_ESI[2];
        piVar7 = FUN_00461920(iVar3,DAT_004ce8cc,*(int *)(iVar4 + iVar2));
        if (piVar7 == (int *)0x0) {
          *(undefined4 *)(iVar4 + iVar2) = 0;
        }
        *(int **)(iVar2 + unaff_ESI[3]) = piVar7;
        *(undefined **)(*(int *)(iVar2 + unaff_ESI[3]) + 0x48c) = &LAB_0040ff00;
        *(int **)(*(int *)(iVar2 + unaff_ESI[3]) + 0x498) = unaff_ESI;
        puVar1 = (uint *)(*(int *)(iVar2 + unaff_ESI[3]) + 0x47c);
        *puVar1 = *puVar1 & 0xffffff1f;
        iVar8 = iVar8 + 1;
      } while (iVar8 < *unaff_ESI + -1);
    }
    return;
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  return;
}


