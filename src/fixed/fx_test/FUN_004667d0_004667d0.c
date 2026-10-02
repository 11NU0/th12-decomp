/* uint __stdcall FUN_004667d0(int param_1) @ 004667d0  543 bytes */

#include "th12.h"

uint __stdcall FUN_004667d0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined *unaff_EDI;
  uint uVar3;
  undefined *puStack_4c;
  undefined *puStack_48;
  undefined *puVar4;
  undefined *puStack_40;
  undefined *puStack_2c;
  int iStack_20;
  uint uStack_1c;
  undefined local_10 [8];
  undefined local_8 [8];
  
  if ((*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) && (*(int *)(param_1 + 0xc) != 0)) {
    puStack_2c = local_10;
    (**(code **)(*(int *)**(undefined4 **)(param_1 + 4) + 0x10))();
    if ((*(uint *)(param_1 + 0x68) < uStack_1c - *(int *)(param_1 + 0x70)) ||
       (uStack_1c <= *(uint *)(param_1 + 0x68))) {
      if (**(int **)(param_1 + 4) == 0) {
        return 0x800401f0;
      }
      uVar1 = FUN_00466220();
      if (-1 < (int)uVar1) {
        if (iStack_20 != 0) {
          puStack_48 = (undefined *)0x46685b;
          uVar1 = FUN_00465fe0((int *)**(undefined4 **)(param_1 + 4));
          return uVar1 & (-1 < (int)uVar1) - 1;
        }
        puStack_2c = (undefined *)0x0;
        puVar4 = local_10;
        puStack_48 = &stack0xffffffdc;
        puStack_4c = local_8;
        uVar3 = *(uint *)(param_1 + 0x68);
        uVar1 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 4) + 0x2c))
                          ((int *)**(undefined4 **)(param_1 + 4),uVar3,
                           *(undefined4 *)(param_1 + 0x70),&puStack_2c);
        if (-1 < (int)uVar1) {
          if (puVar4 != (undefined *)0x0) {
            return 0x8000ffff;
          }
          if (*(int *)(param_1 + 0x6c) == 0) {
            uVar1 = FUN_00466d70(puStack_4c,(size_t *)&puStack_48);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            if (puStack_48 < unaff_EDI) {
              puStack_40 = puStack_48;
              do {
                uVar1 = FUN_00466c90();
                if ((int)uVar1 < 0) {
                  return uVar1;
                }
                uVar1 = FUN_00466d70(puStack_40 + (int)puStack_4c,(size_t *)&puStack_48);
                if ((int)uVar1 < 0) {
                  return uVar1;
                }
                puStack_40 = puStack_40 + (int)puStack_48;
              } while (puStack_40 < unaff_EDI);
            }
          }
          else {
            _memset(puStack_4c,
                    (*(short *)(*(int *)(*(int *)(param_1 + 0xc) + 0x90) + 0x2e) != 8) - 1 & 0x80,
                    (size_t)unaff_EDI);
          }
          (**(code **)(*(int *)**(undefined4 **)(param_1 + 4) + 0x4c))
                    ((int *)**(undefined4 **)(param_1 + 4),puStack_4c,unaff_EDI,0,0);
          uVar1 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 4) + 0x10))
                            ((int *)**(undefined4 **)(param_1 + 4),&puStack_4c,0);
          if (-1 < (int)uVar1) {
            uVar1 = *(uint *)(param_1 + 0x60);
            if (uVar3 < uVar1) {
              iVar2 = *(int *)(param_1 + 8) - uVar1;
            }
            else {
              iVar2 = -uVar1;
            }
            *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + iVar2 + uVar3;
            *(uint *)(param_1 + 0x60) = uVar3;
            if ((*(int *)(param_1 + 0x6c) != 0) &&
               (*(uint *)(*(int *)(param_1 + 0xc) + 0x2c) <= *(uint *)(param_1 + 100))) {
              (**(code **)(*(int *)**(undefined4 **)(param_1 + 4) + 0x48))
                        ((int *)**(undefined4 **)(param_1 + 4));
            }
            uVar1 = 0;
            *(uint *)(param_1 + 0x68) =
                 (uint)(puStack_48 + *(int *)(param_1 + 0x68)) % *(uint *)(param_1 + 8);
          }
        }
      }
      return uVar1;
    }
  }
  return 0x800401f0;
}


