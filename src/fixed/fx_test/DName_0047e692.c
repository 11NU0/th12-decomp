/* undefined __thiscall DName(DName * this, __uint64 param_1) @ 0047e692  110 bytes */

#include "th12.h"

/* Library Function - Single Match
    public: __thiscall DName_DName(unsigned __int64)
   
   Library: Visual Studio 2008 Release */

void __thiscall DName_DName(DName *this,__uint64 param_1)

{
  char extraout_CL;
  char *pcVar1;
  __uint64 _Var2;
  char local_d [5];
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  pcVar1 = local_d + 1;
  *(undefined4 *)this = 0;
  local_d[1] = 0;
  _Var2 = param_1;
  do {
    param_1._4_4_ = (uint)(_Var2 >> 0x20);
    param_1._0_4_ = (uint)_Var2;
    pcVar1 = pcVar1 + -1;
    _Var2 = __aulldvrm((uint)param_1,param_1._4_4_,10,0);
    *pcVar1 = extraout_CL + '0';
  } while (_Var2 != 0);
  doPchar(this,pcVar1,(int)(local_d + (1 - (int)pcVar1)));
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


