/* undefined4 __stdcall FUN_0040c230(void) @ 0040c230  369 bytes */
#include "th12.h"

undefined4 __stdcall FUN_0040c230(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_EAX;
  float *pfVar6;
  float10 fVar7;
  
  if (*(int *)((int)in_EAX + 0x8d8) < *(int *)((int)in_EAX + 0x8fc)) {
    fVar3 = *(float *)((int)in_EAX + 0x4bc);
    fVar4 = *(float *)((int)in_EAX + 0x4c0);
    fVar5 = *(float *)((int)in_EAX + 0x4c4);
    pfVar6 = (( float * (__stdcall *)())FUN_00405900)();
    fVar3 = *pfVar6 - fVar3;
    fVar1 = pfVar6[1];
    fVar2 = pfVar6[2];
    *(float *)((int)in_EAX + 0x4c8) = fVar3;
    *(float *)((int)in_EAX + 0x4cc) = fVar1 - fVar4;
    *(float *)((int)in_EAX + 0x4d0) = fVar2 - fVar5;
    if ((0.0001 < ABS(*(float *)((int)in_EAX + 0x4c8)) != NANP(ABS(*(float *)((int)in_EAX + 0x4c8)))) ||
       (0.0001 < ABS(*(float *)((int)in_EAX + 0x4cc)))) {
      fVar7 = (( float10 (__fastcall *)())FUN_004937aa)(fVar3);
      *(float *)((int)in_EAX + 0x4d8) = (float)fVar7;
    }
    *(undefined4 *)((int)in_EAX + 0x4d0) = 0;
    FUN_00464a80();
    return 0;
  }
  *(uint *)((int)in_EAX + 0x528) = *(uint *)((int)in_EAX + 0x528) & 0xfdffffff;
  *(float *)((int)in_EAX + 0x4d4) = *(float *)((int)in_EAX + 0x8e8);
  *(undefined4 *)((int)in_EAX + 0x4bc) = *(undefined4 *)((int)in_EAX + 0x8f0);
  *(undefined4 *)((int)in_EAX + 0x4c0) = *(undefined4 *)((int)in_EAX + 0x8f4);
  *(undefined4 *)((int)in_EAX + 0x4c4) = *(undefined4 *)((int)in_EAX + 0x8f8);
  FUN_0040d640((void *)((int)in_EAX + 0x4c8),*(float *)((int)in_EAX + 0x4d8),*(float *)((int)in_EAX + 0x8e8));
  *(undefined4 *)((int)in_EAX + 0x4d0) = 0;
  return 1;
}


