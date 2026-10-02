/* undefined4 __fastcall FUN_0043a950(undefined4 param_1, int param_2) @ 0043a950  237 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0043a950(undefined4 param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float local_14;
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = FUN_00464440();
  fVar1 = (float)iVar2;
  if (iVar2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar3 = FUN_004646e0((fVar1 * 4.656613e-10 - 1.0) * 3.1415927);
  iVar2 = 6;
  do {
    local_14 = (float)fVar3;
    _DAT_004b336c = local_14;
    local_4 = 0.0;
    FUN_0043acc0(&local_c,local_14,12.0);
    local_c = *(float *)((int)param_2 + 0x14) + local_c;
    local_8 = *(float *)((int)param_2 + 0x18) + local_8;
    local_4 = *(float *)((int)param_2 + 0x1c) + local_4;
    FUN_00439630(&local_c,(int *)&DAT_004b3358,0);
    fVar3 = FUN_004646e0(local_14 + 1.0471976);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}


