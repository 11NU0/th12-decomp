/* undefined4 __fastcall FUN_0045c260(int param_1) @ 0045c260  264 bytes */

#include "th12.h"

undefined4 __fastcall FUN_0045c260(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_EAX;
  float *pfVar5;
  int iVar6;
  int unaff_EDI;
  float local_10;
  
  if (2 < in_EAX) {
    fVar3 = *(float *)(param_1 + 100) + *(float *)(param_1 + 0x90);
    fVar1 = *(float *)(param_1 + 0x7c);
    fVar2 = *(float *)(param_1 + 0x60);
    fVar4 = (*(float *)(param_1 + 0x90) - *(float *)(param_1 + 0x80)) /
            (float)((in_EAX + 1) / 2 + -1);
    if (0 < in_EAX) {
      iVar6 = (in_EAX - 1U >> 1) + 1;
      pfVar5 = (float *)(unaff_EDI + 0x14);
      local_10 = fVar3;
      do {
        iVar6 = iVar6 + -1;
        pfVar5[1] = local_10;
        *pfVar5 = fVar1 + fVar2;
        pfVar5[-1] = *(float *)(param_1 + 0x3bc);
        pfVar5[-2] = 1.0;
        local_10 = local_10 - fVar4;
        pfVar5 = pfVar5 + 0xe;
      } while (iVar6 != 0);
    }
    fVar1 = *(float *)(param_1 + 0x84);
    fVar2 = *(float *)(param_1 + 0x60);
    if (1 < in_EAX) {
      iVar6 = (in_EAX - 2U >> 1) + 1;
      pfVar5 = (float *)(unaff_EDI + 0x30);
      local_10 = fVar3;
      do {
        iVar6 = iVar6 + -1;
        pfVar5[1] = local_10;
        *pfVar5 = fVar1 + fVar2;
        pfVar5[-1] = *(float *)(param_1 + 0x3bc);
        pfVar5[-2] = 1.0;
        local_10 = local_10 - fVar4;
        pfVar5 = pfVar5 + 0xe;
      } while (iVar6 != 0);
    }
    return 0;
  }
  return 0xffffffff;
}


