/* int __cdecl __dupenv_s_helper(size_t * param_1, char * param_2) @ 0048b05e  161 bytes */
#include "th12.h"

/* Library Function - Single Match
    __dupenv_s_helper
   
   Library: Visual Studio 2008 Release */

int __cdecl __dupenv_s_helper(size_t *param_1,char *param_2)

{
  int *piVar1;
  char *_Str;
  size_t sVar2;
  char *_Dst;
  errno_t eVar3;
  undefined4 *unaff_EBX;
  
  if (unaff_EBX != (undefined4 *)0x0) {
    *unaff_EBX = 0;
    if (param_1 != (size_t *)0x0) {
      *param_1 = 0;
    }
    if (param_2 != (char *)0x0) {
      _Str = __getenv_helper_nolock(param_2);
      if (_Str != (char *)0x0) {
        sVar2 = _strlen(_Str);
        sVar2 = sVar2 + 1;
        _Dst = (char *)_calloc(sVar2,1);
        *unaff_EBX = _Dst;
        if (_Dst == (char *)0x0) {
          piVar1 = __errno();
          *piVar1 = 0xc;
          piVar1 = __errno();
          return *piVar1;
        }
        eVar3 = _strcpy_s(_Dst,sVar2,_Str);
        if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        if (param_1 != (size_t *)0x0) {
          *param_1 = sVar2;
        }
      }
      return 0;
    }
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0x16;
}


