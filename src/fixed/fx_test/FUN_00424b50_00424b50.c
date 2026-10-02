/* undefined __stdcall FUN_00424b50(void) @ 00424b50  113 bytes */

#include "th12.h"

void __stdcall FUN_00424b50(void)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  while ((((cVar1 = *in_EAX, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == '\n')) || (cVar1 == '\r')
         )) {
    pcVar2 = in_EAX;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    iVar3 = (int)pcVar2 - (int)(in_EAX + 1);
    if (0 < iVar3) {
      pcVar2 = in_EAX + 1;
      pcVar4 = in_EAX;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pcVar4 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        pcVar4 = pcVar4 + 1;
      }
    }
  }
  pcVar2 = in_EAX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = (int)pcVar2 - (int)(in_EAX + 1);
  while ((iVar3 = iVar3 + -1, -1 < iVar3 &&
         (((cVar1 = in_EAX[iVar3], cVar1 == ' ' || (cVar1 == '\t')) ||
          ((cVar1 == '\n' || (cVar1 == '\r'))))))) {
    in_EAX[iVar3] = '\0';
  }
  return;
}


