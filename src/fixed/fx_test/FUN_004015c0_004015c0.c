/* undefined __cdecl FUN_004015c0(char * param_1) @ 004015c0  80 bytes */

#include "th12.h"

void __cdecl FUN_004015c0(char *param_1)

{
  int unaff_ESI;
  char local_104 [256];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)local_104;
  _vsprintf(local_104,param_1,&stack0x00000008);
  FUN_004014f0(unaff_ESI);
  ___security_check_cookie_4(local_4 ^ (uint)local_104);
  return;
}


