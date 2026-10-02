/* void __stdcall _CallMemberFunction0(void * param_1, void * param_2) @ 00491a0c  7 bytes */
#include "th12.h"

/* Library Function - Single Match
    void __stdcall _CallMemberFunction0(void *,void *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void _CallMemberFunction0(void *param_1,void *param_2)

{
  LOCK();
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x00491a11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2)();
  return;
}


