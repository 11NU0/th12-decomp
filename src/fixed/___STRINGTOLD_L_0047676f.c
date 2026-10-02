/* uint __cdecl ___STRINGTOLD_L(_LDOUBLE * pld, char * * p_end_ptr, char * str, int mult12, _locale_t _Locale) @ 0047676f  91 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___STRINGTOLD_L
   
   Library: Visual Studio 2008 Release */

uint __cdecl ___STRINGTOLD_L(_LDOUBLE *pld,char **p_end_ptr,char *str,int mult12,_locale_t _Locale)

{
  undefined4 stack0xfffffffc;
  uint uVar1;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  ___strgtold12_l(&local_14,p_end_ptr,str,mult12,0,0,0,_Locale);
  __ld12told(&local_14,pld);
  uVar1 = ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return uVar1;
}


