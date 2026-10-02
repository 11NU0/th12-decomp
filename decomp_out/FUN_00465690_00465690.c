/* undefined __stdcall FUN_00465690(int * param_1) @ 00465690  272 bytes */
#include "th12.h"

void FUN_00465690(int *param_1)

{
  int iVar1;
  int *piStack_50;
  undefined4 *puStack_4c;
  undefined *puStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  puStack_48 = (undefined *)&local_40;
  local_4 = DAT_004ad138 ^ (uint)&local_40;
  piStack_50 = (int *)*param_1;
  local_40 = 0;
  if (piStack_50 != (int *)0x0) {
    uStack_44 = 0;
    local_1c = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_20 = 0;
    local_18 = 0;
    puStack_4c = &local_28;
    local_28 = 0x24;
    local_24 = 1;
    iVar1 = (**(code **)(*piStack_50 + 0xc))();
    if (-1 < iVar1) {
      uStack_3c = 0;
      local_40 = 0x100004;
      puStack_4c = (undefined4 *)0x20001;
      puStack_48 = (undefined *)0xac44;
      uStack_44 = 0x2b110;
      iVar1 = (**(code **)(*piStack_50 + 0x38))(piStack_50,&puStack_4c);
      if ((-1 < iVar1) && (piStack_50 != (int *)0x0)) {
        (**(code **)(*piStack_50 + 8))(piStack_50);
      }
    }
    ___security_check_cookie_4(local_14 ^ (uint)&piStack_50);
    return;
  }
  uStack_44 = 0x4656bf;
  ___security_check_cookie_4(local_4 ^ (uint)&local_40);
  return;
}


