/* undefined4 __stdcall FUN_00435ae0(void) @ 00435ae0  1557 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00435ae0(void)

{
  float fVar1;
  void *this;
  int iVar2;
  undefined4 *puVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  int unaff_EDI;
  float10 extraout_ST0;
  ulonglong uVar4;
  
  iVar2 = FUN_0045fe60(7);
  *(int *)((int)unaff_EDI + 0x10) = iVar2;
  if (iVar2 != 0) {
    if (DAT_004ce8a8 == 0) {
      iVar2 = FUN_00437680();
      if (iVar2 != 0) goto LAB_00435b05;
    }
    else {
      *(int *)((int)unaff_EDI + 0xa2c) = DAT_004ce8a8;
      DAT_004ce8a8 = 0;
    }
    puVar3 = (undefined4 *)operator_new(0x24);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = puVar3[1] & 0xfffffffe;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      *puVar3 = 0;
      puVar3[5] = puVar3;
      puVar3[6] = 0;
      puVar3[7] = 0;
    }
    puVar3[2] = ((void *)0x00437660);
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[8] = unaff_EDI;
    puVar3[1] = puVar3[1] & 0xfffffffd | 1;
    FUN_00462380();
    *(undefined4 **)((int)unaff_EDI + 8) = puVar3;
    puVar3 = (undefined4 *)operator_new(0x24);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = puVar3[1] & 0xfffffffe;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      *puVar3 = 0;
      puVar3[5] = puVar3;
      puVar3[6] = 0;
      puVar3[7] = 0;
    }
    puVar3[2] = ((void *)0x00437670);
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[8] = unaff_EDI;
    puVar3[1] = puVar3[1] & 0xfffffffd | 1;
    FUN_00462420();
    this = *(void **)((int)unaff_EDI + 0x10);
    *(undefined4 **)((int)unaff_EDI + 0xc) = puVar3;
    FUN_00402520();
    *(undefined *)((int)unaff_EDI + 0x4b1) = 0x10;
    *(undefined *)((int)unaff_EDI + 0x4b0) = 0x10;
    FUN_00454d10(this,(void *)((int)unaff_EDI + 0x14),0);
    iVar2 = *(int *)((int)unaff_EDI + 0xa2c);
    *(undefined4 *)((int)unaff_EDI + 0x97c) = 0;
    *(undefined4 *)((int)unaff_EDI + 0x988) = 0;
    *(undefined4 *)((int)unaff_EDI + 0x980) = 0x43c80000;
    *(undefined4 *)((int)unaff_EDI + 0x98c) = 0xc800;
    uVar4 = FUN_004931e0(extraout_ECX,extraout_EDX);
    *(int *)((int)unaff_EDI + 0x990) = (int)uVar4;
    uVar4 = FUN_004931e0(extraout_ECX_00,(int)(uVar4 >> 0x20));
    *(int *)((int)unaff_EDI + 0x994) = (int)uVar4;
    uVar4 = FUN_004931e0(extraout_ECX_01,(int)(uVar4 >> 0x20));
    *(int *)((int)unaff_EDI + 0x998) = (int)uVar4;
    uVar4 = FUN_004931e0(extraout_ECX_02,(int)(uVar4 >> 0x20));
    *(int *)((int)unaff_EDI + 0x99c) = (int)uVar4;
    *(undefined4 *)((int)iVar2 + 0x24) = 100;
    DAT_004b0cd0 = *(int *)(*(int *)((int)unaff_EDI + 0xa2c) + 0x24) *
                   *(int *)(*(int *)((int)unaff_EDI + 0xa2c) + 0x20);
    DAT_004b0cd4 = *(undefined4 *)(*(int *)((int)unaff_EDI + 0xa2c) + 0x24);
    if ((*(uint *)((int)unaff_EDI + 0xc430) & 1) == 0) {
      *(float *)((int)unaff_EDI + 0xc428) = (float)extraout_ST0;
      *(undefined4 *)((int)unaff_EDI + 0xc424) = 0;
      *(undefined4 *)((int)unaff_EDI + 0xc420) = 0xfff0bdc1;
      *(undefined4 **)((int)unaff_EDI + 0xc42c) = &DAT_004b2ed0;
      *(uint *)((int)unaff_EDI + 0xc430) = *(uint *)((int)unaff_EDI + 0xc430) | 1;
    }
    *(undefined4 *)((int)unaff_EDI + 0xc420) = 0xfffffffe;
    *(undefined4 *)((int)unaff_EDI + 0xc428) = 0xbf800000;
    *(undefined4 *)((int)unaff_EDI + 0xc424) = 0xffffffff;
    *(undefined4 *)(*(int *)((int)unaff_EDI + 0xa2c) + 4) =
         *(undefined4 *)(((char *)&DAT_004b31a8 + DAT_004b0c90 * 4));
    *(undefined4 *)(*(int *)((int)unaff_EDI + 0xa2c) + 0xc) =
         *(undefined4 *)(((char *)&DAT_004b31b4 + DAT_004b0c90 * 4));
    *(undefined4 *)(*(int *)((int)unaff_EDI + 0xa2c) + 8) =
         *(undefined4 *)(((char *)&DAT_004b31cc + DAT_004b0c90 * 4));
    fVar1 = *(float *)(*(int *)((int)unaff_EDI + 0xa2c) + 4) * 0.5;
    *(float *)((int)unaff_EDI + 0x9e8) = fVar1;
    *(float *)((int)unaff_EDI + 0x9e4) = fVar1;
    *(undefined4 *)((int)unaff_EDI + 0x9ec) = 0x40a00000;
    fVar1 = *(float *)(((char *)&DAT_004b31b4 + DAT_004b0c90 * 4));
    *(float *)((int)unaff_EDI + 0x9f4) = fVar1 * 0.5;
    *(float *)((int)unaff_EDI + 0x9f0) = fVar1 * 0.5;
    *(undefined4 *)((int)unaff_EDI + 0x9f8) = 0x40a00000;
    fVar1 = *(float *)(((char *)&DAT_004b31c0 + DAT_004b0c90 * 4));
    *(float *)((int)unaff_EDI + 0xa00) = fVar1 * 0.5;
    *(float *)((int)unaff_EDI + 0x9fc) = fVar1 * 0.5;
    *(undefined4 *)((int)unaff_EDI + 0xa04) = 0x40a00000;
    *(float *)((int)unaff_EDI + 0x9cc) = *(float *)((int)unaff_EDI + 0x97c) - *(float *)((int)unaff_EDI + 0x9e4);
    *(float *)((int)unaff_EDI + 0x9d0) = *(float *)((int)unaff_EDI + 0x980) - *(float *)((int)unaff_EDI + 0x9e8);
    *(float *)((int)unaff_EDI + 0x9d4) = *(float *)((int)unaff_EDI + 0x984) - *(float *)((int)unaff_EDI + 0x9ec);
    *(float *)((int)unaff_EDI + 0x9d8) = *(float *)((int)unaff_EDI + 0x9e4) + *(float *)((int)unaff_EDI + 0x97c);
    *(float *)((int)unaff_EDI + 0x9dc) = *(float *)((int)unaff_EDI + 0x9e8) + *(float *)((int)unaff_EDI + 0x980);
    *(float *)((int)unaff_EDI + 0x9e0) = *(float *)((int)unaff_EDI + 0x9ec) + *(float *)((int)unaff_EDI + 0x984);
    *(float *)((int)unaff_EDI + 0xc444) = *(float *)((int)unaff_EDI + 0x97c) - *(float *)((int)unaff_EDI + 0x9f0);
    *(float *)((int)unaff_EDI + 0xc448) = *(float *)((int)unaff_EDI + 0x980) - *(float *)((int)unaff_EDI + 0x9f4);
    *(float *)((int)unaff_EDI + 0xc44c) = *(float *)((int)unaff_EDI + 0x984) - *(float *)((int)unaff_EDI + 0x9f8);
    *(float *)((int)unaff_EDI + 0xc450) = *(float *)((int)unaff_EDI + 0x9f0) + *(float *)((int)unaff_EDI + 0x97c);
    *(float *)((int)unaff_EDI + 0xc454) = *(float *)((int)unaff_EDI + 0x9f4) + *(float *)((int)unaff_EDI + 0x980);
    *(float *)((int)unaff_EDI + 0xc458) = *(float *)((int)unaff_EDI + 0x9f8) + *(float *)((int)unaff_EDI + 0x984);
    *(float *)((int)unaff_EDI + 0xc45c) = *(float *)((int)unaff_EDI + 0x97c) - *(float *)((int)unaff_EDI + 0x9fc);
    *(float *)((int)unaff_EDI + 0xc460) = *(float *)((int)unaff_EDI + 0x980) - *(float *)((int)unaff_EDI + 0xa00);
    *(float *)((int)unaff_EDI + 0xc464) = *(float *)((int)unaff_EDI + 0x984) - *(float *)((int)unaff_EDI + 0xa04);
    *(float *)((int)unaff_EDI + 0xc468) = *(float *)((int)unaff_EDI + 0x9fc) + *(float *)((int)unaff_EDI + 0x97c);
    *(float *)((int)unaff_EDI + 0xc46c) = *(float *)((int)unaff_EDI + 0xa00) + *(float *)((int)unaff_EDI + 0x980);
    *(float *)((int)unaff_EDI + 0xc470) = *(float *)((int)unaff_EDI + 0xa04) + *(float *)((int)unaff_EDI + 0x984);
    *(float *)((int)unaff_EDI + 0xc474) = *(float *)((int)unaff_EDI + 0x97c) - *(float *)((int)unaff_EDI + 0x9fc);
    *(float *)((int)unaff_EDI + 0xc478) = *(float *)((int)unaff_EDI + 0x980) - *(float *)((int)unaff_EDI + 0xa00);
    *(float *)((int)unaff_EDI + 0xc47c) = *(float *)((int)unaff_EDI + 0x984) - *(float *)((int)unaff_EDI + 0xa04);
    *(float *)((int)unaff_EDI + 0xc480) = *(float *)((int)unaff_EDI + 0x9fc) + *(float *)((int)unaff_EDI + 0x97c);
    *(float *)((int)unaff_EDI + 0xc484) = *(float *)((int)unaff_EDI + 0xa00) + *(float *)((int)unaff_EDI + 0x980);
    *(float *)((int)unaff_EDI + 0xc488) = *(float *)((int)unaff_EDI + 0xa04) + *(float *)((int)unaff_EDI + 0x984);
    if ((*(uint *)((int)unaff_EDI + 0xa40) & 1) == 0) {
      *(float *)((int)unaff_EDI + 0xa38) = (float)extraout_ST0;
      *(undefined4 *)((int)unaff_EDI + 0xa34) = 0;
      *(undefined4 *)((int)unaff_EDI + 0xa30) = 0xfff0bdc1;
      *(undefined4 **)((int)unaff_EDI + 0xa3c) = &DAT_004b2ed0;
      *(uint *)((int)unaff_EDI + 0xa40) = *(uint *)((int)unaff_EDI + 0xa40) | 1;
    }
    *(float *)((int)unaff_EDI + 0xa38) = (float)extraout_ST0;
    *(undefined4 *)((int)unaff_EDI + 0xa34) = 0;
    *(undefined4 *)((int)unaff_EDI + 0xa30) = 0xffffffff;
    if ((*(uint *)((int)unaff_EDI + 0xc410) & 1) == 0) {
      *(float *)((int)unaff_EDI + 0xc408) = (float)extraout_ST0;
      *(undefined4 *)((int)unaff_EDI + 0xc404) = 0;
      *(undefined4 *)((int)unaff_EDI + 0xc400) = 0xfff0bdc1;
      *(undefined4 **)((int)unaff_EDI + 0xc40c) = &DAT_004b2ed0;
      *(uint *)((int)unaff_EDI + 0xc410) = *(uint *)((int)unaff_EDI + 0xc410) | 1;
    }
    *(undefined4 *)((int)unaff_EDI + 0xc404) = 0x78;
    *(undefined4 *)((int)unaff_EDI + 0xc408) = 0x42f00000;
    *(undefined4 *)((int)unaff_EDI + 0xc400) = 0x77;
    *(undefined4 *)((int)unaff_EDI + 0xc41c) = 0;
    *(undefined4 *)((int)unaff_EDI + 0x825c) = 0x3f800000;
    *(undefined4 *)((int)unaff_EDI + 0xc3fc) = 0x1e;
    return 0;
  }
LAB_00435b05:
  FUN_00464220(&DAT_004b0ec8,&DAT_004a10d8);
  return 0xffffffff;
}


