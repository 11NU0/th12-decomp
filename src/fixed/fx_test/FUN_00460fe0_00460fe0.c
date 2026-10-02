/* undefined4 __stdcall FUN_00460fe0(void) @ 00460fe0  227 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00460fe0(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  short *psVar5;
  short *extraout_EDX;
  short *extraout_EDX_00;
  short *extraout_EDX_01;
  int unaff_EDI;
  undefined8 uVar6;
  longlong lVar7;
  uint auStack_88 [33];
  
  if ((DAT_004cee78 & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + '\x01';
  }
  psVar5 = (short *)0x0;
  iVar3 = 0;
  uVar4 = unaff_EDI + 0x8856c8;
  do {
    auStack_88[iVar3] = uVar4;
    *(undefined4 *)(uVar4 + 0x1c) = 0;
    iVar3 = iVar3 + 1;
    uVar4 = uVar4 + 0x4b4;
  } while (iVar3 < 0x1e);
  puVar1 = *(uint **)(unaff_EDI + 0x8856b8);
  while (puVar1 != (uint *)0x0) {
    uVar2 = *puVar1;
    puVar1 = (uint *)puVar1[1];
    if ((*(uint *)(uVar2 + 0x47c) & 0x10000000) == 0) {
      if ((*(code **)(uVar2 + 0x488) == (code *)0x0) ||
         (uVar6 = (**(code **)(uVar2 + 0x488))(), psVar5 = (short *)((ulonglong)uVar6 >> 0x20),
         uVar4 = extraout_ECX_00, (int)uVar6 == 0)) {
        lVar7 = FUN_00455630(uVar4,psVar5,uVar2);
        if ((int)lVar7 == 0) {
          uVar4 = auStack_88[*(int *)(uVar2 + 0x20)];
          *(uint *)(uVar4 + 0x1c) = uVar2;
          psVar5 = *(short **)(uVar2 + 0x20);
          auStack_88[(int)psVar5] = uVar2;
          *(undefined4 *)(uVar2 + 0x1c) = 0;
        }
        else {
          FUN_00461450(unaff_EDI);
          uVar4 = extraout_ECX_02;
          psVar5 = extraout_EDX_01;
        }
      }
      else {
        FUN_00461450(unaff_EDI);
        uVar4 = extraout_ECX_01;
        psVar5 = extraout_EDX_00;
      }
    }
    else {
      FUN_00461450(unaff_EDI);
      uVar4 = extraout_ECX;
      psVar5 = extraout_EDX;
    }
    *(int *)(unaff_EDI + 0xb8) = *(int *)(unaff_EDI + 0xb8) + 1;
  }
  if ((DAT_004cee78 & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf1d0);
    DAT_004cf221 = DAT_004cf221 + -1;
  }
  return 1;
}


