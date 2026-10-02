/* undefined4 __thiscall FUN_0042e3e0(void * this, int param_1, int param_2) @ 0042e3e0  460 bytes */

#include "th12.h"

undefined4 __thiscall FUN_0042e3e0(void *this,int param_1,int param_2)

{
  int *piVar1;
  short sVar2;
  void *this_00;
  void *pvVar3;
  float *pfVar4;
  float local_c;
  float local_8;
  float local_4;
  
  if ((param_2 == 0) || (*(int *)((int)this + 0x44c) == 0)) {
    pfVar4 = *(float **)((int)this + 0xf9c);
    param_2 = 0;
    if (0 < *(int *)((int)this + 0x470)) {
      do {
        local_c = *pfVar4;
        local_8 = pfVar4[1];
        local_4 = pfVar4[2];
        if (param_2 % 3 == 0) {
          if ((((param_1 != 0) && (local_c + 32.0 < -192.0 == (local_c + 32.0 == -192.0))) &&
              (local_c - 32.0 < 192.0)) &&
             ((local_8 + 32.0 < 0.0 == (local_8 + 32.0 == 0.0) && (local_8 - 32.0 < 448.0)))) {
            FUN_004273f0(&local_c,(param_2 / 3) * 3,9,&local_c,-1.5707964,0.6);
          }
          sVar2 = *(short *)((int)this + 0x46e);
          this_00 = *(void **)(DAT_004b44f4 + 0x488);
          if ((DAT_004cee78 & 0x8000) != 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
            DAT_004cf221 = DAT_004cf221 + '\x01';
          }
          piVar1 = (int *)((int)this_00 + 0x130);
          *piVar1 = *piVar1 + 1;
          pvVar3 = FUN_004621c0();
          *(uint *)((int)pvVar3 + 0x480) = *(uint *)((int)pvVar3 + 0x480) | 1;
          *(undefined4 *)((int)pvVar3 + 0x20) = 0x17;
          *(float *)((int)pvVar3 + 0x430) = local_c + 32.0 + 192.0;
          *(float *)((int)pvVar3 + 0x434) = local_8 + 16.0;
          *(float *)((int)pvVar3 + 0x438) = local_4;
          FUN_00454d10(this_00,pvVar3,sVar2 * 2 + 4);
          FUN_00461250();
          if ((DAT_004cee78 & 0x8000) != 0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
            DAT_004cf221 = DAT_004cf221 + -1;
          }
        }
        param_2 = param_2 + 1;
        pfVar4 = pfVar4 + 5;
      } while (param_2 < *(int *)((int)this + 0x470));
    }
    *(undefined4 *)((int)this + 0xc) = 1;
  }
  return 0;
}


