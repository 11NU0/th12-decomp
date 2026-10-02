/* void __stdcall _UnwindNestedFrames(EHRegistrationNode * param_1, EHExceptionRecord * param_2) @ 00491a21  84 bytes */
#include "th12.h"

/* Library Function - Single Match
    void __stdcall _UnwindNestedFrames(struct EHRegistrationNode *,struct EHExceptionRecord *)
   
   Library: Visual Studio 2008 Release */

void __stdcall _UnwindNestedFrames(EHRegistrationNode *param_1,EHExceptionRecord *param_2)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  
  puVar1 = (undefined4 *)*unaff_FS_OFFSET;
  RtlUnwind(param_1,(PVOID)0x491a4c,(PEXCEPTION_RECORD)param_2,(PVOID)0x0);
  *(uint *)((int)param_2 + 4) = *(uint *)((int)param_2 + 4) & 0xfffffffd;
  *puVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = puVar1;
  return;
}


