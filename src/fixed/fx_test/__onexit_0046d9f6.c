/* _onexit_t __cdecl __onexit(_onexit_t _Func) @ 0046d9f6  54 bytes */

#include "th12.h"

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __onexit
   
   Library: Visual Studio 2008 Release */

_onexit_t __cdecl __onexit(_onexit_t _Func)

{
  _onexit_t p_Var1;
  
  FUN_00472c79();
  p_Var1 = (_onexit_t)__onexit_nolock((int)_Func);
  FUN_0046da2c();
  return p_Var1;
}


