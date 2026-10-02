/* undefined __stdcall FUN_0045bac0(void * param_1, int param_2) @ 0045bac0  534 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_0045bac0(void *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar6;
  uint uVar5;
  undefined *puVar7;
  undefined *puVar8;
  float *pfVar9;
  float10 fVar10;
  byte bStack_5a;
  undefined uStack_59;
  char cStack_54;
  float local_44 [17];
  
  FUN_0045b930((int)param_1);
  fVar1 = *(float *)((int)DAT_004cee34 + 0xfc);
  fVar2 = *(float *)((int)DAT_004cee34 + 0x100);
  if ((*(byte *)((int)param_2 + 0x47e) & 1) == 0) {
    uVar5 = *(uint *)((int)param_2 + 0x3bc);
  }
  else {
    uVar5 = *(uint *)((int)param_2 + 0x3c0);
  }
  puVar8 = (undefined *)((int)&DAT_004d47f8 + 3);
  pfVar9 = local_44;
  puVar7 = &DAT_004b5650 + (int)param_1;
  do {
    D3DXVec3Transform(pfVar9,puVar7,&DAT_004b5140 + (int)param_1);
    fVar10 = FUN_00408860((pfVar9[2] - _DAT_004ceaf4) * (pfVar9[2] - _DAT_004ceaf4) +
                          (*pfVar9 - _DAT_004ceaec) * (*pfVar9 - _DAT_004ceaec) +
                          (pfVar9[1] - _DAT_004ceaf0) * (pfVar9[1] - _DAT_004ceaf0));
    if ((float)fVar10 <= _DAT_004cebe8) {
      *(uint *)(puVar8 + -3) = uVar5;
    }
    else {
      fVar3 = (_DAT_004cebe8 - (float)fVar10) / (fVar1 - fVar2);
      uStack_59 = (undefined)(uVar5 >> 0x18);
      if (1.0 <= fVar3) {
        *(undefined4 *)(puVar8 + -3) = *(undefined4 *)((int)DAT_004cee34 + 0x114);
        *puVar8 = uStack_59;
      }
      else {
        bVar6 = (byte)(uVar5 >> 8);
        cStack_54 = (char)(int)ROUND(((float)(uVar5 & 0xff) - _DAT_004cebf0) * fVar3);
        puVar8[-3] = (char)uVar5 - cStack_54;
        cStack_54 = (char)(int)ROUND(((float)(uint)bVar6 - _DAT_004cebf4) * fVar3);
        bStack_5a = (byte)(uVar5 >> 0x10);
        puVar8[-2] = bVar6 - cStack_54;
        fVar4 = (float)(uint)bStack_5a - _DAT_004cebf8;
        *puVar8 = uStack_59;
        cStack_54 = (char)(int)ROUND(fVar4 * fVar3);
        puVar8[-1] = bStack_5a - cStack_54;
      }
    }
    puVar8 = puVar8 + 0x1c;
    puVar7 = puVar7 + 0x14;
    pfVar9 = pfVar9 + 4;
  } while ((int)puVar8 < 0x4d486b);
  FUN_00459e50(param_1,2);
  _DAT_004d4848 = 0x3f800000;
  _DAT_004d482c = 0x3f800000;
  _DAT_004d4810 = 0x3f800000;
  _DAT_004d47f4 = 0x3f800000;
  return;
}


