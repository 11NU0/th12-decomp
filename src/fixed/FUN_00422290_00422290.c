/* undefined __stdcall FUN_00422290(int param_1) @ 00422290  1135 bytes */
#include "th12.h"

void __stdcall FUN_00422290(int param_1)

{
  uint *puVar1;
  void *pvVar2;
  int iVar3;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  void *extraout_ECX_04;
  void *extraout_ECX_05;
  void *extraout_ECX_06;
  void *extraout_ECX_07;
  void *extraout_ECX_08;
  void *extraout_ECX_09;
  void *extraout_ECX_10;
  void *extraout_ECX_11;
  void *extraout_ECX_12;
  void *extraout_ECX_13;
  void *extraout_ECX_14;
  void *extraout_ECX_15;
  void *pvVar4;
  void *extraout_ECX_16;
  void *extraout_ECX_17;
  void *extraout_ECX_18;
  void *extraout_ECX_19;
  undefined4 uVar5;
  
  FUN_0043d2e0();
  DAT_004b2ed0 = 0x3f800000;
  DAT_004b0ce0 = DAT_004b0ce0 & 0xfffffffc;
  DAT_004b450c = 0;
  DAT_004b4508 = 0;
  if ((DAT_004cee40 == 10) || (DAT_004cee40 == 0xb)) {
    FUN_00411b80(0x43f00000,0x43c40000);
    pvVar4 = DAT_004b0cb4;
    if (DAT_004b0cb4 != DAT_004b0cb0) goto LAB_00422397;
  }
  else {
    if (DAT_004cee40 == 0xc) {
      FUN_00411b80(0x43f00000,0x43c40000);
      DAT_004b0ce0 = DAT_004b0ce0 | 2;
      pvVar4 = extraout_ECX_00;
      goto LAB_00422397;
    }
    if ((DAT_004cee40 == 4) || (DAT_004cee40 == 0x10)) {
      FUN_00411b80(0x43f00000,0x43c40000);
      pvVar4 = extraout_ECX_01;
      goto LAB_00422397;
    }
    pvVar4 = extraout_ECX;
    if (DAT_004cee40 != 0xe) goto LAB_00422397;
    FUN_00411b80(0x43f00000,0x43c40000);
    pvVar4 = extraout_ECX_02;
    if (DAT_004b0cb4 != DAT_004b0cb0) {
      FUN_004230a0();
      DAT_004b0ce0 = DAT_004b0ce0 | 8;
      pvVar4 = extraout_ECX_03;
    }
  }
  DAT_004b0ce0 = DAT_004b0ce0 | 1;
LAB_00422397:
  pvVar2 = DAT_004b4518;
  if ((DAT_004b0ce0 & 2) == 0) {
    if (((DAT_004cee40 != 0xf) && (DAT_004cee40 != 0x10)) && (DAT_004b4518 != (void *)0x0)) {
      FUN_0043b450((int)DAT_004b4518);
      FUN_0046ca4f(pvVar2);
      pvVar4 = extraout_ECX_04;
    }
    pvVar2 = DAT_004b43c0;
    if (DAT_004b43c0 != (void *)0x0) {
      FUN_00402cc0((int)DAT_004b43c0);
      FUN_0046ca4f(pvVar2);
      pvVar4 = extraout_ECX_05;
    }
    pvVar2 = DAT_004b43bc;
    if (DAT_004b43bc != (void *)0x0) {
      FUN_00402cc0((int)DAT_004b43bc);
      FUN_0046ca4f(pvVar2);
      pvVar4 = extraout_ECX_06;
    }
    pvVar2 = DAT_004b4510;
    if (DAT_004b4510 != (void *)0x0) {
      FUN_00431ed0();
      FUN_0046ca4f(pvVar2);
      pvVar4 = extraout_ECX_07;
    }
    pvVar2 = DAT_004b43e4;
    if (DAT_004b43e4 != (void *)0x0) {
      FUN_0041dc50(pvVar4,(int)DAT_004b43e4);
      FUN_0046ca4f(pvVar2);
      pvVar4 = extraout_ECX_08;
    }
    pvVar2 = DAT_004b4514;
    if (DAT_004b4514 != (void *)0x0) {
      FUN_00436270(pvVar4,(int)DAT_004b4514);
      FUN_0046ca4f(pvVar2);
      pvVar4 = extraout_ECX_09;
    }
    pvVar2 = DAT_004b43c8;
    if (DAT_004b43c8 != (void *)0x0) {
      FUN_004096d0(pvVar4,(int)DAT_004b43c8);
      FUN_0046ca4f(pvVar2);
      pvVar4 = extraout_ECX_10;
    }
    pvVar2 = DAT_004b44f0;
    if (DAT_004b44f0 != (void *)0x0) {
      FUN_00425a00((int)DAT_004b44f0);
      FUN_0046ca4f(pvVar2);
      pvVar4 = extraout_ECX_11;
    }
    pvVar2 = DAT_004b44f4;
    if (DAT_004b44f4 != (void *)0x0) {
      FUN_004280d0();
      FUN_0046ca4f(pvVar2);
      pvVar4 = extraout_ECX_12;
    }
    pvVar2 = DAT_004b4524;
    if (DAT_004b4524 != (void *)0x0) {
      FUN_0043dc30((int)DAT_004b4524);
      FUN_0046ca4f(pvVar2);
      pvVar4 = extraout_ECX_13;
    }
    pvVar2 = DAT_004b4534;
    if (DAT_004b4534 != (void *)0x0) {
      FUN_0044a120(pvVar4);
      FUN_0046ca4f(pvVar2);
      pvVar4 = extraout_ECX_14;
    }
  }
  else {
    FUN_0041dbc0(pvVar4);
    pvVar4 = DAT_004b43bc;
    if (DAT_004b43bc != (void *)0x0) {
      FUN_00402cc0((int)DAT_004b43bc);
      FUN_0046ca4f(pvVar4);
    }
    pvVar4 = DAT_004b4510;
    DAT_004b43bc = DAT_004b43c0;
    if (*(int *)((int)DAT_004b4510 + 8) != 0) {
      puVar1 = (uint *)(*(int *)((int)DAT_004b4510 + 8) + 4);
      *puVar1 = *puVar1 & 0xfffffffd;
    }
    if (*(int *)((int)pvVar4 + 0xc) != 0) {
      puVar1 = (uint *)(*(int *)((int)pvVar4 + 0xc) + 4);
      *puVar1 = *puVar1 & 0xfffffffd;
    }
    pvVar4 = DAT_004b43c8;
    if (*(int *)((int)DAT_004b43c8 + 8) != 0) {
      puVar1 = (uint *)(*(int *)((int)DAT_004b43c8 + 8) + 4);
      *puVar1 = *puVar1 & 0xfffffffd;
    }
    if (*(int *)((int)pvVar4 + 0xc) != 0) {
      puVar1 = (uint *)(*(int *)((int)pvVar4 + 0xc) + 4);
      *puVar1 = *puVar1 & 0xfffffffd;
    }
    pvVar4 = DAT_004b4518;
    if (*(int *)((int)DAT_004b4518 + 0x1d4) != 0) {
      puVar1 = (uint *)(*(int *)((int)DAT_004b4518 + 0x1d4) + 4);
      *puVar1 = *puVar1 & 0xfffffffd;
    }
    if (*(int *)((int)pvVar4 + 0xc) != 0) {
      puVar1 = (uint *)(*(int *)((int)pvVar4 + 0xc) + 4);
      *puVar1 = *puVar1 & 0xfffffffd;
    }
    pvVar4 = DAT_004b44f0;
    _memset((void *)((int)DAT_004b44f0 + 0x14),0,0x666fc0);
    *(undefined4 *)((int)pvVar4 + 0x666fd8) = 0;
    *(undefined4 *)((int)pvVar4 + 0x666fe0) = 0;
    pvVar4 = extraout_ECX_15;
  }
  pvVar2 = DAT_004b43dc;
  if ((DAT_004b0ce0 & 9) == 0) {
    if (DAT_004b43dc != (void *)0x0) {
      FUN_00412f10();
      FUN_0046ca4f(pvVar2);
      pvVar4 = extraout_ECX_16;
    }
  }
  else {
    FUN_0040e940((int)DAT_004b43dc);
    pvVar4 = extraout_ECX_17;
  }
  pvVar2 = DAT_004b43d4;
  if (DAT_004b43d4 != (void *)0x0) {
    FUN_0040fa30(pvVar4);
    FUN_0046ca4f(pvVar2);
    pvVar4 = extraout_ECX_18;
  }
  pvVar2 = DAT_004b43c4;
  if (DAT_004b43c4 != (void *)0x0) {
    FUN_00406930((int)DAT_004b43c4);
    FUN_0046ca4f(pvVar2);
    pvVar4 = extraout_ECX_19;
  }
  pvVar2 = DAT_004b43cc;
  if (DAT_004b43cc != (void *)0x0) {
    FUN_0040d9c0(pvVar4);
    FUN_0046ca4f(pvVar2);
  }
  iVar3 = DAT_004ce89c;
  pvVar4 = *(void **)((int)param_1 + 8);
  if (pvVar4 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar4,iVar3);
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
    }
  }
  iVar3 = DAT_004ce89c;
  pvVar4 = *(void **)((int)param_1 + 0xc);
  if (pvVar4 != (void *)0x0) {
    if ((DAT_004cee78 & 0x8000) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + '\x01';
    }
    FUN_00462890(pvVar4,iVar3);
    if ((DAT_004cee78 & 0x8000) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004cf0f8);
      DAT_004cf218 = DAT_004cf218 + -1;
    }
  }
  DAT_004b44e8 = 0;
  if ((DAT_004b0ce0 & 0x22) == 0) {
    if ((DAT_004ceae8 & 0x10) == 0) {
      uVar5 = 3;
    }
    else {
      uVar5 = 4;
    }
    FUN_00454960(uVar5,0);
  }
  FUN_00423020();
  DAT_004cf2a8 = (-(uint)((DAT_004b0ce0 & 1) != 0) & 0x1000000) - 0x1000000;
  DAT_004ce55c = 1;
  return;
}


