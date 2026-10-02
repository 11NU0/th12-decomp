/* DName * __cdecl getPtrRefDataType(DName * param_1, DName * param_2, int param_3) @ 0047f89d  222 bytes */

#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getPtrRefDataType(class DName const &,int)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getPtrRefDataType(DName *param_1,DName *param_2,int param_3)

{
  DName *pDVar1;
  char *pcVar2;
  DName local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  if (*DAT_004b4318 == '\0') {
    operator_add(param_1,1,param_2);
    return param_1;
  }
  if ((param_3 != 0) && (*DAT_004b4318 == 'X')) {
    DAT_004b4318 = DAT_004b4318 + 1;
    if (*(int *)param_2 != 0) {
      operator_add(param_1,"void ",param_2);
      return param_1;
    }
    DName_DName(param_1,"void");
    return param_1;
  }
  if (*DAT_004b4318 == 'Y') {
    DAT_004b4318 = DAT_004b4318 + 1;
    getArrayType((undefined4 *)param_1,param_2);
    return param_1;
  }
  getBasicDataType((DName *)&local_c,param_2);
  if ((*(uint *)(param_2 + 4) & 0x4000) == 0) {
    if ((*(uint *)(param_2 + 4) & 0x2000) == 0) goto LAB_0047f959;
    pcVar2 = "cli_pin_ptr<";
  }
  else {
    pcVar2 = "cli_array<";
  }
  pDVar1 = operator_add(local_14,pcVar2,(DName *)&local_c);
  local_c = *(undefined4 *)pDVar1;
  local_8 = *(undefined4 *)(pDVar1 + 4);
LAB_0047f959:
  *(undefined4 *)param_1 = local_c;
  *(undefined4 *)(param_1 + 4) = local_8;
  return param_1;
}


