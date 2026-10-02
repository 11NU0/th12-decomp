/* longlong __cdecl FUN_0046d16f(char * param_1, _locale_t param_2) @ 0046d16f  25 bytes */

#include "th12.h"

longlong __cdecl FUN_0046d16f(char *param_1,_locale_t param_2)

{
  longlong lVar1;
  
  lVar1 = __strtoi64_l(param_1,(char **)0x0,10,param_2);
  return lVar1;
}


