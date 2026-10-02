/* undefined4 __cdecl __getenv_s_helper(char * param_1, uint param_2, char * param_3) @ 0048afc9  146 bytes */

#include "th12.h"

/* Library Function - Single Match
    __getenv_s_helper
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl __getenv_s_helper(char *param_1,uint param_2,char *param_3)

{
  uint *in_EAX;
  int *piVar1;
  char *_Str;
  size_t sVar2;
  errno_t eVar3;
  
  if (in_EAX != (uint *)0x0) {
    *in_EAX = 0;
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) goto LAB_0048b008;
    }
    else if (param_2 != 0) {
LAB_0048b008:
      if (param_1 != (char *)0x0) {
        *param_1 = '\0';
      }
      _Str = __getenv_helper_nolock(param_3);
      if (_Str != (char *)0x0) {
        sVar2 = _strlen(_Str);
        *in_EAX = sVar2 + 1;
        if (param_2 != 0) {
          if (param_2 < sVar2 + 1) {
            return 0x22;
          }
          eVar3 = _strcpy_s(param_1,param_2,_Str);
          if (eVar3 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
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


