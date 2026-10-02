/* undefined __cdecl __expandlocale(char * param_1, char * param_2, rsize_t param_3, undefined2 * param_4, undefined4 * param_5) @ 0047478b  550 bytes */
#include "th12.h"

/* Library Function - Single Match
    __expandlocale
   
   Library: Visual Studio 2008 Release */

void __cdecl
__expandlocale(char *param_1,char *param_2,rsize_t param_3,undefined2 *param_4,undefined4 *param_5)

{
  undefined4 stack0xfffffffc;
  wchar_t *_Src;
  wchar_t *_Str1;
  wchar_t *_LpCodePage;
  _ptiddata p_Var1;
  char *_Str1_00;
  errno_t eVar2;
  size_t sVar3;
  int iVar4;
  BOOL BVar5;
  char local_98 [144];
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  p_Var1 = __getptd();
  _Src = (p_Var1->_setloc_data)._cachein + 6;
  _Str1 = (p_Var1->_setloc_data)._cachein + 8;
  _LpCodePage = (p_Var1->_setloc_data)._cachein + 2;
  _Str1_00 = (char *)((int)(p_Var1->_setloc_data)._cachein + 0x93);
  if (((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) && (param_3 != 0)) {
    if ((*param_1 == 'C') && (param_1[1] == '\0')) {
      eVar2 = _strcpy_s(param_2,param_3,"C");
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (param_4 != (undefined2 *)0x0) {
        *param_4 = 0;
        param_4[1] = 0;
        param_4[2] = 0;
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 0;
      }
    }
    else {
      sVar3 = _strlen(param_1);
      if ((0x82 < sVar3) ||
         ((iVar4 = _strcmp(_Str1_00,param_1), iVar4 != 0 &&
          (iVar4 = _strcmp((char *)_Str1,param_1), iVar4 != 0)))) {
        iVar4 = ___lc_strtolc(local_98,param_1);
        if ((iVar4 != 0) ||
           (BVar5 = ___get_qualified_locale
                              ((LPLC_STRINGS)local_98,(UINT *)_LpCodePage,(LPLC_STRINGS)local_98),
           BVar5 == 0)) goto LAB_004749ad;
        *(uint *)_Src = (uint)(ushort)(p_Var1->_setloc_data)._cachein[4];
        ___lc_lctostr(_Str1_00,0x83,local_98);
        if ((*param_1 == '\0') || (0x82 < sVar3)) {
          sVar3 = 0;
          param_1 = "";
        }
        eVar2 = _strncpy_s((char *)_Str1,0x83,param_1,sVar3 + 1);
        if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      if (param_4 != (undefined2 *)0x0) {
        _memcpy(param_4,_LpCodePage,6);
      }
      if (param_5 != (undefined4 *)0x0) {
        _memcpy(param_5,_Src,4);
      }
      eVar2 = _strcpy_s(param_2,param_3,_Str1_00);
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
  }
LAB_004749ad:
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


