/* char * __cdecl ___unDName(char * param_1, char * param_2, int param_3, int param_4, undefined4 param_5, ushort param_6) @ 004821bc  145 bytes */

#include "th12.h"

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___unDName
   
   Library: Visual Studio 2008 Release */

char * __cdecl
__cdecl ___unDName(char *param_1,char *param_2,int param_3,int param_4,undefined4 param_5,ushort param_6)

{
  int iVar1;
  UnDecorator local_78 [88];
  char *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_004aaed8;
  uStack_c = 0x4821c8;
  if ((param_4 != 0) && (iVar1 = __mtinitlocknum(5), iVar1 != 0)) {
    __lock(5);
    local_8 = (undefined *)0x0;
    DAT_004b42f8 = param_4;
    _DAT_004b42fc = param_5;
    _DAT_004b4308 = 0;
    _DAT_004b4300 = 0;
    _DAT_004b4304 = 0;
    UnDecorator_UnDecorator
              (local_78,param_1,param_2,param_3,(_func_char_ptr_long *)0x0,(uint)param_6);
    local_20 = UnDecorator_operator_char_(local_78);
    Destructor(0x4b42f8);
    local_8 = (undefined *)0xfffffffe;
    FUN_0048224d();
    return local_20;
  }
  return (char *)0x0;
}


