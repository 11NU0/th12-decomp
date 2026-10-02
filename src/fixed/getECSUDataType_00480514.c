/* DName * __cdecl getECSUDataType(DName * param_1) @ 00480514  263 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getECSUDataType(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getECSUDataType(DName *param_1)

{
  char cVar1;
  DName *pDVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  DName local_1c [8];
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  pcVar5 = DAT_004b4318;
  uVar4 = 1;
  uVar3 = ~(DAT_004b4328 >> 0xf) & 1;
  if ((uVar3 == 0) || ((DAT_004b4328 & 0x1000) != 0)) {
    uVar4 = 0;
  }
  cVar1 = *DAT_004b4318;
  local_c = 0;
  local_8 = local_8 & 0xffff0000;
  DAT_004b4318 = DAT_004b4318 + 1;
  if (cVar1 == '\0') {
    DAT_004b4318 = pcVar5;
    DName_DName(param_1,"unknown ecsu\'");
    return param_1;
  }
  if (cVar1 == 'T') {
    pcVar5 = "union ";
  }
  else if (cVar1 == 'U') {
    pcVar5 = "struct ";
  }
  else if (cVar1 == 'V') {
    pcVar5 = "class ";
  }
  else {
    if (cVar1 == 'W') {
      pDVar2 = getEnumType((DName *)&local_14);
      pDVar2 = operator_add(local_1c,"enum ",pDVar2);
      local_c = *(undefined4 *)pDVar2;
      local_8 = *(uint *)((int)pDVar2 + 4);
      goto LAB_004805c4;
    }
    if (cVar1 == 'X') {
      pcVar5 = "coclass ";
    }
    else {
      uVar3 = uVar4;
      if (cVar1 != 'Y') goto LAB_004805c4;
      pcVar5 = "cointerface ";
    }
  }
  DName_operator_assign((DName *)&local_c,pcVar5);
  uVar3 = uVar4;
LAB_004805c4:
  local_14 = 0;
  local_10 = local_10 & 0xffff0000;
  if (uVar3 != 0) {
    local_14 = local_c;
    local_10 = local_8;
  }
  getScopedName((DName *)&local_c);
  DName_operator_add_assign((DName *)&local_14,(DName *)&local_c);
  *(undefined4 *)param_1 = local_14;
  *(uint *)((int)param_1 + 4) = local_10;
  return param_1;
}


