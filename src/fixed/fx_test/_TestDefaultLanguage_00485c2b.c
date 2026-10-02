/* undefined __thiscall _TestDefaultLanguage(void * this, uint param_1, int param_2) @ 00485c2b  116 bytes */

#include "th12.h"

/* Library Function - Single Match
    _TestDefaultLanguage
   
   Library: Visual Studio 2008 Release */

void __thiscall _TestDefaultLanguage(void *this,uint param_1,int param_2)

{
  char *_Str;
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  CHAR local_80 [120];
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  iVar1 = GetLocaleInfoA(param_1 & 0x3ff | 0x400,1,local_80,0x78);
  if (((iVar1 != 0) && (uVar2 = _LcidFromHexString(extraout_ECX,local_80), param_1 != uVar2)) &&
     (param_2 != 0)) {
                    /* WARNING: Load size is inaccurate */
    _Str = *this;
    _GetPrimaryLen(extraout_ECX_00,_Str);
    _strlen(_Str);
  }
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


