/* char * __cdecl _Name_base(type_info * param_1, __type_info_node * param_2) @ 004727c2  230 bytes */
#include "th12.h"

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static char const * __cdecl type_info__Name_base(class type_info const *,struct
   __type_info_node *)
   
   Library: Visual Studio 2008 Release */

char * __cdecl type_info__Name_base(type_info *param_1,__type_info_node *param_2)

{
  char *_Str;
  size_t sVar1;
  undefined4 *_Memory;
  char *_Dst;
  errno_t eVar2;
  
  if (*(int *)((int)param_1 + 4) == 0) {
    _Str = ___unDName((char *)0x0,(char *)((int)param_1 + 9),0,0x46d04a,_free,0x2800);
    if (_Str == (char *)0x0) {
      return (char *)0x0;
    }
    sVar1 = _strlen(_Str);
    while (sVar1 != 0) {
      if (_Str[sVar1 - 1] != ' ') break;
      _Str[sVar1 - 1] = '\0';
      sVar1 = sVar1 - 1;
    }
    __lock(0xe);
    if ((*(int *)((int)param_1 + 4) == 0) &&
       (_Memory = (undefined4 *)_malloc(8), _Memory != (undefined4 *)0x0)) {
      _Dst = (char *)_malloc(sVar1 + 1);
      *(char **)((int)param_1 + 4) = _Dst;
      if (_Dst == (char *)0x0) {
        _free(_Memory);
      }
      else {
        eVar2 = _strcpy_s(_Dst,sVar1 + 1,_Str);
        if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *_Memory = *(undefined4 *)((int)param_1 + 4);
        _Memory[1] = *(undefined4 *)((int)param_2 + 4);
        *(undefined4 **)((int)param_2 + 4) = _Memory;
      }
    }
    _free(_Str);
    FUN_004728ae();
  }
  return *(char **)((int)param_1 + 4);
}


