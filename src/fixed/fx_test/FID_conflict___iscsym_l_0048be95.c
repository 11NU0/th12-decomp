/* undefined FID_conflict:__iscsym_l(undefined4 param_1, undefined4 param_2) @ 0048be95  35 bytes */

#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    __iscsym_l
    __iscsymf_l
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 FID_conflict___iscsym_l(int param_1,_locale_t param_2)

{
  int iVar1;
  
  iVar1 = __isalnum_l(param_1,param_2);
  if ((iVar1 == 0) && (param_1 != 0x5f)) {
    return 0;
  }
  return 1;
}


