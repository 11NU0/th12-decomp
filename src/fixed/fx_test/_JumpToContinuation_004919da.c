/* void __stdcall _JumpToContinuation(void * param_1, EHRegistrationNode * param_2) @ 004919da  45 bytes */

#include "th12.h"

/* Library Function - Single Match
    void __stdcall _JumpToContinuation(void *,struct EHRegistrationNode *)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __stdcall _JumpToContinuation(void *param_1,EHRegistrationNode *param_2)

{
  undefined4 *unaff_FS_OFFSET;
  
  *unaff_FS_OFFSET = *(undefined4 *)*unaff_FS_OFFSET;
                    /* WARNING: Could not recover jumptable at 0x00491a05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1)();
  return;
}


