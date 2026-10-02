/* DName * __cdecl getBasedType(DName * param_1) @ 00480665  152 bytes */

#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getBasedType(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getBasedType(DName *param_1)

{
  char cVar1;
  char *pcVar2;
  DName *pDVar3;
  DName local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  pcVar2 = UScore(0);
  DName_DName((DName *)&local_c,pcVar2);
  if (*DAT_004b4318 == '\0') {
    DName_operator_add_assign((DName *)&local_c,1);
  }
  else {
    cVar1 = *DAT_004b4318;
    DAT_004b4318 = DAT_004b4318 + 1;
    if (cVar1 == '0') {
      DName_operator_add_assign((DName *)&local_c,"void");
    }
    else if (cVar1 == '2') {
      pDVar3 = getScopedName(local_14);
      DName_operator_add_assign((DName *)&local_c,pDVar3);
    }
    else if (cVar1 == '5') {
      DName_DName(param_1,2);
      return param_1;
    }
  }
  DName_operator_add_assign((DName *)&local_c,") ");
  *(undefined4 *)param_1 = local_c;
  *(undefined4 *)(param_1 + 4) = local_8;
  return param_1;
}


