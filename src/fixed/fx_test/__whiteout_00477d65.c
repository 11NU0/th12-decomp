/* uint __thiscall __whiteout(void * this, FILE * param_1) @ 00477d65  42 bytes */

#include "th12.h"

/* Library Function - Single Match
    __whiteout
   
   Library: Visual Studio 2008 Release */

uint __thiscall __whiteout(void *this,FILE *param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_ESI;
  
  do {
    *unaff_ESI = *unaff_ESI + 1;
    uVar1 = __inc(this,param_1);
    if (uVar1 == 0xffffffff) {
      return 0xffffffff;
    }
    this = (void *)(uVar1 & 0xff);
    iVar2 = _isspace((int)this);
  } while (iVar2 != 0);
  return uVar1;
}


