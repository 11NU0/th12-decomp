/* undefined __fastcall FUN_004021a0(int param_1) @ 004021a0  245 bytes */
#include "th12.h"

void __fastcall FUN_004021a0(int param_1)

{
  undefined auStack_110 [4];
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)auStack_110;
  if (param_1 < 1000) {
    _sprintf(local_10c,"%d",param_1);
  }
  else if (param_1 < 1000000) {
    _sprintf(local_10c,"%d,%.3d",param_1 / 1000,param_1 % 1000);
  }
  else if (param_1 < 1000000000) {
    _sprintf(local_10c,"%d,%.3d,%.3d",(param_1 / 1000000) % 1000,(param_1 / 1000) % 1000,
             param_1 % 1000);
  }
  FUN_004020a0(local_10c);
  ___security_check_cookie_4(local_8 ^ (uint)auStack_110);
  return;
}


