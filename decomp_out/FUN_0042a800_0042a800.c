/* int __thiscall FUN_0042a800(void * this, int param_1, float param_2) @ 0042a800  601 bytes */
#include "th12.h"

int __thiscall FUN_0042a800(void *this,int param_1,float param_2)

{
  int *piVar1;
  short sVar2;
  void *this_00;
  float fVar3;
  void *pvVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  int local_2c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((param_2 != 0.0) && (*(int *)((int)this + 0x44c) != 0)) {
    return 0;
  }
  param_2 = 8.0;
  local_2c = 0;
  FUN_0042e880(&local_c,*(float *)((int)this + 0x68),8.0);
  local_18 = local_c + *(float *)((int)this + 0x50);
  local_14 = local_8 + *(float *)((int)this + 0x54);
  local_10 = *(float *)((int)this + 0x58) + 0.0;
  local_c = local_c + local_c;
  local_8 = local_8 + local_8;
  local_4 = 0.0;
  if (16.0 < *(float *)((int)this + 0x6c)) {
    do {
      sVar2 = *(short *)((int)this + 0x47a);
      this_00 = *(void **)(DAT_004b44f4 + 0x488);
      local_2c = local_2c + 1;
      if ((DAT_004cee78 & 0x8000) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
        DAT_004cf221 = DAT_004cf221 + '\x01';
      }
      piVar1 = (int *)((int)this_00 + 0x130);
      *piVar1 = *piVar1 + 1;
      pvVar4 = FUN_004621c0();
      fVar3 = local_18 + 32.0;
      *(uint *)((int)pvVar4 + 0x480) = *(uint *)((int)pvVar4 + 0x480) | 1;
      *(undefined4 *)((int)pvVar4 + 0x20) = 0x17;
      *(float *)((int)pvVar4 + 0x430) = fVar3 + 192.0;
      *(float *)((int)pvVar4 + 0x434) = local_14 + 16.0;
      *(float *)((int)pvVar4 + 0x438) = local_10;
      FUN_00454d10(this_00,pvVar4,sVar2 * 2 + 4);
      FUN_00461250();
      uVar5 = extraout_EDX;
      if ((DAT_004cee78 & 0x8000) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
        DAT_004cf221 = DAT_004cf221 + -1;
        uVar5 = extraout_EDX_00;
      }
      if ((((param_1 != 0) && (-192.0 < fVar3)) && (local_18 - 32.0 < 192.0)) &&
         ((local_14 + 32.0 < 0.0 == (local_14 + 32.0 == 0.0) && (local_14 - 32.0 < 448.0)))) {
        FUN_004273f0(&local_18,uVar5,9,&local_18,-1.5707964,0.6);
      }
      local_18 = local_18 + local_c;
      local_14 = local_14 + local_8;
      local_10 = local_10 + local_4;
      param_2 = param_2 + 16.0;
    } while (param_2 + 8.0 < *(float *)((int)this + 0x6c));
  }
  *(undefined4 *)((int)this + 0xc) = 1;
  return local_2c;
}


