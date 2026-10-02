/* undefined __thiscall FUN_00454d10(void * this, void * param_1, int param_2) @ 00454d10  223 bytes */

#include "th12.h"

void __thiscall FUN_00454d10(void *this,void *param_1,int param_2)

{
  undefined2 uVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  
  if ((*(int *)(*(int *)((int)this + 0x11c) + param_2 * 4) != 0) &&
     (*(int *)((int)this + 0x124) == 0)) {
    FUN_00402520();
    *(short *)((int)param_1 + 0x3ea) = (short)param_2;
                    /* WARNING: Load size is inaccurate */
    uVar1 = *this;
    *(uint *)((int)param_1 + 0x47c) = *(uint *)((int)param_1 + 0x47c) & 0xfffff3ff;
    *(undefined2 *)((int)param_1 + 0x3e6) = uVar1;
    *(void **)((int)param_1 + 0x3f8) = this;
    psVar2 = *(short **)((int)this + 0x11c);
    uVar3 = *(undefined4 *)(psVar2 + param_2 * 2);
    *(undefined4 *)((int)param_1 + 0x3ec) = uVar3;
    *(undefined4 *)((int)param_1 + 0x3f0) = uVar3;
    if ((*(uint *)((int)param_1 + 0x78) & 1) == 0) {
      *(undefined4 *)((int)param_1 + 0x70) = 0;
      *(undefined4 *)((int)param_1 + 0x6c) = 0;
      *(undefined4 *)((int)param_1 + 0x68) = 0xfff0bdc1;
      *(undefined4 **)((int)param_1 + 0x74) = &DAT_004b2ed0;
      *(uint *)((int)param_1 + 0x78) = *(uint *)((int)param_1 + 0x78) | 1;
    }
    *(undefined4 *)((int)param_1 + 0x70) = 0;
    *(undefined4 *)((int)param_1 + 0x6c) = 0;
    *(undefined4 *)((int)param_1 + 0x68) = 0xffffffff;
    *(uint *)((int)param_1 + 0x47c) = *(uint *)((int)param_1 + 0x47c) & 0xfffffffe;
    FUN_00455630(CONCAT22(extraout_var,uVar1),psVar2,(uint)param_1);
    *(int *)(DAT_004ce8cc + 0xa0) = *(int *)(DAT_004ce8cc + 0xa0) + 1;
    return;
  }
  _memset(param_1,0,0x4b4);
  return;
}


