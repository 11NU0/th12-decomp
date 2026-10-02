/* undefined4 __stdcall FUN_004610d0(void) @ 004610d0  243 bytes */

#include "th12.h"

undefined4 __stdcall FUN_004610d0(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  short *extraout_EDX;
  short *extraout_EDX_00;
  short *extraout_EDX_01;
  short *psVar4;
  int unaff_EDI;
  longlong lVar5;
  uint auStackY_88 [26];
  undefined4 uStackY_20;
  
  if ((DAT_004cee78 & 0x8000) != 0) {
    uStackY_20 = 0x4610f2;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + '\x01';
  }
  uVar3 = 0;
  *(undefined4 *)(unaff_EDI + 0x88e3fc) = 0;
  *(undefined4 *)(unaff_EDI + 0x88e8b0) = 0;
  puVar1 = *(uint **)(unaff_EDI + 0x8856c0);
  psVar4 = (short *)(unaff_EDI + 0x88e894);
  *(undefined4 *)(unaff_EDI + 0xb8) = 0;
  while (puVar1 != (uint *)0x0) {
    uVar2 = *puVar1;
    puVar1 = (uint *)puVar1[1];
    if ((*(uint *)(uVar2 + 0x47c) & 0x10000000) == 0) {
      if (*(code **)(uVar2 + 0x488) != (code *)0x0) {
        (**(code **)(uVar2 + 0x488))();
        uVar3 = extraout_ECX_00;
        psVar4 = extraout_EDX_00;
      }
      uStackY_20 = 0x461157;
      lVar5 = FUN_00455630(uVar3,psVar4,uVar2);
      if ((int)lVar5 == 0) {
        if ((*(int *)(uVar2 + 0x20) != 0x1e) && (*(int *)(uVar2 + 0x20) != 0x1f)) {
          *(undefined4 *)(uVar2 + 0x20) = 0x1e;
        }
        uVar3 = auStackY_88[*(int *)(uVar2 + 0x20)];
        *(uint *)(uVar3 + 0x1c) = uVar2;
        psVar4 = *(short **)(uVar2 + 0x20);
        auStackY_88[(int)psVar4] = uVar2;
        *(undefined4 *)(uVar2 + 0x1c) = 0;
      }
      else {
        uStackY_20 = 0x461161;
        FUN_00461450(unaff_EDI);
        uVar3 = extraout_ECX_01;
        psVar4 = extraout_EDX_01;
      }
    }
    else {
      uStackY_20 = 0x461141;
      FUN_00461450(unaff_EDI);
      uVar3 = extraout_ECX;
      psVar4 = extraout_EDX;
    }
    *(int *)(unaff_EDI + 0xb8) = *(int *)(unaff_EDI + 0xb8) + 1;
  }
  if ((DAT_004cee78 & 0x8000) != 0) {
    uStackY_20 = 0x4611b2;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + -1;
  }
  return 1;
}


