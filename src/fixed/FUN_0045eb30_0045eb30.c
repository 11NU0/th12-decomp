/* undefined __stdcall FUN_0045eb30(void) @ 0045eb30  487 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_0045eb30(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  
  iVar2 = DAT_004ce8cc;
  *(undefined4 *)(&DAT_004b5678 + DAT_004ce8cc) = 0xc3000000;
  *(undefined4 *)(&DAT_004b5650 + iVar2) = 0xc3000000;
  *(undefined4 *)(&DAT_004b568c + iVar2) = 0x43000000;
  *(undefined4 *)(&DAT_004b5664 + iVar2) = 0x43000000;
  uStack_14 = 0;
  *(undefined4 *)(&DAT_004b5690 + iVar2) = 0x43000000;
  puVar1 = (undefined4 *)(&DAT_004b564c + iVar2);
  *(undefined4 *)(&DAT_004b567c + iVar2) = 0x43000000;
  uStack_1c = 1;
  *(undefined4 *)(&DAT_004b5668 + iVar2) = 0xc3000000;
  uStack_20 = 0x102;
  *(undefined4 *)(&DAT_004b5654 + iVar2) = 0xc3000000;
  *(undefined4 *)(&DAT_004b5694 + iVar2) = 0;
  *(undefined4 *)(&DAT_004b5680 + iVar2) = 0;
  *(undefined4 *)(&DAT_004b566c + iVar2) = 0;
  *(undefined4 *)(&DAT_004b5658 + iVar2) = 0;
  _DAT_004d4858 = *(undefined4 *)(&DAT_004b5650 + iVar2);
  *(undefined4 *)(&DAT_004b5684 + iVar2) = 0;
  *(undefined4 *)(&DAT_004b565c + iVar2) = 0;
  *(undefined4 *)(&DAT_004b5698 + iVar2) = 0x3f800000;
  *(undefined4 *)(&DAT_004b5670 + iVar2) = 0x3f800000;
  *(undefined4 *)(&DAT_004b569c + iVar2) = 0x3f800000;
  *(undefined4 *)(&DAT_004b5688 + iVar2) = 0x3f800000;
  *(undefined4 *)(&DAT_004b5674 + iVar2) = 0;
  *(undefined4 *)(&DAT_004b5660 + iVar2) = 0;
  _DAT_004d485c = *(undefined4 *)(&DAT_004b5654 + iVar2);
  _DAT_004d4860 = *(undefined4 *)(&DAT_004b5658 + iVar2);
  _DAT_004d4870 = *(undefined4 *)(&DAT_004b5664 + iVar2);
  _DAT_004d4874 = *(undefined4 *)(&DAT_004b5668 + iVar2);
  _DAT_004d4878 = *(undefined4 *)(&DAT_004b566c + iVar2);
  _DAT_004d4888 = *(undefined4 *)(&DAT_004b5678 + iVar2);
  _DAT_004d488c = *(undefined4 *)(&DAT_004b567c + iVar2);
  _DAT_004d4890 = *(undefined4 *)(&DAT_004b5680 + iVar2);
  _DAT_004d48a0 = *(undefined4 *)(&DAT_004b568c + iVar2);
  _DAT_004d48a4 = *(undefined4 *)(&DAT_004b5690 + iVar2);
  _DAT_004d48a8 = *(undefined4 *)(&DAT_004b5694 + iVar2);
  _DAT_004d4868 = *(undefined4 *)(&DAT_004b565c + iVar2);
  _DAT_004d486c = *(undefined4 *)(&DAT_004b5660 + iVar2);
  _DAT_004d4880 = *(undefined4 *)(&DAT_004b5670 + iVar2);
  _DAT_004d4884 = *(undefined4 *)(&DAT_004b5674 + iVar2);
  _DAT_004d4898 = *(undefined4 *)(&DAT_004b5684 + iVar2);
  _DAT_004d489c = *(undefined4 *)(&DAT_004b5688 + iVar2);
  _DAT_004d48b0 = *(undefined4 *)(&DAT_004b5698 + iVar2);
  _DAT_004d48b4 = *(undefined4 *)(&DAT_004b569c + iVar2);
  puStack_18 = puVar1;
  (**(code **)(*DAT_004ce8f0 + 0x68))(DAT_004ce8f0,0x50,0);
  puVar5 = &uStack_20;
  (**(code **)(*(int *)*puVar1 + 0x2c))((int *)*puVar1,0,0,puVar5,0);
  puVar4 = (undefined4 *)(&DAT_004b5650 + iVar2);
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  (**(code **)(*(int *)*puVar1 + 0x30))((int *)*puVar1);
  (**(code **)(*DAT_004ce8f0 + 400))(DAT_004ce8f0,0,*puVar1,0,0x14);
  return;
}


