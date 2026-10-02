/* float10 __fastcall FUN_00468fe0(undefined4 param_1, undefined4 param_2, float param_3) @ 00468fe0  145 bytes */
#include "th12.h"

float10 __fastcall FUN_00468fe0(undefined4 param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int in_EAX;
  float10 fVar2;
  ulonglong uVar3;
  
  fVar2 = (float10)param_3;
  if ((float10)0 <= fVar2) {
    uVar3 = FUN_004931e0(param_1,param_2);
    return (float10)*(float *)((int)uVar3 + *(int *)((int)in_EAX + 0x100c) + 8 + in_EAX);
  }
  if ((NANP((float10)-1.0) || NANP(fVar2)) == ((float10)-1.0 == fVar2)) {
    iVar1 = **(int **)((int)in_EAX + 0x1014);
    uVar3 = FUN_004931e0(param_1,param_2);
    fVar2 = (float10)(**(code **)((int)iVar1 + 0xc))((int)uVar3);
  }
  else {
    iVar1 = *(int *)((int)in_EAX + 0x1008);
    if (-1 < iVar1 + -4) {
      *(int *)((int)in_EAX + 0x1008) = iVar1 + -4;
      param_3 = *(float *)(iVar1 + 4 + in_EAX);
      *(int *)((int)in_EAX + 0x1008) = iVar1 + -8;
      if ((*(char *)(iVar1 + in_EAX) != 'f') && (*(char *)(iVar1 + in_EAX) == 'i')) {
        param_3 = (float)(int)param_3;
      }
      return (float10)param_3;
    }
  }
  return fVar2;
}


