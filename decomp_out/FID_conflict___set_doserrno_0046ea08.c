/* errno_t __cdecl FID_conflict:__set_doserrno(ulong _Value) @ 0046ea08  33 bytes */
#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    __set_doserrno
    __set_errno
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl FID_conflict___set_doserrno(ulong _Value)

{
  _ptiddata p_Var1;
  ulong *puVar2;
  
  p_Var1 = __getptd_noexit();
  if (p_Var1 == (_ptiddata)0x0) {
    return 0xc;
  }
  puVar2 = ___doserrno();
  *puVar2 = _Value;
  return 0;
}


