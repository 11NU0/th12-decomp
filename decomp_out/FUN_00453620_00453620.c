/* char * __thiscall FUN_00453620(void * this, char * param_1) @ 00453620  71 bytes */
#include "th12.h"

char * __thiscall FUN_00453620(void *this,char *param_1)

{
  int in_EAX;
  int iVar1;
  int *unaff_EDI;
  
  if (in_EAX != 0) {
    do {
      *unaff_EDI = *(int *)((int)this + 4);
      iVar1 = _strncmp((char *)this,param_1,4);
      if (iVar1 == 0) {
        return (char *)((int)this + 8);
      }
      in_EAX = in_EAX + (-8 - *unaff_EDI);
      this = (void *)((int)this + *unaff_EDI + 8);
    } while (in_EAX != 0);
  }
  return (char *)0x0;
}


