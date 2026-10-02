/* undefined __fastcall FUN_004606b0(undefined4 param_1, undefined4 param_2, int * param_3, undefined4 param_4, int param_5, COLORREF param_6, COLORREF param_7, int param_8, uint param_9) @ 004606b0  172 bytes */

#include "th12.h"

void __fastcall
FUN_004606b0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
            COLORREF param_6,COLORREF param_7,int param_8,uint param_9)

{
  int in_EAX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  LPCSTR unaff_EBX;
  ulonglong uVar1;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (in_EAX < 1) {
    in_EAX = 0x11;
  }
  else if (in_EAX < 9) {
    return;
  }
  uVar1 = FUN_004931e0(param_1,param_2);
  local_18 = (int)uVar1;
  uVar1 = FUN_004931e0(param_4,(int)(uVar1 >> 0x20));
  local_14 = (undefined4)uVar1;
  uVar1 = FUN_004931e0(extraout_ECX,param_4);
  local_10 = (undefined4)uVar1;
  uVar1 = FUN_004931e0(extraout_ECX_00,(int)(uVar1 >> 0x20));
  local_c = (undefined4)uVar1;
  if (param_8 != 0) {
    FUN_0044e8e0(&local_18,param_5,in_EAX,param_6,unaff_EBX,param_3);
    return;
  }
  FUN_0044e660(unaff_EBX,param_5,&local_18,in_EAX,param_6,param_7,param_3,param_9);
  return;
}


