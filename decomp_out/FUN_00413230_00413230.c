/* undefined __stdcall FUN_00413230(byte * param_1) @ 00413230  819 bytes */
#include "th12.h"

void FUN_00413230(byte *param_1)

{
  int iVar1;
  undefined4 *unaff_EDI;
  float10 extraout_ST0;
  
  unaff_EDI[0x404] = 0;
  unaff_EDI[0x405] = 0;
  *unaff_EDI = &PTR_LAB_0049fc50;
  FUN_004123c0();
  _memset(unaff_EDI + 0x410,0,0x1774);
  unaff_EDI[0x40a] = unaff_EDI[0x40a] & 0xfffffffe;
  unaff_EDI[2] = 0;
  unaff_EDI[1] = unaff_EDI + 2;
  unaff_EDI[3] = 0;
  unaff_EDI[0x407] = unaff_EDI;
  unaff_EDI[0x406] = 0xffffffff;
  unaff_EDI[0x408] = 0;
  unaff_EDI[0x40c] = unaff_EDI + 2;
  unaff_EDI[0x40d] = 0;
  unaff_EDI[0x40e] = 0;
  unaff_EDI[0x9e3] = unaff_EDI;
  unaff_EDI[0x4c4] = 0;
  unaff_EDI[0x4d7] = 0;
  unaff_EDI[0x4e6] = 0;
  unaff_EDI[0x4f5] = 0;
  unaff_EDI[0x504] = 0;
  unaff_EDI[0x513] = 0;
  unaff_EDI[0x522] = 0;
  unaff_EDI[0x531] = 0;
  unaff_EDI[0x9b3] = 0xffffffff;
  _memset(unaff_EDI + 0x437,0,0x34);
  _memset(unaff_EDI + 0x42a,0,0x34);
  _memset(unaff_EDI + 0x41d,0,0x34);
  unaff_EDI[0x444] = 0x41c00000;
  unaff_EDI[0x445] = 0x41c00000;
  unaff_EDI[0x9c1] = 0xffffffff;
  unaff_EDI[0x446] = 0x41c00000;
  unaff_EDI[0x447] = 0x41c00000;
  unaff_EDI[0x4b0] = unaff_EDI;
  unaff_EDI[0x4b1] = 0;
  unaff_EDI[0x4b2] = 0;
  _memset(unaff_EDI + 0x998,0,0x58);
  unaff_EDI[0x9ad] = 0x42000000;
  unaff_EDI[0x998] = 0;
  unaff_EDI[0x9ac] = 0x42000000;
  if ((unaff_EDI[0x4af] & 1) == 0) {
    unaff_EDI[0x4ad] = 0;
    unaff_EDI[0x4ac] = 0;
    unaff_EDI[0x4ab] = 0xfff0bdc1;
    unaff_EDI[0x4ae] = &DAT_004b2ed0;
    unaff_EDI[0x4af] = unaff_EDI[0x4af] | 1;
  }
  unaff_EDI[0x4ad] = 0;
  unaff_EDI[0x4ac] = 0;
  unaff_EDI[0x4ab] = 0xffffffff;
  if ((unaff_EDI[0x9b8] & 1) == 0) {
    unaff_EDI[0x9b6] = 0;
    unaff_EDI[0x9b5] = 0;
    unaff_EDI[0x9b4] = 0xfff0bdc1;
    unaff_EDI[0x9b7] = &DAT_004b2ed0;
    unaff_EDI[0x9b8] = unaff_EDI[0x9b8] | 1;
  }
  unaff_EDI[0x9b6] = 0;
  unaff_EDI[0x9b5] = 0;
  unaff_EDI[0x9b4] = 0xffffffff;
  if ((unaff_EDI[0x9bd] & 1) == 0) {
    unaff_EDI[0x9bb] = 0;
    unaff_EDI[0x9ba] = 0;
    unaff_EDI[0x9b9] = 0xfff0bdc1;
    unaff_EDI[0x9bc] = &DAT_004b2ed0;
    unaff_EDI[0x9bd] = unaff_EDI[0x9bd] | 1;
  }
  iVar1 = DAT_004b43dc;
  unaff_EDI[0x9bb] = 0;
  unaff_EDI[0x9ba] = 0;
  unaff_EDI[0x9b9] = 0xffffffff;
  unaff_EDI[0x49e] = 1;
  unaff_EDI[0x40f] = 0;
  unaff_EDI[0x40b] = *(undefined4 *)(iVar1 + 100);
  iVar1 = FUN_004694f0(param_1);
  *(int *)(unaff_EDI[1] + 4) = iVar1;
  *(float *)unaff_EDI[1] = (float)extraout_ST0;
  unaff_EDI[0x997] = unaff_EDI[0x997] & 0xfffffffd;
  unaff_EDI[0x992] = 0;
  unaff_EDI[0x993] = 0;
  unaff_EDI[0x994] = 0;
  unaff_EDI[0x9c3] = 0xffffffff;
  unaff_EDI[0x9c4] = 0xffffffff;
  unaff_EDI[0x9c5] = 0;
  unaff_EDI[0x9c7] = 0xffffffff;
  unaff_EDI[0x9c8] = 0xffffffff;
  unaff_EDI[0x9c9] = 0;
  unaff_EDI[0x9cb] = 0xffffffff;
  unaff_EDI[0x9cc] = 0xffffffff;
  unaff_EDI[0x9cd] = 0;
  unaff_EDI[0x9cf] = 0xffffffff;
  unaff_EDI[0x9d0] = 0xffffffff;
  unaff_EDI[0x9d1] = 0;
  unaff_EDI[0x9d3] = 0xffffffff;
  unaff_EDI[0x9d4] = 0xffffffff;
  unaff_EDI[0x9d5] = 0;
  unaff_EDI[0x9d7] = 0xffffffff;
  unaff_EDI[0x9d8] = 0xffffffff;
  unaff_EDI[0x9d9] = 0;
  unaff_EDI[0x9db] = 0xffffffff;
  unaff_EDI[0x9dc] = 0xffffffff;
  unaff_EDI[0x9dd] = 0;
  unaff_EDI[0x9df] = 0xffffffff;
  unaff_EDI[0x9e0] = 0xffffffff;
  unaff_EDI[0x9e1] = 0;
  unaff_EDI[0x488] = 0xffffffff;
  unaff_EDI[0x489] = 0xffffffff;
  unaff_EDI[0x48a] = 0xffffffff;
  unaff_EDI[0x48b] = 0xffffffff;
  unaff_EDI[0x48c] = 0xffffffff;
  unaff_EDI[0x48d] = 0xffffffff;
  unaff_EDI[0x48e] = 0xffffffff;
  unaff_EDI[0x48f] = 0xffffffff;
  unaff_EDI[0x490] = 0xffffffff;
  unaff_EDI[0x491] = 0xffffffff;
  unaff_EDI[0x492] = 0xffffffff;
  unaff_EDI[0x493] = 0xffffffff;
  unaff_EDI[0x494] = 0xffffffff;
  unaff_EDI[0x495] = 0xffffffff;
  unaff_EDI[0x496] = 0xffffffff;
  unaff_EDI[0x497] = 0xffffffff;
  return;
}


