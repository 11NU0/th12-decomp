/* DName * __cdecl getEnumType(DName * param_1) @ 0047ee08  180 bytes */

#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getEnumType(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getEnumType(DName *param_1)

{
  char cVar1;
  DName *pDVar2;
  char *pcVar3;
  DNameStatus DVar4;
  DName local_14 [8];
  undefined4 local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = local_8 & 0xffff0000;
  if (*DAT_004b4318 == '\0') {
    DVar4 = 1;
LAB_0047eeaf:
    DName_DName(param_1,DVar4);
    return param_1;
  }
  switch(*DAT_004b4318) {
  case '0':
  case '1':
    pcVar3 = "char ";
    break;
  case '2':
  case '3':
    pcVar3 = "short ";
    break;
  case '4':
    goto switchD_0047ee35_caseD_34;
  case '5':
    pcVar3 = "int ";
    break;
  case '6':
  case '7':
    pcVar3 = "long ";
    break;
  default:
    DVar4 = 2;
    goto LAB_0047eeaf;
  }
  DName_operator_assign((DName *)&local_c,pcVar3);
switchD_0047ee35_caseD_34:
  cVar1 = *DAT_004b4318;
  DAT_004b4318 = DAT_004b4318 + 1;
  if ((((cVar1 == '1') || (cVar1 == '3')) || (cVar1 == '5')) || (cVar1 == '7')) {
    pDVar2 = operator_add(local_14,"unsigned ",(DName *)&local_c);
    local_c = *(undefined4 *)pDVar2;
    local_8 = *(uint *)(pDVar2 + 4);
  }
  *(undefined4 *)param_1 = local_c;
  *(uint *)(param_1 + 4) = local_8;
  return param_1;
}


