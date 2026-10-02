/* undefined __stdcall __callthreadstartex(void) @ 0046e487  53 bytes */

#include "th12.h"

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    __callthreadstartex
   
   Library: Visual Studio 2008 Release */

void __stdcall __callthreadstartex(void)

{
  _ptiddata p_Var1;
  uint _Retval;
  _EXCEPTION_POINTERS *local_18;
  
  p_Var1 = __getptd();
  _Retval = (*(code *)p_Var1->_initaddr)(p_Var1->_initarg);
  __endthreadex(_Retval);
  __XcptFilter(local_18->ExceptionRecord->ExceptionCode,local_18);
  return;
}


