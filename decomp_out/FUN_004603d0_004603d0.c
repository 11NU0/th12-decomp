/* int __fastcall FUN_004603d0(int param_1) @ 004603d0  135 bytes */
#include "th12.h"

int __fastcall FUN_004603d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  piVar4 = (int *)(&DAT_004b50c0 + DAT_004ce8cc);
  do {
    iVar1 = *piVar4;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x128) == 0) {
        if (*(int *)(iVar1 + 0x124) != 0) {
          puVar2 = FUN_0045ffc0();
          return (puVar2 != (undefined4 *)0x0) - 1;
        }
      }
      else {
        if ((-1 < (int)uVar3) && (uVar3 < 0x20)) {
          FUN_004604e0(param_1);
          FUN_0046ca4f((void *)*piVar4);
          *piVar4 = 0;
        }
        param_1 = *piVar4;
        *(undefined4 *)(param_1 + 0x128) = 0;
      }
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (uVar3 < 0x20);
  return 0;
}


