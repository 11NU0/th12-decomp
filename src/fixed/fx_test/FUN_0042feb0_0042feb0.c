/* undefined4 __stdcall FUN_0042feb0(size_t param_1) @ 0042feb0  542 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall FUN_0042feb0(size_t param_1)

{
  size_t sVar1;
  byte *_Memory;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  sVar1 = param_1;
  FUN_00423250();
  _Memory = FUN_00463c10(&param_1,1);
  if (_Memory == (byte *)0x0) {
    pcVar5 = &DAT_004a0b2c;
  }
  else {
    pbVar3 = _Memory;
    puVar4 = &DAT_004ceab0;
    for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *(undefined4 *)pbVar3;
      pbVar3 = pbVar3 + 4;
      puVar4 = puVar4 + 1;
    }
    _free(_Memory);
    if (((((DAT_004ceaca < 2) && (DAT_004ceacb < 3)) && (DAT_004ceacc < 2)) &&
        ((DAT_004ceacd < 4 && (DAT_004ceace < 3)))) &&
       ((DAT_004ceacf < 3 && ((DAT_004ceab0 == 0x120001 && (param_1 == 0x3c)))))) {
      _DAT_004d49ec = DAT_004ceab4;
      _DAT_004d49f0 = DAT_004ceab8;
      DAT_004d49f4 = DAT_004ceabc;
      DAT_004d49f8 = DAT_004ceac0;
      DAT_004d49fc = DAT_004ceac4;
      goto LAB_0042ff9b;
    }
    pcVar5 = &DAT_004a0b60;
  }
  FUN_00464220(&DAT_004b0ec8,pcVar5);
  FUN_00423250();
LAB_0042ff9b:
  *(undefined4 *)(sVar1 + 0x57c) = 0;
  if ((*(byte *)(sVar1 + 0x200) & 4) != 0) {
    FUN_00464220(&DAT_004b0ec8,&DAT_004a0b94);
  }
  if ((*(byte *)(sVar1 + 0x200) & 1) != 0) {
    FUN_00464220(&DAT_004b0ec8,&DAT_004a0bb0);
  }
  if (*(int *)(sVar1 + 0x114) != 0) {
    FUN_00464220(&DAT_004b0ec8,&DAT_004a0bd8);
  }
  if ((*(byte *)(sVar1 + 0x200) & 2) != 0) {
    FUN_00464220(&DAT_004b0ec8,&DAT_004a0bf8);
  }
  if ((*(byte *)(sVar1 + 0x200) & 8) != 0) {
    FUN_00464220(&DAT_004b0ec8,&DAT_004a0c20);
  }
  if ((*(byte *)(sVar1 + 0x200) & 0x10) != 0) {
    FUN_00464220(&DAT_004b0ec8,&DAT_004a0c58);
  }
  if ((*(byte *)(sVar1 + 0x200) & 0x20) != 0) {
    FUN_00464220(&DAT_004b0ec8,&DAT_004a0c78);
    DAT_004cee64 = 1;
  }
  if ((*(byte *)(sVar1 + 0x200) & 0x40) != 0) {
    FUN_00464220(&DAT_004b0ec8,&DAT_004a0c90);
  }
  iVar2 = FUN_00463e80(&DAT_004ceab0);
  if (iVar2 != 0) {
    FUN_00464300(&DAT_004a0cb4);
    FUN_00464300(&DAT_004a0cd8);
    return 0xffffffff;
  }
  return 0;
}


