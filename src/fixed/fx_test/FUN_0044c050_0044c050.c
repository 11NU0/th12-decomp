/* undefined __fastcall FUN_0044c050(char * param_1) @ 0044c050  121 bytes */

#include "th12.h"

void __fastcall FUN_0044c050(char *param_1)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  pcVar2 = _strchr(in_EAX,0x3a);
  if (pcVar2 != (char *)0x0) {
    iVar5 = (int)param_1 - (int)in_EAX;
    do {
      cVar1 = *in_EAX;
      in_EAX[iVar5] = cVar1;
      in_EAX = in_EAX + 1;
    } while (cVar1 != '\0');
    return;
  }
  GetModuleFileNameA((HMODULE)0x0,param_1,0x104);
  pcVar2 = _strrchr(param_1,0x5c);
  if (pcVar2 == (char *)0x0) {
    *param_1 = '\0';
  }
  pcVar2[1] = '\0';
  pcVar2 = in_EAX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar6 = param_1 + -1;
  do {
    pcVar4 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar4 != '\0');
  pcVar4 = in_EAX;
  for (uVar3 = (uint)((int)pcVar2 - (int)in_EAX) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = (int)pcVar2 - (int)in_EAX & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return;
}


