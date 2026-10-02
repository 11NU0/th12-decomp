/* undefined4 __stdcall FUN_0043d140(int * param_1) @ 0043d140  395 bytes */
#include "th12.h"

undefined4 __stdcall FUN_0043d140(int *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  piVar4 = (int *)*param_1;
  if (piVar4 != (int *)0x0) {
    if ((*piVar4 == 0x31324854) && (*(short *)((int)piVar4 + 2) == 2)) {
      FUN_004639d0((byte *)((int)piVar4 + 6),piVar4[4],'5',0x10,piVar4[4]);
      iVar6 = *param_1;
      pvVar1 = _malloc(*(int *)((int)iVar6 + 0x14) * 4);
      param_1[1] = (int)pvVar1;
      FUN_0044c710(iVar6 + 0x18,*(undefined4 *)(*param_1 + 0x10),pvVar1);
      iVar6 = *(int *)(*param_1 + 0x14);
      piVar4 = (int *)param_1[1];
      if (iVar6 < 1) {
        return 0;
      }
      while( true ) {
        if (*(short *)piVar4 == 0x5243) {
          if (((*(short *)((int)piVar4 + 2) == 2) &&
              (iVar2 = FUN_0043cdb0(piVar4,0x45f4), iVar2 == piVar4[1])) && (piVar4[2] == 0x45f4)) {
            _memcpy(param_1 + piVar4[3] * 0x117d + 2,piVar4,0x45f4);
          }
        }
        else {
          if (*(short *)piVar4 != 0x5453) {
            return 0;
          }
          if (((*(short *)((int)piVar4 + 2) == 2) &&
              (iVar2 = FUN_0043cdb0(piVar4,0x448), iVar2 == piVar4[1])) && (piVar4[2] == 0x448)) {
            piVar5 = piVar4;
            piVar7 = param_1 + 0x7a6d;
            for (iVar2 = 0x112; iVar2 != 0; iVar2 = iVar2 + -1) {
              *piVar7 = *piVar5;
              piVar5 = piVar5 + 1;
              piVar7 = piVar7 + 1;
            }
          }
        }
        iVar6 = iVar6 - piVar4[2];
        if (iVar6 < 0) break;
        piVar4 = (int *)((int)piVar4 + piVar4[2]);
        if (iVar6 < 1) {
          return 0;
        }
      }
      return 0;
    }
    _free(piVar4);
    *param_1 = 0;
  }
  puVar3 = (undefined4 *)_malloc(0x18);
  *param_1 = (int)puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined4 *)*param_1 = 0x31324854;
  *(undefined2 *)(*param_1 + 8) = 2;
  *(undefined4 *)(*param_1 + 0xc) = 0x100;
  return 0;
}


