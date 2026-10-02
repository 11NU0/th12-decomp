/* undefined __thiscall DName(DName * this, __int64 param_1) @ 0047e700  155 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: __thiscall DName_DName(__int64)
   
   Library: Visual Studio 2008 Release */

typedef struct param_1__u { undefined4 _; undefined1 _4_4_; } param_1__u;
void __fastcall DName_DName(DName *(float *)this,__int64 param_1)

{
  undefined4 stack0xfffffffc;
  bool bVar1;
  char extraout_CL;
  char *pcVar2;
  char *pcVar3;
  char local_d [5];
  uint local_8;
  
  local_8 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  this[4] = (DName)0x0;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xffff00ff;
  pcVar3 = local_d + 2;
  *(undefined4 *)this = 0;
  local_d[2] = 0;
  bVar1 = false;
  if ((param_1 < 0x100000000) && (param_1 < 0)) {
    bVar1 = true;
    param_1 = CONCAT44(-(((param_1__u *)&param_1)->_4_4_ + (uint)((uint)param_1 != 0)),-(uint)param_1);
  }
  do {
    pcVar2 = pcVar3;
    pcVar3 = pcVar2 + -1;
    param_1 = __aulldvrm((uint)param_1,(uint)((ulonglong)param_1 >> 0x20),10,0);
    *pcVar3 = extraout_CL + '0';
  } while (param_1 != 0);
  if (bVar1) {
    pcVar3 = pcVar2 + -2;
    *pcVar3 = '-';
  }
  doPchar(this,pcVar3,(int)(local_d + (2 - (int)pcVar3)));
  ___security_check_cookie_4(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


