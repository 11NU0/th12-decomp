/* char __cdecl ___BuildCatchObjectHelper(int param_1, int * param_2, uint * param_3, byte * param_4) @ 00492848  371 bytes */

#include "th12.h"

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObjectHelper
   
   Library: Visual Studio 2008 Release */

char __cdecl ___BuildCatchObjectHelper(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  void *pvVar3;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  size_t _Size;
  
  if (((param_3[1] == 0) || (*(char *)(param_3[1] + 8) == '\0')) ||
     ((param_3[2] == 0 && ((*param_3 & 0x80000000) == 0)))) {
    return '\0';
  }
  if (-1 < (int)*param_3) {
    param_2 = (int *)(param_3[2] + 0xc + (int)param_2);
  }
  if ((*param_3 & 8) == 0) {
    pvVar3 = *(void **)(param_1 + 0x18);
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        iVar2 = _ValidateRead(pvVar3,1);
        if ((iVar2 != 0) &&
           (bVar1 = FID_conflict__ValidateExecute((int)param_2),
           CONCAT31(extraout_var_01,bVar1) != 0)) {
          _Size = *(size_t *)(param_4 + 0x14);
          pvVar3 = (void *)___AdjustPointer(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          _memmove(param_2,pvVar3,_Size);
          return '\0';
        }
      }
      else {
        iVar2 = _ValidateRead(pvVar3,1);
        if (((iVar2 != 0) &&
            (bVar1 = FID_conflict__ValidateExecute((int)param_2),
            CONCAT31(extraout_var_02,bVar1) != 0)) &&
           (bVar1 = FID_conflict__ValidateExecute(*(int *)(param_4 + 0x18)),
           CONCAT31(extraout_var_03,bVar1) != 0)) {
          return ((*param_4 & 4) != 0) + '\x01';
        }
      }
    }
    else {
      iVar2 = _ValidateRead(pvVar3,1);
      if ((iVar2 != 0) &&
         (bVar1 = FID_conflict__ValidateExecute((int)param_2), CONCAT31(extraout_var_00,bVar1) != 0)
         ) {
        _memmove(param_2,*(void **)(param_1 + 0x18),*(size_t *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          return '\0';
        }
        iVar2 = *param_2;
        if (iVar2 == 0) {
          return '\0';
        }
        goto LAB_004928cd;
      }
    }
  }
  else {
    iVar2 = _ValidateRead(*(void **)(param_1 + 0x18),1);
    if ((iVar2 != 0) &&
       (bVar1 = FID_conflict__ValidateExecute((int)param_2), CONCAT31(extraout_var,bVar1) != 0)) {
      iVar2 = *(int *)(param_1 + 0x18);
      *param_2 = iVar2;
LAB_004928cd:
      iVar2 = ___AdjustPointer(iVar2,(int *)(param_4 + 8));
      *param_2 = iVar2;
      return '\0';
    }
  }
  _inconsistency();
  return '\0';
}


