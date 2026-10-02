/* undefined __cdecl FUN_00401720(char * param_1) @ 00401720  103 bytes */
#include "th12.h"

void __cdecl FUN_00401720(char *param_1)

{
  int unaff_ESI;
  char local_104 [256];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)local_104;
  _vsprintf(local_104,param_1,&stack0x00000008);
  FUN_004014f0(unaff_ESI);
  *(undefined4 *)(*(int *)(unaff_ESI + 0x18f7c) * 0x138 + 0x964 + unaff_ESI) = 1;
  ___security_check_cookie_4(local_4 ^ (uint)local_104);
  return;
}


