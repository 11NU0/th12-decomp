/* undefined4 __stdcall FUN_0045d710(float param_1, float param_2, float param_3, float param_4, float param_5, int param_6, float param_7) @ 0045d710  372 bytes */
#include "th12.h"

undefined4
FUN_0045d710(float param_1,float param_2,float param_3,float param_4,float param_5,int param_6,
            float param_7)

{
  float *pfVar1;
  float fVar2;
  float *this;
  float10 fVar3;
  int local_4;
  
  fVar2 = param_1;
  this = *(float **)((int)param_1 + 0x8856b0);
  pfVar1 = (float *)((int)param_1 + 0x8856b0);
  if (this + param_6 * 5 + 5 < pfVar1) {
    local_4 = param_6 + 1;
    param_1 = param_5;
    if (0 < local_4) {
      do {
        FUN_0045d890(this,param_1,param_4);
        this[4] = param_7;
        *this = param_2 + *this;
        this[1] = this[1] + param_3;
        this[2] = 0.0;
        this[3] = 1.0;
        fVar3 = FUN_00464640(param_1,6.2831855 / (float)param_6);
        param_1 = (float)fVar3;
        local_4 = local_4 + -1;
        this = this + 5;
      } while (local_4 != 0);
    }
    if ((&DAT_004b5647)[DAT_004ce8cc] != '\0') {
      (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,4,3);
      (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,1,3);
      (&DAT_004b5647)[DAT_004ce8cc] = 0;
    }
    if ((&DAT_004b5642)[(int)fVar2] != '\x01') {
      (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,6,0);
      (**(code **)(*DAT_004ce8f0 + 0x10c))(DAT_004ce8f0,0,3,0);
      (&DAT_004b5642)[(int)fVar2] = 1;
    }
    (**(code **)(*DAT_004ce8f0 + 0x164))(DAT_004ce8f0,0x44);
    (**(code **)(*DAT_004ce8f0 + 0x14c))(DAT_004ce8f0,3,param_4,*pfVar1,0x14);
    *pfVar1 = (float)((int)*pfVar1 + param_6 * 0x14 + 0x14);
    *(int *)((int)fVar2 + 0xac) = *(int *)((int)fVar2 + 0xac) + 1;
  }
  return 0;
}


