/* undefined __stdcall _LanguageEnumProc@4(char * param_1) @ 00485e71  193 bytes */

#include "th12.h"

/* Library Function - Single Match
    _LanguageEnumProc@4
   
   Library: Visual Studio 2008 Release */

void __stdcall _LanguageEnumProc_4(char *param_1)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  undefined4 extraout_ECX;
  _setloc_struct *this;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  this = &p_Var2->_setloc_data;
  Locale = _LcidFromHexString(extraout_ECX,param_1);
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) {
    (p_Var2->_setloc_data).iLocState = 0;
    goto LAB_00485f22;
  }
  iVar3 = __stricmp((char *)this->pchLanguage,local_80);
  if (iVar3 == 0) {
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      iVar3 = 1;
      goto LAB_00485eff;
    }
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)this->pchLanguage,local_80), iVar3 != 0)) goto LAB_00485f22;
    iVar3 = 0;
LAB_00485eff:
    iVar3 = _TestDefaultLanguage(this,Locale,iVar3);
    if (iVar3 == 0) goto LAB_00485f22;
  }
  piVar1 = &(p_Var2->_setloc_data).iLocState;
  *piVar1 = *piVar1 | 4;
  (p_Var2->_setloc_data)._cachecp = Locale;
  *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
LAB_00485f22:
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


