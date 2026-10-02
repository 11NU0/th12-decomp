/* DName * __cdecl getArgumentTypes(DName * param_1) @ 0047eedc  220 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getArgumentTypes(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getArgumentTypes(DName *param_1)

{
  char cVar1;
  char *pcVar2;
  DName *pDVar3;
  DName local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  if (*DAT_004b4318 == 'X') {
    pcVar2 = "void";
  }
  else {
    if (*DAT_004b4318 != 'Z') {
      getArgumentList((DName *)&local_c);
      if (((char)local_8 == '\0') && (cVar1 = *DAT_004b4318, cVar1 != '\0')) {
        if (cVar1 != '@') {
          if (cVar1 != 'Z') {
            DName_DName(param_1,2);
            return param_1;
          }
          DAT_004b4318 = DAT_004b4318 + 1;
          pcVar2 = ",...";
          if ((~(DAT_004b4328 >> 0x12) & 1) == 0) {
            pcVar2 = ",<ellipsis>";
          }
          pDVar3 = DName_operator_add((DName *)&local_c,local_14,pcVar2);
          *(undefined4 *)param_1 = *(undefined4 *)pDVar3;
          *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)pDVar3 + 4);
          return param_1;
        }
        DAT_004b4318 = DAT_004b4318 + 1;
      }
      *(undefined4 *)param_1 = local_c;
      *(undefined4 *)((int)param_1 + 4) = local_8;
      return param_1;
    }
    pcVar2 = "...";
    if ((~(DAT_004b4328 >> 0x12) & 1) == 0) {
      pcVar2 = "<ellipsis>";
    }
  }
  DAT_004b4318 = DAT_004b4318 + 1;
  DName_DName(param_1,pcVar2);
  return param_1;
}


