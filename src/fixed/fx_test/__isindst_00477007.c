/* int __cdecl __isindst(tm * _Time) @ 00477007  56 bytes */

#include "th12.h"

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __isindst
   
   Library: Visual Studio 2008 Release */

int __cdecl __isindst(tm *_Time)

{
  bool bVar1;
  undefined3 extraout_var;
  
  __lock(6);
  bVar1 = __isindst_nolock();
  FUN_0047703f();
  return CONCAT31(extraout_var,bVar1);
}


