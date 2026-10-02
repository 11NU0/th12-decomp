/* undefined __cdecl __except1(uint param_1, int param_2, undefined8 param_3, double param_4, uint param_5) @ 00496850  201 bytes */
#include "th12.h"

/* Library Function - Single Match
    __except1
   
   Library: Visual Studio 2008 Release */

void __cdecl __except1(uint param_1,int param_2,undefined8 param_3,double param_4,uint param_5)

{
  bool bVar1;
  char cVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint local_90 [16];
  uint local_50;
  uint local_14;
  int iVar3;
  
  local_14 = DAT_004ad138 ^ (uint)&stack0xfffffff0;
  bVar1 = __handle_exc(param_1,&param_4,param_5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_50 = local_50 & 0xfffffffe;
    __raise_exc(local_90,&param_5,param_1,param_2,(uint *)&param_3,(uint *)&param_4);
  }
  cVar2 = __errcode((byte)param_1);
  iVar3 = CONCAT31(extraout_var_00,cVar2);
  if ((DAT_004b37a0 == 0) && (iVar3 != 0)) {
    __umatherr(iVar3,param_2);
  }
  else {
    __set_errno_from_matherr(iVar3);
    __ctrlfp(param_5,0xffff);
  }
  ___security_check_cookie_4(local_14 ^ (uint)&stack0xfffffff0);
  return;
}


