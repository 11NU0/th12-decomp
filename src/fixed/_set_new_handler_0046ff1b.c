/* _func_int_uint * __cdecl _set_new_handler(_func_int_uint * param_1) @ 0046ff1b  54 bytes */
#include "th12.h"

/* Library Function - Single Match
    int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int)
   
   Library: Visual Studio 2008 Release */

_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  
  __lock(4);
  p_Var1 = (_func_int_uint *)__decode_pointer(DAT_004b3d5c);
  DAT_004b3d5c = __encode_pointer((int)param_1);
  FUN_0046eba8(4);
  return p_Var1;
}


