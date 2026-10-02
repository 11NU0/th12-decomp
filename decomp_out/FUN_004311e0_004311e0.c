/* undefined4 __stdcall FUN_004311e0(void) @ 004311e0  636 bytes */
#include "th12.h"

undefined4 FUN_004311e0(void)

{
  int iVar1;
  int in_EAX;
  uint *puVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  
  if (*(int *)(in_EAX + 0x554) == *(int *)(in_EAX + 0x558)) {
    return 1;
  }
  if ((*(uint *)(in_EAX + 0x590) & 0x8000) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(in_EAX + 0x888));
    *(char *)(in_EAX + 0x935) = *(char *)(in_EAX + 0x935) + '\x01';
  }
  *(undefined4 *)(in_EAX + 0x55c) = *(undefined4 *)(in_EAX + 0x554);
  FUN_004319e0();
  *(undefined4 *)(in_EAX + 0x9c0) = 0xff000000;
  uVar3 = extraout_ECX;
  switch(*(undefined4 *)(in_EAX + 0x558)) {
  case 0:
    *(undefined4 *)(in_EAX + 0x558) = 1;
    puVar2 = FUN_0042ede0();
    *(uint **)(in_EAX + 0x9a8) = puVar2;
    if (puVar2 == (uint *)0x0) {
      *(undefined4 *)(in_EAX + 0x558) = 3;
      uVar3 = extraout_ECX_00;
      goto switchD_00431251_caseD_3;
    }
    break;
  case 3:
switchD_00431251_caseD_3:
    FUN_0042f830(uVar3);
    FUN_00431800();
    return 4;
  case 4:
    switch(*(undefined4 *)(in_EAX + 0x554)) {
    case 1:
    case 2:
      break;
    default:
      goto switchD_00431251_caseD_1;
    case 7:
      FUN_00422770();
      break;
    case 0xf:
      FUN_004110e0(extraout_ECX);
    }
    goto switchD_004312a0_caseD_1;
  case 7:
    if (*(int *)(in_EAX + 0x554) == 4) {
      FUN_0043f720();
    }
    *(undefined4 *)(in_EAX + 0x564) = 1;
    FUN_00422700();
    break;
  case 10:
    FUN_00422770();
    *(undefined4 *)(in_EAX + 0x564) = 1;
    *(undefined4 *)(in_EAX + 0x558) = 7;
    DAT_004b0cb0 = DAT_004b0cb4;
    DAT_004b452c = &DAT_004aebf0 + DAT_004b0cb4 * 0x40;
    FUN_00422700();
    break;
  case 0xb:
    FUN_00422770();
    *(undefined4 *)(in_EAX + 0x564) = 1;
    *(undefined4 *)(in_EAX + 0x558) = 7;
    DAT_004b0cb0 = DAT_004b0cb4;
    DAT_004b452c = &DAT_004aebf0 + DAT_004b0cb4 * 0x40;
    FUN_00422700();
    break;
  case 0xc:
    *(undefined4 *)(in_EAX + 0x564) = 0;
    if (*(int *)(in_EAX + 0x554) == 7) {
      FUN_00422770();
    }
    *(undefined4 *)(in_EAX + 0x558) = 7;
    FUN_00422700();
    break;
  case 0xd:
    if (*(int *)(in_EAX + 0x554) == 4) {
      FUN_0043f720();
    }
    *(undefined4 *)(in_EAX + 0x558) = 7;
    *(undefined4 *)(in_EAX + 0x564) = 1;
    FUN_00422700();
    break;
  case 0xe:
    FUN_00422770();
    *(undefined4 *)(in_EAX + 0x564) = 1;
    *(undefined4 *)(in_EAX + 0x558) = 7;
    FUN_00422700();
    break;
  case 0xf:
    if (*(int *)(in_EAX + 0x554) == 7) {
      FUN_00422770();
    }
    FUN_00411060();
    break;
  case 0x10:
    iVar1 = *(int *)(in_EAX + 0x554);
    if (iVar1 != 2) {
      if (iVar1 == 7) {
        FUN_00422770();
      }
      else {
        if (iVar1 != 0xf) break;
        FUN_004110e0(extraout_ECX);
      }
    }
    *(undefined4 *)(in_EAX + 0x558) = 4;
    DAT_004ce8b0 = 3;
switchD_004312a0_caseD_1:
    FUN_0043f6b0();
    break;
  case 0x11:
    FUN_0042f830(extraout_ECX);
    FUN_00431800();
    return 5;
  }
switchD_00431251_caseD_1:
  *(undefined4 *)(in_EAX + 0x554) = *(undefined4 *)(in_EAX + 0x558);
  if ((*(uint *)(in_EAX + 0x590) & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_EAX + 0x888));
    *(char *)(in_EAX + 0x935) = *(char *)(in_EAX + 0x935) + -1;
  }
  return 1;
}


