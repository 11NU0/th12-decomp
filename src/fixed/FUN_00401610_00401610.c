/* undefined __fastcall FUN_00401610(int param_1) @ 00401610  260 bytes */
#include "th12.h"

void __fastcall FUN_00401610(int param_1)

{
  int iVar1;
  char local_104 [256];
  uint local_4;
  
  iVar1 = DAT_004b43b8;
  local_4 = DAT_004ad138 ^ (uint)local_104;
  if (param_1 < 1000) {
    _sprintf(local_104,"%d",param_1);
  }
  else if (param_1 < 1000000) {
    _sprintf(local_104,"%d,%.3d",param_1 / 1000,param_1 % 1000);
  }
  else if (param_1 < 1000000000) {
    _sprintf(local_104,"%d,%.3d,%.3d",(param_1 / 1000000) % 1000);
  }
  else {
    _sprintf(local_104,"%d,%.3d,%.3d,%.3d",(param_1 / 1000000000) % 1000,(param_1 / 1000000) % 1000,
             (param_1 / 1000) % 1000,param_1 % 1000);
  }
  FUN_004014f0(iVar1);
  ___security_check_cookie_4(local_4 ^ (uint)local_104);
  return;
}


