/* undefined __stdcall FUN_00424b00(void) @ 00424b00  75 bytes */
#include "th12.h"

void __stdcall FUN_00424b00(void)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int unaff_EBX;
  char *unaff_EDI;
  
  iVar4 = (int)unaff_EDI - (int)in_EAX;
  do {
    cVar1 = *in_EAX;
    in_EAX[iVar4] = cVar1;
    in_EAX = in_EAX + 1;
  } while (cVar1 != '\0');
  pcVar2 = _strchr(unaff_EDI,0x3a);
  if (pcVar2 == (char *)0x0) {
    FUN_00424b50();
    return;
  }
  pcVar3 = pcVar2 + 1;
  iVar4 = unaff_EBX - (int)pcVar3;
  do {
    cVar1 = *pcVar3;
    pcVar3[iVar4] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  *pcVar2 = '\0';
  FUN_00424b50();
  FUN_00424b50();
  return;
}


