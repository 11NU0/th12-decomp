/* _EXCEPTION_DISPOSITION __cdecl CatchGuardHandler(EHExceptionRecord * param_1, CatchGuardRN * param_2, void * param_3, void * param_4) @ 00491b36  51 bytes */
#include "th12.h"

/* Library Function - Single Match
    enum _EXCEPTION_DISPOSITION __cdecl CatchGuardHandler(struct EHExceptionRecord *,struct
   CatchGuardRN *,void *,void *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

_EXCEPTION_DISPOSITION __cdecl
CatchGuardHandler(EHExceptionRecord *param_1,CatchGuardRN *param_2,void *param_3,void *param_4)

{
  _EXCEPTION_DISPOSITION _Var1;
  
  ___security_check_cookie_4(*(uint *)((int)param_2 + 8) ^ (uint)param_2);
  _Var1 = ___InternalCxxFrameHandler
                    (param_1,*(EHRegistrationNode **)((int)param_2 + 0x10),(_CONTEXT *)param_3,
                     (void *)0x0,*(_s_FuncInfo **)((int)param_2 + 0xc),*(int *)((int)param_2 + 0x14),
                     (EHRegistrationNode *)param_2,'\0');
  return _Var1;
}


