/* uint * __stdcall FUN_0044bab0(uint * param_1, int param_2, uint param_3) @ 0044bab0  363 bytes */
#include "th12.h"

uint * __stdcall FUN_0044bab0(uint *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puVar8 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = ((void *)0x00496edb);
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar6 = param_2 + 1;
  uVar7 = -(uint)((int)((ulonglong)uVar6 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x10);
  puVar3 = (uint *)operator_new(-(uint)(0xfffffffb < uVar7) | uVar7 + 4);
  local_4 = 0;
  if (puVar3 != (uint *)0x0) {
    puVar1 = puVar3 + 1;
    *puVar3 = uVar6;
    _eh_vector_constructor_iterator_
              (puVar1,0x10,uVar6,(_func_void_void_ptr *)((void *)0x0044bcc0),FUN_0044bc50);
    if (puVar1 != (uint *)0x0) {
      if (0 < param_2) {
        puVar3 = puVar3 + 3;
        param_1 = (uint *)param_2;
        do {
          puVar4 = puVar8;
          do {
            cVar2 = *(char *)puVar4;
            puVar4 = (uint *)((int)puVar4 + 1);
          } while (cVar2 != '\0');
          pvVar5 = _malloc((int)puVar4 + (1 - ((int)puVar8 + 1)));
          if (pvVar5 != (void *)0x0) {
            puVar4 = puVar8;
            do {
              cVar2 = *(char *)puVar4;
              *(char *)(((int)pvVar5 - (int)puVar8) + (int)puVar4) = cVar2;
              puVar4 = (uint *)((int)puVar4 + 1);
            } while (cVar2 != '\0');
          }
          puVar3[-2] = (uint)pvVar5;
          puVar4 = puVar8;
          do {
            cVar2 = *(char *)puVar4;
            puVar4 = (uint *)((int)puVar4 + 1);
          } while (cVar2 != '\0');
          uVar6 = (int)puVar4 + (1 - ((int)puVar8 + 1));
          uVar7 = uVar6 & 0x80000003;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
          }
          if (uVar7 != 0) {
            uVar6 = uVar6 + (4 - uVar7);
          }
          puVar8 = (uint *)((int)puVar8 + uVar6);
          puVar3[-1] = *puVar8;
          *puVar3 = puVar8[1];
          puVar3[1] = puVar8[2];
          puVar8 = puVar8 + 3;
          puVar3 = puVar3 + 4;
          param_1 = (uint *)((int)param_1 + -1);
        } while (param_1 != (uint *)0x0);
      }
      puVar1[param_2 * 4 + 1] = param_3;
      puVar1[param_2 * 4 + 2] = 0;
      *unaff_FS_OFFSET = local_c;
      return puVar1;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return (uint *)0x0;
}


