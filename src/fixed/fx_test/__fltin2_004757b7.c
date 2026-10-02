/* FLT __cdecl __fltin2(FLT _Flt, char * _Str, _locale_t _Locale) @ 004757b7  167 bytes */

#include "th12.h"

/* Library Function - Single Match
    __fltin2
   
   Library: Visual Studio 2008 Release */

typedef struct local_20__u { undefined4 _; undefined4 x; } local_20__u;
FLT __cdecl __fltin2(FLT _Flt,char *_Str,_locale_t _Locale)

{
  local_20__u *local_20__u_alias;
  INTRNCVT_STATUS IVar1;
  FLT p_Var2;
  uint uVar3;
  _locale_t in_stack_00000018;
  char *local_28;
  char *local_24;
  _CRT_DOUBLE local_20;
  uint local_18;
  _LDBL12 local_14;
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  local_24 = _Str;
  uVar3 = 0;
  local_18 = ___strgtold12_l(&local_14,&local_28,_Str,0,0,0,0,in_stack_00000018);
  if ((local_18 & 4) == 0) {
    IVar1 = __ld12tod(&local_14,&local_20);
    if (((local_18 & 2) != 0) || (IVar1 == INTRNCVT_OVERFLOW)) {
      uVar3 = 0x80;
    }
    if (((local_18 & 1) != 0) || (IVar1 == INTRNCVT_UNDERFLOW)) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0x200;
  local_20__u_alias = (local_20__u *)&local_20;
    local_20__u_alias->x._0_4_ = 0;
  local_20__u_alias = (local_20__u *)&local_20;
    local_20__u_alias->x._4_4_ = 0;
  }
  _Flt->nbytes = (int)local_28 - (int)local_24;
  local_20__u_alias = (local_20__u *)&local_20;
  *(undefined4 *)&_Flt->dval = local_20__u_alias->x._0_4_;
  local_20__u_alias = (local_20__u *)&local_20;
  *(undefined4 *)((int)&_Flt->dval + 4) = local_20__u_alias->x._4_4_;
  _Flt->flags = uVar3;
  p_Var2 = (FLT)___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return p_Var2;
}


