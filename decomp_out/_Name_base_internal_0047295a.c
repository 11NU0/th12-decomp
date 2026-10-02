/* char * __cdecl _Name_base_internal(type_info * param_1, __type_info_node * param_2) @ 0047295a  256 bytes */
#include "th12.h"

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: static char const * __cdecl type_info::_Name_base_internal(class type_info const
   *,struct __type_info_node *)
   
   Library: Visual Studio 2008 Release */

char * __cdecl type_info::_Name_base_internal(type_info *param_1,__type_info_node *param_2)

{
  char *_Str;
  size_t sVar1;
  undefined4 *_Memory;
  char *_Dst;
  errno_t eVar2;
  undefined local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004aaba0;
  uStack_c = 0x472966;
  if (*(int *)(param_1 + 4) == 0) {
    __lock(0xe);
    local_8 = (undefined *)0x0;
    if (*(int *)(param_1 + 4) == 0) {
      _Str = (char *)___unDNameHelper((char *)0x0,(char *)(param_1 + 9),0,0x2800);
      if (_Str == (char *)0x0) {
        __local_unwind4(&DAT_004ad138,(int)local_14,0xfffffffe);
        return (char *)0x0;
      }
      sVar1 = _strlen(_Str);
      while ((sVar1 != 0 && (_Str[sVar1 - 1] == ' '))) {
        _Str[sVar1 - 1] = '\0';
        sVar1 = sVar1 - 1;
      }
      _Memory = (undefined4 *)_malloc(8);
      if (_Memory != (undefined4 *)0x0) {
        _Dst = (char *)_malloc(sVar1 + 1);
        if (_Dst == (char *)0x0) {
          _free(_Memory);
        }
        else {
          eVar2 = _strcpy_s(_Dst,sVar1 + 1,_Str);
          if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(char **)(param_1 + 4) = _Dst;
          *_Memory = _Dst;
          _Memory[1] = *(undefined4 *)(param_2 + 4);
          *(undefined4 **)(param_2 + 4) = _Memory;
        }
      }
      _free(_Str);
    }
    local_8 = (undefined *)0xfffffffe;
    FUN_00472a60();
  }
  return *(char **)(param_1 + 4);
}


