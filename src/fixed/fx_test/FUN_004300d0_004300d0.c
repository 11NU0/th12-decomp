/* undefined __stdcall FUN_004300d0(undefined4 param_1, char * param_2) @ 004300d0  123 bytes */

#include "th12.h"

void __stdcall FUN_004300d0(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char local_104 [256];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)local_104;
  iVar2 = -(int)param_2;
  do {
    cVar1 = *param_2;
    param_2[(int)(local_104 + iVar2)] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  pcVar3 = _strrchr(local_104,0x2e);
  pcVar3[1] = 'w';
  pcVar3[2] = 'a';
  pcVar3[3] = 'v';
  FUN_00454960(1,param_1);
  ___security_check_cookie_4(local_4 ^ (uint)local_104);
  return;
}


