/* _purecall_handler __cdecl FID_conflict:__set_inconsistency(_purecall_handler _Handler) @ 00470eee  39 bytes */

#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    void (__cdecl*__cdecl __set_inconsistency(void (__cdecl*)(void)))(void)
    __set_invalid_parameter_handler
    __set_purecall_handler
   
   Library: Visual Studio 2008 Release */

_purecall_handler __cdecl FID_conflict___set_inconsistency(_purecall_handler _Handler)

{
  _purecall_handler p_Var1;
  
  p_Var1 = (_purecall_handler)__decode_pointer(DAT_004b3d60);
  DAT_004b3d60 = __encode_pointer((int)_Handler);
  return p_Var1;
}


