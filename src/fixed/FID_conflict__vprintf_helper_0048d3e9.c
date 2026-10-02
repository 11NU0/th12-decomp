/* undefined4 __cdecl FID_conflict:_vprintf_helper(undefined * param_1, int param_2, undefined4 param_3, undefined4 param_4) @ 0048d3e9  133 bytes */
#include "th12.h"

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    _vprintf_helper
    _vwprintf_helper
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl
FID_conflict__vprintf_helper(undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined4 uVar3;
  int _Flag;
  FILE *_File;
  
  ppuVar1 = FUN_0047c025();
  _File = (FILE *)((int)ppuVar1 + 8);
  if (param_2 == 0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    uVar3 = 0xffffffff;
  }
  else {
    __lock_file(_File);
    _Flag = __stbuf(_File);
    uVar3 = (*(code *)param_1)(_File,param_2,param_3,param_4);
    __ftbuf(_Flag,_File);
    FUN_0048d471();
  }
  return uVar3;
}


