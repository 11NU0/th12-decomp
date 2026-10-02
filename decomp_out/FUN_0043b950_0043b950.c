/* undefined4 __fastcall FUN_0043b950(int param_1) @ 0043b950  395 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0043b950(int param_1)

{
  int iVar1;
  int *piVar2;
  ushort *puVar3;
  
  if (DAT_004b44e8 != 0) {
    if (*(int *)(param_1 + 0xbc + *(int *)(param_1 + 0x1d8) * 0x24) < 0) {
      DAT_004d49d0 = 0;
      _DAT_004d49dc = 0;
      _DAT_004d49e0 = 0;
      return 1;
    }
    if (-1 < *(int *)(param_1 + 0x1d8)) {
      _DAT_004d49d4 = DAT_004d49d0;
      iVar1 = param_1 + *(int *)(param_1 + 0x1d8) * 0x24;
      if (*(int *)(param_1 + 0xbc + *(int *)(param_1 + 0x1d8) * 0x24) <
          *(int *)(*(int *)(iVar1 + 0xb8) + 4)) {
        puVar3 = *(ushort **)(iVar1 + 0xac);
        if (((*puVar3 == 0xffff) && (puVar3[1] == 0xffff)) && (puVar3[2] == 0xffff)) {
          DAT_004d49d0 = 0;
          _DAT_004d49dc = 0;
          _DAT_004d49e0 = 0;
          FUN_00432850();
          return 1;
        }
        DAT_004d49d0 = (uint)*puVar3;
        _DAT_004d49dc =
             (uint)*(ushort *)(*(int *)(param_1 + 0xac + *(int *)(param_1 + 0x1d8) * 0x24) + 2);
        _DAT_004d49e0 =
             (uint)*(ushort *)(*(int *)(param_1 + 0xac + *(int *)(param_1 + 0x1d8) * 0x24) + 4);
        piVar2 = (int *)(param_1 + 0xac + *(int *)(param_1 + 0x1d8) * 0x24);
        *(undefined *)(param_1 + 0x1cc) =
             **(undefined **)(param_1 + (*(int *)(param_1 + 0x1d8) * 9 + 0x2d) * 4);
        *piVar2 = *piVar2 + 6;
        if (*(int *)(param_1 + 0x1d0) % 0x1e == 0) {
          piVar2 = (int *)(param_1 + (*(int *)(param_1 + 0x1d8) + 5) * 0x24);
          *piVar2 = *piVar2 + 1;
        }
      }
      else {
        DAT_004d49d0 = 0;
        _DAT_004d49dc = 0;
        _DAT_004d49e0 = 0;
      }
      piVar2 = (int *)(param_1 + 0xbc + *(int *)(param_1 + 0x1d8) * 0x24);
      *piVar2 = *piVar2 + 1;
      *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
      return 1;
    }
    DAT_004d49d0 = 0;
    _DAT_004d49dc = 0;
    _DAT_004d49e0 = 0;
    *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
  }
  return 1;
}


