/* DName * __cdecl getCallingConvention(DName * param_1) @ 0047e8cb  170 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getCallingConvention(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getCallingConvention(DName *param_1)

{
  uint uVar1;
  char *pcVar2;
  Tokens TVar3;
  DNameStatus DVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*DAT_004b4318 == '\0') {
    DVar4 = 1;
  }
  else {
    uVar1 = (int)*DAT_004b4318 - 0x41;
    DAT_004b4318 = DAT_004b4318 + 1;
    if (uVar1 < 0xd) {
      local_c = 0;
      local_8 = 0;
      if ((~(DAT_004b4328 >> 1) & 1) != 0) {
        uVar1 = uVar1 & 0xfffffffe;
        if (uVar1 == 0) {
          TVar3 = 1;
        }
        else if (uVar1 == 2) {
          TVar3 = 2;
        }
        else if (uVar1 == 4) {
          TVar3 = 4;
        }
        else if (uVar1 == 6) {
          TVar3 = 3;
        }
        else if (uVar1 == 8) {
          TVar3 = 5;
        }
        else {
          if (uVar1 != 0xc) goto LAB_0047e952;
          TVar3 = 6;
        }
        pcVar2 = UScore(TVar3);
        DName_operator_assign((DName *)&local_c,pcVar2);
      }
LAB_0047e952:
      *(undefined4 *)param_1 = local_c;
      *(undefined4 *)((int)param_1 + 4) = local_8;
      return param_1;
    }
    DVar4 = 2;
  }
  DName_DName(param_1,DVar4);
  return param_1;
}


