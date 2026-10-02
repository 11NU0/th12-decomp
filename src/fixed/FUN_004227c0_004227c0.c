/* undefined4 __fastcall FUN_004227c0(void * param_1) @ 004227c0  989 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004227c0(void *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *pvVar4;
  void *extraout_ECX_02;
  void *extraout_ECX_03;
  int iVar5;
  int unaff_EDI;
  undefined4 local_58 [21];
  
  if (((*(uint *)((int)DAT_004b43e4 + 0x6d18) & 0x200) != 0) &&
     (*(int *)((int)DAT_004b43e4 + 0x6d20) < 0x78)) {
    return 1;
  }
  if (*(int *)((int)unaff_EDI + 0x14) == 0) {
    FUN_00421430(param_1);
    if ((*(byte *)((int)unaff_EDI + 0x60) & 8) != 0) {
      FUN_00464c40();
      DAT_004cee40 = ~(DAT_004cee78 >> 0xd) & 1 | 2;
      return 1;
    }
    FUN_004056e0();
    if (DAT_004b43bc == (void *)0x0) {
      *(uint *)((int)unaff_EDI + 0x60) = *(uint *)((int)unaff_EDI + 0x60) & 0xfffff7ff;
      FUN_00409630(extraout_ECX);
      FUN_00436100();
      FUN_0040e8b0();
      FUN_0040e940(DAT_004b43dc);
      FUN_00421bf0();
      DAT_004b0cbc = 0;
      DAT_004b0cc0 = 0;
      FUN_0043c590();
      _memset(local_58,0,0x50);
      FUN_00412990(&DAT_0049fe14,local_58);
      FUN_0041d560();
      FUN_00431ea0();
      FUN_0040ea10();
      FUN_0040e810();
      FUN_00412ee0();
      FUN_0040e810();
      FUN_0040e810();
      iVar5 = DAT_004b43d4;
      puVar1 = (uint *)(*(int *)((int)DAT_004b43d4 + 8) + 4);
      *puVar1 = *puVar1 | 2;
      puVar1 = (uint *)(*(int *)((int)iVar5 + 0xc) + 4);
      *puVar1 = *puVar1 | 2;
      FUN_0040e810();
      iVar5 = DAT_004b4524;
      puVar1 = (uint *)(*(int *)((int)DAT_004b4524 + 8) + 4);
      *puVar1 = *puVar1 | 2;
      puVar1 = (uint *)(*(int *)((int)iVar5 + 0xc) + 4);
      *puVar1 = *puVar1 | 2;
      FUN_0040d990();
      FUN_0044a0f0();
      pvVar4 = extraout_ECX_00;
      if (((byte)DAT_004b0ce0 & 0x20) == 0) {
        FUN_00430150(0,*(int *)((int)DAT_004b452c + 0x34));
        pvVar4 = extraout_ECX_01;
      }
      FUN_00461970(pvVar4,*(int *)((int)DAT_004b43b8 + 0x18fb8));
      FUN_00411b00(extraout_ECX_02);
    }
    else {
      FUN_004057e0();
      FUN_00405890();
      pvVar4 = DAT_004b43e4;
      *(uint *)((int)unaff_EDI + 0x60) = *(uint *)((int)unaff_EDI + 0x60) | 0x800;
      FUN_00461970(pvVar4,*(int *)((int)pvVar4 + 0x6c68));
    }
  }
  else if ((*(int *)((int)unaff_EDI + 0x14) == 0x1e) && ((*(uint *)((int)unaff_EDI + 0x60) & 0x800) != 0)) {
    *(uint *)((int)unaff_EDI + 0x60) = *(uint *)((int)unaff_EDI + 0x60) & 0xfffff7ff;
    FUN_00409630(param_1);
    FUN_00436100();
    FUN_0040e8b0();
    FUN_0040e940(DAT_004b43dc);
    FUN_00421bf0();
    DAT_004b0cbc = 0;
    DAT_004b0cc0 = 0;
    FUN_0043c590();
    _memset(local_58,0,0x50);
    FUN_00412990(&DAT_0049fe14,local_58);
    FUN_0041d560();
    FUN_00431ea0();
    FUN_0040ea10();
    FUN_0040e810();
    FUN_00412ee0();
    FUN_0040e810();
    FUN_0040e810();
    iVar5 = DAT_004b43d4;
    puVar1 = (uint *)(*(int *)((int)DAT_004b43d4 + 8) + 4);
    *puVar1 = *puVar1 | 2;
    puVar1 = (uint *)(*(int *)((int)iVar5 + 0xc) + 4);
    *puVar1 = *puVar1 | 2;
    FUN_0040e810();
    iVar5 = DAT_004b4524;
    puVar1 = (uint *)(*(int *)((int)DAT_004b4524 + 8) + 4);
    *puVar1 = *puVar1 | 2;
    puVar1 = (uint *)(*(int *)((int)iVar5 + 0xc) + 4);
    *puVar1 = *puVar1 | 2;
    FUN_0040d990();
    FUN_0044a0f0();
    FUN_00430240();
    FUN_00430150(0,*(int *)((int)DAT_004b452c + 0x34));
    FUN_00411b00(extraout_ECX_03);
    FUN_004067e0(0);
  }
  pvVar4 = DAT_004b43bc;
  if (*(int *)((int)unaff_EDI + 0x14) == 5) {
    DAT_004cf468 = 2;
  }
  if (((DAT_004b43bc != (void *)0x0) && ((*(byte *)((int)DAT_004b43bc + 0x35bc) & 8) != 0)) &&
     (DAT_004b43bc != (void *)0x0)) {
    FUN_00402cc0((int)DAT_004b43bc);
    FUN_0046ca4f(pvVar4);
  }
  if ((*(uint *)((int)unaff_EDI + 0x60) & 4) == 0) {
    FUN_00464c40();
    if (((byte)DAT_004b0ce0 & 0x20) != 0) {
      if (((_DAT_004d48b8 & 0x80103) != 0) || ((*(byte *)((int)unaff_EDI + 0x60) & 0x70) != 0)) {
        DAT_004cee40 = (-(uint)((DAT_004cee78 & 0x2000) != 0) & 0xfffffffe) + 4;
      }
      if (*(int *)((int)unaff_EDI + 0x14) == 0xdd4) {
        FUN_004529a0(5,0x3c,0,0,0,0x3b);
      }
      else if (*(int *)((int)unaff_EDI + 0x14) == 0xe10) {
        FUN_0040f720(4);
      }
    }
    FUN_00420e70();
    uVar3 = *(uint *)((int)unaff_EDI + 0x60);
    if ((((uVar3 & 0x10) == 0) && ((uVar3 & 0x20) == 0)) && ((uVar3 & 0x40) == 0)) {
      if ((*(int *)((int)DAT_004b4518 + 0x10) != 1) &&
         (iVar5 = (DAT_004b0c94 + DAT_004b0c90 * 2) * 0x45f4,
         piVar2 = (int *)(iVar5 + 0x594 + DAT_004b451c),
         *(int *)(iVar5 + 0x594 + DAT_004b451c) < 215999999)) {
        *piVar2 = *piVar2 + 1;
      }
      DAT_004b0cbc = DAT_004b0cbc + 1;
      DAT_004b0cc0 = DAT_004b0cc0 + 1;
      DAT_004b0c60 = DAT_004b0c60 + 1;
      FUN_00464a80();
      return 1;
    }
    return 3;
  }
  *(uint *)((int)unaff_EDI + 0x60) = *(uint *)((int)unaff_EDI + 0x60) | 0x80;
  return 1;
}


