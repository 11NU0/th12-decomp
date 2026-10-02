/* int __thiscall FUN_0042bd90(void * this, int param_1, int param_2) @ 0042bd90  741 bytes */
#include "th12.h"

int __thiscall FUN_0042bd90(void *this,int param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar6;
  void *extraout_EDX;
  void *pvVar7;
  float local_48;
  int local_44;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if ((param_2 != 0) && (*(int *)((int)this + 0x44c) != 0)) {
    return 0;
  }
  local_48 = 8.0;
  local_44 = 0;
  FUN_0042e880(&local_14,*(float *)((int)this + 0x68),8.0);
  local_20 = local_14 + *(float *)((int)extraout_EDX + 0x50);
  local_1c = local_10 + *(float *)((int)extraout_EDX + 0x54);
  local_18 = *(float *)((int)extraout_EDX + 0x58) + 0.0;
  local_14 = local_14 + local_14;
  local_10 = local_10 + local_10;
  local_c = 0.0;
  pvVar7 = extraout_EDX;
  if (16.0 < *(float *)((int)extraout_EDX + 0x6c) != NAN(*(float *)((int)extraout_EDX + 0x6c))) {
    do {
      local_44 = local_44 + 1;
      if ((((local_20 + 16.0 < -192.0 == (local_20 + 16.0 == -192.0)) && (local_20 - 16.0 < 192.0))
          && (fVar3 = local_1c + 16.0, fVar3 < 0.0 == (fVar3 == 0.0))) && (local_1c - 16.0 < 448.0))
      {
        sVar2 = *(short *)((int)pvVar7 + 0x4a6);
        pvVar7 = *(void **)(DAT_004b44f4 + 0x488);
        if ((DAT_004cee78 & 0x8000) != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
          DAT_004cf221 = DAT_004cf221 + '\x01';
        }
        piVar1 = (int *)((int)pvVar7 + 0x130);
        *piVar1 = *piVar1 + 1;
        pvVar5 = FUN_004621c0();
        fVar4 = local_20 + 32.0;
        *(uint *)((int)pvVar5 + 0x480) = *(uint *)((int)pvVar5 + 0x480) | 1;
        *(undefined4 *)((int)pvVar5 + 0x20) = 0x17;
        *(float *)((int)pvVar5 + 0x430) = fVar4 + 192.0;
        *(float *)((int)pvVar5 + 0x434) = fVar3;
        *(float *)((int)pvVar5 + 0x438) = local_18;
        FUN_00454d10(pvVar7,pvVar5,sVar2 * 2 + 4);
        FUN_00461250();
        uVar6 = extraout_ECX;
        if ((DAT_004cee78 & 0x8000) != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
          DAT_004cf221 = DAT_004cf221 + -1;
          uVar6 = extraout_ECX_00;
        }
        pvVar7 = this;
        if (((param_1 != 0) && (-192.0 < fVar4)) &&
           ((local_20 - 32.0 < 192.0 &&
            ((local_1c + 32.0 < 0.0 == (local_1c + 32.0 == 0.0) && (local_1c - 32.0 < 448.0)))))) {
          FUN_004273f0(uVar6,&local_20,9,&local_20,-1.5707964,0.6);
        }
      }
      local_20 = local_20 + local_14;
      local_1c = local_1c + local_10;
      local_18 = local_18 + local_c;
      local_48 = local_48 + 16.0;
    } while (local_48 + 8.0 < *(float *)((int)pvVar7 + 0x6c));
  }
  *(undefined4 *)((int)pvVar7 + 0xc) = 1;
  return local_44;
}


