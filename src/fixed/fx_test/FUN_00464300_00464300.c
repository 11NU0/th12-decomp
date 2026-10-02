/* undefined __cdecl FUN_00464300(char * param_1) @ 00464300  207 bytes */

#include "th12.h"

void __cdecl FUN_00464300(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int unaff_EDI;
  char local_204 [512];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)local_204;
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf140);
    DAT_004cf21b = DAT_004cf21b + '\x01';
  }
  pcVar2 = local_204;
  pcVar3 = local_204;
  _vsprintf(local_204,param_1,&stack0x00000008);
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar4 = *(char **)(unaff_EDI + 0x2000);
  if (pcVar4 + ((int)pcVar2 - (int)(local_204 + 1)) < (char *)(unaff_EDI + 0x1fffU)) {
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    *(int *)(unaff_EDI + 0x2000) =
         *(int *)(unaff_EDI + 0x2000) + ((int)pcVar2 - (int)(local_204 + 1));
    **(undefined **)(unaff_EDI + 0x2000) = 0;
  }
  *(undefined *)(unaff_EDI + 0x2004) = 1;
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf140);
    DAT_004cf21b = DAT_004cf21b + -1;
  }
  ___security_check_cookie_4(local_4 ^ (uint)local_204);
  return;
}


