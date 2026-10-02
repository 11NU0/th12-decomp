/* undefined4 * __cdecl getArrayType(undefined4 * param_1, DName * param_2) @ 0047f1b4  378 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getArrayType(class DName const &)
   
   Library: Visual Studio 2008 Release */

undefined4 * __cdecl UnDecorator_getArrayType(undefined4 *param_1,DName *param_2)

{
  int iVar1;
  DName *pDVar2;
  DName *pDVar3;
  DName *pDVar4;
  DName *pDVar5;
  bool bVar6;
  char *pcVar7;
  char cVar8;
  DNameStatus DVar9;
  DName local_34 [8];
  DName local_2c [8];
  DName local_24 [8];
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  DName local_c [4];
  int local_8;
  
  if (*DAT_004b4318 == '\0') {
    cVar8 = ']';
    if (*(int *)param_2 != 0) {
      pDVar5 = local_34;
      DVar9 = 1;
      pDVar4 = local_2c;
      pcVar7 = ")[";
      pDVar3 = local_24;
      pDVar2 = DName_operator_add((DName *)&local_1c,'(',param_2);
      pDVar3 = DName_operator_add(pDVar2,pDVar3,pcVar7);
      goto LAB_0047f30f;
    }
    pDVar5 = local_34;
    pDVar4 = local_2c;
    pDVar3 = local_24;
  }
  else {
    local_8 = getNumberOfDimensions();
    if (local_8 < 0) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      local_10 = local_10 & 0xffff0000;
      local_14 = 0;
      if ((*(uint *)((int)param_2 + 4) & 0x800) != 0) {
        DName_operator_add_assign((DName *)&local_14,"[]");
      }
      while ((((char)local_10 < '\x02' &&
              (iVar1 = local_8 + -1, bVar6 = local_8 != 0, local_8 = iVar1, bVar6)) &&
             (*DAT_004b4318 != '\0'))) {
        cVar8 = ']';
        pDVar5 = local_24;
        pDVar4 = getDimension(local_2c,'\0');
        pDVar4 = DName_operator_add(local_34,'[',pDVar4);
        pDVar5 = DName_operator_add(pDVar4,pDVar5,cVar8);
        DName_operator_add_assign((DName *)&local_14,pDVar5);
      }
      if (*(int *)param_2 != 0) {
        pDVar5 = (DName *)&local_14;
        pDVar4 = local_34;
        if ((*(uint *)((int)param_2 + 4) & 0x800) == 0) {
          cVar8 = ')';
          pDVar3 = local_2c;
          pDVar2 = DName_operator_add(local_24,'(',param_2);
          param_2 = DName_operator_add(pDVar2,pDVar3,cVar8);
        }
        pDVar5 = DName_operator_add(param_2,pDVar4,pDVar5);
        local_14 = *(undefined4 *)pDVar5;
        local_10 = *(uint *)((int)pDVar5 + 4);
      }
      getPrimaryDataType((DName *)&local_1c,(DName *)&local_14);
      *param_1 = local_1c;
      param_1[1] = local_18 | 0x800;
      return param_1;
    }
    pDVar5 = (DName *)&local_1c;
    pDVar4 = (DName *)&local_14;
    pDVar3 = local_c;
  }
  cVar8 = ']';
  DVar9 = 1;
  pDVar3 = (DName *)DName_DName(pDVar3,'[');
LAB_0047f30f:
  pDVar4 = DName_operator_add(pDVar3,pDVar4,DVar9);
  pDVar5 = DName_operator_add(pDVar4,pDVar5,cVar8);
  getBasicDataType((DName *)param_1,pDVar5);
  return param_1;
}


