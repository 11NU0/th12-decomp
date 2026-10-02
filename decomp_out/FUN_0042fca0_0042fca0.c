/* undefined4 __stdcall FUN_0042fca0(void) @ 0042fca0  524 bytes */
#include "th12.h"

/* WARNING: Removing unreachable block (ram,0x0042fe9b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0042fca0(void)

{
  char cVar1;
  char *in_EAX;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  
  if (DAT_004cefb8 != 0) {
    do {
      Sleep(10);
    } while (DAT_004cefb8 != 0);
  }
  FUN_004319e0();
  iVar9 = 0;
  piVar8 = DAT_004ce8f0;
  (**(code **)(*DAT_004ce8f0 + 0x48))(DAT_004ce8f0,0,0);
  uRam004cefc2 = 0;
  _DAT_004cefc4 = 0;
  _DAT_004cefc6 = 0x36;
  _DAT_004cefc8 = 0;
  _DAT_004cefbe = 0x36;
  _DAT_004cefc0 = 0;
  _DAT_004cefbc = 0x4d42;
  iVar4 = (int)&DAT_004cefd4 - (int)in_EAX;
  do {
    cVar1 = *in_EAX;
    in_EAX[iVar4] = cVar1;
    in_EAX = in_EAX + 1;
  } while (cVar1 != '\0');
  if (DAT_004ce9e4 == 0x16) {
    DAT_004cefcc = (undefined4 *)_malloc(0x2c);
    if (DAT_004cefcc != (undefined4 *)0x0) {
      _memset(DAT_004cefcc,0,0x2c);
      DAT_004cefd0 = _malloc(0xe1000);
      if (DAT_004cefd0 != (void *)0x0) {
        _DAT_004cefbe = CONCAT22(_DAT_004cefc0,_DAT_004cefbe) + 0xe1000;
        *(undefined2 *)((int)DAT_004cefcc + 0xe) = 0x18;
        *DAT_004cefcc = 0x28;
        DAT_004cefcc[1] = 0x280;
        DAT_004cefcc[2] = 0x1e0;
        *(undefined2 *)(DAT_004cefcc + 3) = 1;
        piVar7 = (int *)0x0;
        DAT_004cefcc[4] = 0;
        (**(code **)(iRam00000000 + 0x34))(0,&stack0xffffffe0,0);
        uVar6 = 0x1df;
        iVar4 = 0;
        do {
          puVar3 = (undefined2 *)((int)DAT_004cefd0 + iVar4);
          puVar2 = (undefined2 *)((int)piVar8 * uVar6 + iVar9);
          iVar5 = 0x280;
          do {
            *puVar3 = *puVar2;
            *(undefined *)(puVar3 + 1) = *(undefined *)(puVar2 + 1);
            puVar2 = puVar2 + 2;
            puVar3 = (undefined2 *)((int)puVar3 + 3);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          uVar6 = uVar6 - 1;
          iVar4 = iVar4 + 0x780;
        } while (uVar6 < 0x80000000);
        (**(code **)(*piVar7 + 0x38))(piVar7);
        DAT_004cefb8 = __beginthread((_StartAddress *)&LAB_0042fbb0,0,(void *)0x0);
        iVar4 = _DAT_004cefbe;
        goto LAB_0042fe93;
      }
    }
    FUN_00464220(&DAT_004b0ec8,&DAT_004a0acc);
    iVar4 = CONCAT22(_DAT_004cefc0,_DAT_004cefbe);
  }
  else {
    if (DAT_004ce9e4 != 0x17) {
      FUN_00464220(&DAT_004b0ec8,"error ? .\\src\\game\\mother.cpp\r\n");
      return 1;
    }
    FUN_00464220(&DAT_004b0ec8,&DAT_004a0a8c);
    iVar4 = CONCAT22(_DAT_004cefc0,_DAT_004cefbe);
  }
LAB_0042fe93:
  _DAT_004cefc0 = (undefined2)((uint)iVar4 >> 0x10);
  _DAT_004cefbe = (undefined2)iVar4;
  return 0;
}


