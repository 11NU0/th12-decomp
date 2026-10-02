/* DName * __cdecl getArgumentList(DName * param_1) @ 0047eaac  258 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getArgumentList(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getArgumentList(DName *param_1)

{
  DName DVar1;
  char *pcVar2;
  uint uVar3;
  DName *pDVar4;
  DName local_20 [8];
  DName local_18 [8];
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  param_1[4] = (DName)0x0;
  *(uint *)((int)param_1 + 4) = *(uint *)((int)param_1 + 4) & 0xffff00ff;
  local_8 = 1;
  *(undefined4 *)param_1 = 0;
  DVar1 = param_1[4];
  while( true ) {
    if (DVar1 != (DName)0x0) {
      return param_1;
    }
    if (*DAT_004b4318 == '@') {
      return param_1;
    }
    if (*DAT_004b4318 == 'Z') {
      return param_1;
    }
    if (local_8 == 0) {
      DName_operator_add_assign(param_1,',');
    }
    else {
      local_8 = 0;
    }
    pcVar2 = DAT_004b4318;
    if (*DAT_004b4318 == '\0') break;
    uVar3 = (int)*DAT_004b4318 - 0x30;
    if (uVar3 < 10) {
      DAT_004b4318 = DAT_004b4318 + 1;
      pDVar4 = Replicator_operator_index(DAT_004b430c,local_20,uVar3);
      DName_operator_add_assign(param_1,pDVar4);
    }
    else {
      local_c = local_c & 0xffff0000;
      local_10 = 0;
      getPrimaryDataType(local_18,(DName *)&local_10);
      if ((1 < (int)DAT_004b4318 - (int)pcVar2) && (*(int *)DAT_004b430c != 9)) {
        Replicator_operator_add_assign(DAT_004b430c,local_18);
      }
      DName_operator_add_assign(param_1,local_18);
      if (DAT_004b4318 == pcVar2) {
        DName_operator_assign(param_1,2);
      }
    }
    DVar1 = param_1[4];
  }
  DName_operator_add_assign(param_1,1);
  return param_1;
}


