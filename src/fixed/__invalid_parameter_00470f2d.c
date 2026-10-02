/* undefined __cdecl __invalid_parameter(wchar_t * param_1, wchar_t * param_2, wchar_t * param_3, uint param_4, uintptr_t param_5) @ 00470f2d  38 bytes */
#include "th12.h"

/* Library Function - Single Match
    __invalid_parameter
   
   Library: Visual Studio 2008 Release */

void __cdecl
__invalid_parameter(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,
                   uintptr_t param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__decode_pointer(DAT_004b3d60);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00470f43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0047b3ff();
                    /* WARNING: Subroutine does not return */
  __invoke_watson(param_1,param_2,param_3,param_4,param_5);
}


