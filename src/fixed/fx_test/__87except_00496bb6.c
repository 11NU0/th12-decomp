/* undefined __cdecl __87except(int param_1, int * param_2, ushort * param_3) @ 00496bb6  319 bytes */

#include "th12.h"

/* Library Function - Single Match
    __87except
   
   Library: Visual Studio 2008 Release */

void __cdecl __87except(int param_1,int *param_2,ushort *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint local_98;
  uint local_94;
  uint local_90 [12];
  undefined8 local_60;
  uint local_50;
  uint local_14;
  
  local_14 = DAT_004ad138 ^ (uint)&stack0xfffffff0;
  local_98 = (uint)*param_3;
  iVar2 = *param_2;
  if (iVar2 == 1) {
LAB_00496c45:
    local_94 = 8;
LAB_00496c4f:
    bVar1 = __handle_exc(local_94,(double *)(param_2 + 6),local_98);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
        local_60 = *(undefined8 *)(param_2 + 4);
        local_50 = local_50 & 0xffffffe3 | 3;
      }
      else {
        local_50 = local_50 & 0xfffffffe;
      }
      __raise_exc(local_90,&local_98,local_94,param_1,(uint *)(param_2 + 2),(uint *)(param_2 + 6));
    }
  }
  else {
    if (iVar2 == 2) {
      local_94 = 4;
      goto LAB_00496c4f;
    }
    if (iVar2 == 3) {
      local_94 = 0x11;
      goto LAB_00496c4f;
    }
    if (iVar2 == 4) {
      local_94 = 0x12;
      goto LAB_00496c4f;
    }
    if (iVar2 == 5) goto LAB_00496c45;
    if (iVar2 == 7) {
      *param_2 = 1;
    }
    else if (iVar2 == 8) {
      local_94 = 0x10;
      goto LAB_00496c4f;
    }
  }
  __ctrlfp(local_98,0xffff);
  if ((*param_2 != 8) && (DAT_004b37a0 == 0)) {
    iVar2 = FUN_0049616c();
    if (iVar2 != 0) goto LAB_00496ce2;
  }
  __set_errno_from_matherr(*param_2);
LAB_00496ce2:
  ___security_check_cookie_4(local_14 ^ (uint)&stack0xfffffff0);
  return;
}


