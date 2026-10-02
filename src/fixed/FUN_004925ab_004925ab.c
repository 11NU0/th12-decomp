/* undefined __stdcall FUN_004925ab(void * param_1) @ 004925ab  73 bytes */
#include "th12.h"

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __stdcall FUN_004925ab(void *param_1)

{
  code *pcVar1;
  _ptiddata p_Var2;
  
  p_Var2 = __getptd();
  if (p_Var2->_curexcspec != (void *)0x0) {
    _inconsistency();
  }
  unexpected();
  terminate();
  p_Var2 = __getptd();
  p_Var2->_curexcspec = param_1;
  __CxxThrowException_8(0,(byte *)0x0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


