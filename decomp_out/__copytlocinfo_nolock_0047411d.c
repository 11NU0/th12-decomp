/* undefined __fastcall __copytlocinfo_nolock(LONG * param_1) @ 0047411d  38 bytes */
#include "th12.h"

/* Library Function - Single Match
    __copytlocinfo_nolock
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __fastcall __copytlocinfo_nolock(LONG *param_1)

{
  LONG *in_EAX;
  int iVar1;
  LONG *pLVar2;
  
  if (((param_1 != (LONG *)0x0) && (in_EAX != (LONG *)0x0)) && (in_EAX != param_1)) {
    pLVar2 = in_EAX;
    for (iVar1 = 0x36; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pLVar2 = *param_1;
      param_1 = param_1 + 1;
      pLVar2 = pLVar2 + 1;
    }
    *in_EAX = 0;
    ___addlocaleref(in_EAX);
  }
  return;
}


