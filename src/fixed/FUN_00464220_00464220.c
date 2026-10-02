/* undefined __thiscall FUN_00464220(void * this, char * param_1) @ 00464220  211 bytes */
#include "th12.h"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00464220(void *this,char *param_1)

{
  undefined4 stack0x00000008;
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char local_2004 [8192];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)local_2004;
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf140);
    DAT_004cf21b = DAT_004cf21b + '\x01';
  }
  _vsprintf(local_2004,param_1,&stack0x00000008);
  pcVar2 = local_2004;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar4 = *(char **)((int)this + 0x2000);
  if (pcVar4 + ((int)pcVar2 - (int)(local_2004 + 1)) < (char *)((int)this + 0x1fffU)) {
    pcVar3 = local_2004;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    *(int *)((int)this + 0x2000) =
         *(int *)((int)this + 0x2000) + ((int)pcVar2 - (int)(local_2004 + 1));
    **(undefined **)((int)this + 0x2000) = 0;
  }
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf140);
    DAT_004cf21b = DAT_004cf21b + -1;
  }
  ___security_check_cookie_4(local_4 ^ (uint)local_2004);
  return;
}


