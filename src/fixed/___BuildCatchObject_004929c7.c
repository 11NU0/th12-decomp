/* undefined __cdecl ___BuildCatchObject(int param_1, int * param_2, uint * param_3, byte * param_4) @ 004929c7  133 bytes */
#include "th12.h"

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObject
   
   Library: Visual Studio 2008 Release */

void __cdecl ___BuildCatchObject(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  char cVar1;
  undefined3 extraout_var;
  int *piVar2;
  
  piVar2 = param_2;
  if ((*param_3 & 0x80000000) == 0) {
    piVar2 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  cVar1 = ___BuildCatchObjectHelper(param_1,param_2,param_3,param_4);
  if (CONCAT31(extraout_var,cVar1) == 1) {
    ___AdjustPointer(*(int *)((int)param_1 + 0x18),(int *)((int)param_4 + 8));
    FID_conflict__CallMemberFunction1(piVar2,*(undefined **)((int)param_4 + 0x18));
  }
  else if (CONCAT31(extraout_var,cVar1) == 2) {
    ___AdjustPointer(*(int *)((int)param_1 + 0x18),(int *)((int)param_4 + 8));
    FID_conflict__CallMemberFunction1(piVar2,*(undefined **)((int)param_4 + 0x18));
  }
  return;
}


