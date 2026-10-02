/* ulonglong __thiscall FUN_00468f70(void * this, int param_1) @ 00468f70  100 bytes */

#include "th12.h"

ulonglong __thiscall FUN_00468f70(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (param_1 < 0) {
    if (param_1 != -1) {
                    /* WARNING: Could not recover jumptable at 0x00468fd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(**(int **)((int)this + 0x1014) + 4))();
      return uVar4;
    }
    iVar1 = *(int *)((int)this + 0x1008);
    iVar3 = iVar1 + -4;
    uVar2 = 0xffffffff;
    if (-1 < iVar3) {
      *(int *)((int)this + 0x1008) = iVar3;
      uVar2 = *(undefined4 *)(iVar1 + 4 + (int)this);
      iVar3 = iVar1 + -8;
      *(int *)((int)this + 0x1008) = iVar3;
      if (*(char *)(iVar1 + (int)this) == 'f') {
        uVar4 = FUN_004931e0(this,iVar3);
        return uVar4;
      }
    }
  }
  else {
    iVar3 = (int)this + *(int *)((int)this + 0x100c) + 8;
    uVar2 = *(undefined4 *)(iVar3 + param_1);
  }
  return CONCAT44(iVar3,uVar2);
}


