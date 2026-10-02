/* undefined __thiscall FUN_00449dc0(void * this, int param_1) @ 00449dc0  89 bytes */

#include "th12.h"

void __thiscall FUN_00449dc0(void *this,int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *unaff_EDI;
  
                    /* WARNING: Load size is inaccurate */
  cVar1 = *this;
  pcVar2 = (char *)this;
  while ((cVar1 != '\n' && (*pcVar2 != '\r'))) {
    if (*unaff_EDI == 0) {
      return;
    }
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
    *unaff_EDI = *unaff_EDI + -1;
  }
  iVar3 = *unaff_EDI;
  if (iVar3 != 0) {
    *pcVar2 = '\0';
    iVar4 = param_1 - (int)this;
    do {
                    /* WARNING: Load size is inaccurate */
      cVar1 = *this;
      *(char *)((int)this + iVar4) = cVar1;
      this = (void *)((int)this + 1);
    } while (cVar1 != '\0');
    do {
      iVar3 = iVar3 + -1;
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
      *unaff_EDI = iVar3;
      if ((cVar1 != '\n') && (cVar1 != '\r')) {
        return;
      }
    } while (iVar3 != 0);
  }
  return;
}


