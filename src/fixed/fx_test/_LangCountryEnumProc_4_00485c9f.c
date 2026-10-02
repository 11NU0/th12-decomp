/* undefined __stdcall _LangCountryEnumProc@4(char * param_1) @ 00485c9f  466 bytes */

#include "th12.h"

/* Library Function - Single Match
    _LangCountryEnumProc@4
   
   Library: Visual Studio 2008 Release */

void __stdcall _LangCountryEnumProc_4(char *param_1)

{
  int *piVar1;
  _ptiddata p_Var2;
  LCID Locale;
  int iVar3;
  size_t sVar4;
  undefined4 extraout_ECX;
  uint extraout_EDX;
  _setloc_struct *this;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  p_Var2 = __getptd();
  this = &p_Var2->_setloc_data;
  Locale = _LcidFromHexString(extraout_ECX,param_1);
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevCountry != 0) & 0xfffff005) +
                                0x1002,local_80,0x78);
  if (iVar3 == 0) {
LAB_00485cf2:
    (p_Var2->_setloc_data).iLocState = 0;
    goto LAB_00485e60;
  }
  iVar3 = __stricmp((char *)(p_Var2->_setloc_data).pchCountry,local_80);
  if (iVar3 == 0) {
    iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002
                                  ) + 0x1001,local_80,0x78);
    if (iVar3 == 0) goto LAB_00485cf2;
    iVar3 = __stricmp((char *)this->pchLanguage,local_80);
    if (iVar3 == 0) {
      piVar1 = &(p_Var2->_setloc_data).iLocState;
      *piVar1 = *piVar1 | 0x304;
      (p_Var2->_setloc_data)._cachecp = Locale;
LAB_00485da2:
      *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
    }
    else if ((*(byte *)&(p_Var2->_setloc_data).iLocState & 2) == 0) {
      sVar4 = (p_Var2->_setloc_data).iPrimaryLen;
      if ((sVar4 == 0) || (iVar3 = __strnicmp((char *)this->pchLanguage,local_80,sVar4), iVar3 != 0)
         ) {
        if ((((p_Var2->_setloc_data).iLocState & 1U) == 0) &&
           (iVar3 = _TestDefaultCountry((short)Locale), iVar3 != 0)) {
          (p_Var2->_setloc_data).iLocState = extraout_EDX | 1;
          goto LAB_00485da2;
        }
      }
      else {
        piVar1 = &(p_Var2->_setloc_data).iLocState;
        *piVar1 = *piVar1 | 2;
        *(LCID *)(p_Var2->_setloc_data)._cachein = Locale;
        sVar4 = _strlen((char *)this->pchLanguage);
        if (sVar4 == (p_Var2->_setloc_data).iPrimaryLen) {
          (p_Var2->_setloc_data)._cachecp = Locale;
        }
      }
    }
  }
  if (((p_Var2->_setloc_data).iLocState & 0x300U) == 0x300) goto LAB_00485e60;
  iVar3 = GetLocaleInfoA(Locale,(-(uint)((p_Var2->_setloc_data).bAbbrevLanguage != 0) & 0xfffff002)
                                + 0x1001,local_80,0x78);
  if (iVar3 == 0) goto LAB_00485cf2;
  iVar3 = __stricmp((char *)this->pchLanguage,local_80);
  if (iVar3 == 0) {
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x200;
    if ((p_Var2->_setloc_data).bAbbrevLanguage == 0) {
      if (((p_Var2->_setloc_data).iPrimaryLen != 0) &&
         (sVar4 = _strlen((char *)this->pchLanguage), sVar4 == (p_Var2->_setloc_data).iPrimaryLen))
      {
        iVar3 = 1;
        goto LAB_00485e38;
      }
      goto LAB_00485e46;
    }
    (p_Var2->_setloc_data).iLocState = (p_Var2->_setloc_data).iLocState | 0x100;
  }
  else {
    if ((((p_Var2->_setloc_data).bAbbrevLanguage != 0) || ((p_Var2->_setloc_data).iPrimaryLen == 0))
       || (iVar3 = __stricmp((char *)this->pchLanguage,local_80), iVar3 != 0)) goto LAB_00485e60;
    iVar3 = 0;
LAB_00485e38:
    iVar3 = _TestDefaultLanguage(this,Locale,iVar3);
    if (iVar3 == 0) goto LAB_00485e60;
LAB_00485e46:
    piVar1 = &(p_Var2->_setloc_data).iLocState;
    *piVar1 = *piVar1 | 0x100;
  }
  if ((p_Var2->_setloc_data)._cachecp == 0) {
    (p_Var2->_setloc_data)._cachecp = Locale;
  }
LAB_00485e60:
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


