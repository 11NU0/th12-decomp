/* undefined4 __stdcall FUN_00465de0(void) @ 00465de0  353 bytes */
#include "th12.h"

/* WARNING: Removing unreachable block (ram,0x00465ee6) */
/* WARNING: Removing unreachable block (ram,0x00465f1e) */

undefined4 __stdcall FUN_00465de0(void)

{
  undefined4 stack0xffffffec;
  uint uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  int unaff_ESI;
  uint uVar7;
  int *piVar8;
  
  uVar7 = 0;
  *(undefined4 *)((int)unaff_ESI + 0x30) = 0;
  if (*(int *)((int)unaff_ESI + 0x10) != 0) {
    do {
      if (*(int *)(*(int *)((int)unaff_ESI + 4) + uVar7 * 4) != 0) {
        (**(code **)(**(int **)(*(int *)((int)unaff_ESI + 4) + uVar7 * 4) + 8))();
        *(undefined4 *)(*(int *)((int)unaff_ESI + 4) + uVar7 * 4) = 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)((int)unaff_ESI + 0x10));
  }
  if (*(void **)((int)unaff_ESI + 4) != (void *)0x0) {
    FUN_0046ca4f(*(void **)((int)unaff_ESI + 4));
    *(undefined4 *)((int)unaff_ESI + 4) = 0;
  }
  lVar3 = (ulonglong)*(uint *)((int)unaff_ESI + 0x10) * 4;
  pvVar4 = operator_new(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3);
  uVar7 = 0;
  *(void **)((int)unaff_ESI + 4) = pvVar4;
  if (*(int *)((int)unaff_ESI + 0x10) != 0) {
    do {
      piVar8 = (int *)**(undefined4 **)((int)unaff_ESI + 0x5c);
      iVar5 = (**(code **)(*piVar8 + 0xc))
                        (piVar8,unaff_ESI + 0x38,*(int *)((int)unaff_ESI + 4) + uVar7 * 4);
      if ((iVar5 < 0) ||
         (puVar2 = *(undefined4 **)(uVar7 * 4 + *(int *)((int)unaff_ESI + 4)),
         iVar5 = (**(code **)*puVar2)(puVar2,&DAT_0049981c,&stack0xffffffec), iVar5 < 0)) {
        return 0x80004005;
      }
      pvVar4 = operator_new(0x80);
      if (pvVar4 == (void *)0x0) {
        return 0x8007000e;
      }
      uVar6 = 0;
      do {
        uVar1 = uVar6 + 1;
        *(uint *)((int)pvVar4 + uVar6 * 8) = *(int *)((int)unaff_ESI + 0x70) * uVar1 + -1;
        *(undefined4 *)((int)pvVar4 + uVar6 * 8 + 4) = *(undefined4 *)((int)unaff_ESI + 0x74);
        uVar6 = uVar1;
      } while (uVar1 < 0x10);
      iVar5 = (**(code **)(*piVar8 + 0xc))(piVar8,0x10,pvVar4);
      if (iVar5 < 0) {
        FUN_0046ca4f(pvVar4);
        return 0x80004005;
      }
      FUN_0046ca4f(pvVar4);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)((int)unaff_ESI + 0x10));
  }
  return 0;
}


