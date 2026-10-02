/* undefined4 __fastcall FUN_00469750(int param_1, undefined4 * param_2) @ 00469750  1511 bytes */

#include "th12.h"

undefined4 __fastcall FUN_00469750(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *_Dst;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float10 fVar6;
  float local_14;
  int local_10;
  
  _Dst = (undefined4 *)_malloc(0x418);
  *(undefined4 **)(param_1 + 0x478) = _Dst;
  uVar1 = *param_2;
  _memset(_Dst,0,0x418);
  _Dst[0x102] = param_2[3];
  _Dst[0x103] = param_2[4];
  _Dst[0x104] = param_2[5];
  *(undefined4 *)(param_1 + 0x430) = uVar1;
  *(undefined4 *)(param_1 + 0x434) = 0x43e80000;
  *(undefined4 *)(param_1 + 0x438) = 0;
  _Dst[0xcc] = uVar1;
  _Dst[0xcd] = 0x43e80000;
  _Dst[0xce] = 0;
  fVar6 = FUN_004646e0((float)param_2[2]);
  fVar6 = FUN_004646e0((float)fVar6);
  _Dst[0xd3] = (float)fVar6;
  _Dst[0xd2] = 0x42000000;
  _Dst[0xa8] = uVar1;
  _Dst[0xa9] = 0x43e80000;
  _Dst[0xaa] = 0;
  iVar5 = DAT_004b4514;
  puVar2 = _Dst + 0xa8;
  puVar4 = _Dst + 0xab;
  for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  if (iVar5 != 0) {
    puVar2 = FUN_004390f0(_Dst + 0xcc,0x41a00000,0xc0400000,999,10);
    _Dst[0x105] = puVar2;
    puVar2[0x1c] = puVar2[0x1c] & 0xfffffffd;
    *(undefined4 *)(_Dst[0x105] + 0x10) = 0x43000000;
    *(undefined4 *)(_Dst[0x105] + 0x14) = 0x41c00000;
  }
  local_14 = 0.0;
  *(undefined4 *)(param_1 + 0x3fc) = 0xc;
  local_10 = 0x180;
  iVar5 = 0x1fe;
  puVar2 = _Dst;
  puVar4 = _Dst + 0xab;
  do {
    puVar2[4] = 0xffffffff;
    puVar2[3] = 0x3f800000;
    iVar3 = iVar5 + -0x1fe;
    *(char *)((int)puVar2 + 0x13) =
         -1 - (((char)(iVar3 / 0xc) + (char)(iVar3 >> 0x1f)) -
              (char)((longlong)iVar3 * 0x2aaaaaab >> 0x3f));
    puVar2[5] = *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x7c);
    puVar2[6] = local_14;
    *puVar2 = puVar4[-3];
    puVar2[1] = puVar4[-2];
    puVar2[2] = puVar4[-1];
    puVar2[10] = 0x3f800000;
    iVar3 = local_10 + -0x180;
    puVar2[0xb] = 0xffffffff;
    *(char *)((int)puVar2 + 0x2f) =
         -0x40 - (((char)(iVar3 / 0xc) + (char)(iVar3 >> 0x1f)) -
                 (char)((longlong)iVar3 * 0x2aaaaaab >> 0x3f));
    puVar2[0xc] = *(float *)(param_1 + 100) + *(float *)(param_1 + 0x84);
    puVar2[0xd] = local_14;
    puVar2[7] = puVar4[-3];
    puVar2[8] = puVar4[-2];
    puVar2[9] = puVar4[-1];
    iVar3 = iVar5 + -0xff;
    local_14 = 128.0 / (float)_Dst[0xd2] + local_14;
    puVar2[0x11] = 0x3f800000;
    puVar2[0x12] = 0xffffffff;
    *(char *)((int)puVar2 + 0x4b) =
         -1 - (((char)(iVar3 / 0xc) + (char)(iVar3 >> 0x1f)) -
              (char)((longlong)iVar3 * 0x2aaaaaab >> 0x3f));
    puVar2[0x13] = *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x7c);
    puVar2[0x14] = local_14;
    puVar2[0xe] = *puVar4;
    puVar2[0xf] = puVar4[1];
    puVar2[0x10] = puVar4[2];
    puVar2[0x18] = 0x3f800000;
    puVar2[0x19] = 0xffffffff;
    iVar3 = local_10 + -0xc0;
    *(char *)((int)puVar2 + 0x67) =
         -0x40 - (((char)(iVar3 / 0xc) + (char)(iVar3 >> 0x1f)) -
                 (char)((longlong)iVar3 * 0x2aaaaaab >> 0x3f));
    puVar2[0x1a] = *(float *)(param_1 + 100) + *(float *)(param_1 + 0x84);
    puVar2[0x1b] = local_14;
    puVar2[0x15] = *puVar4;
    puVar2[0x16] = puVar4[1];
    puVar2[0x17] = puVar4[2];
    local_14 = 128.0 / (float)_Dst[0xd2] + local_14;
    puVar2[0x1f] = 0x3f800000;
    puVar2[0x20] = 0xffffffff;
    *(char *)((int)puVar2 + 0x83) =
         -1 - (((char)(iVar5 / 0xc) + (char)(iVar5 >> 0x1f)) -
              (char)((longlong)iVar5 * 0x2aaaaaab >> 0x3f));
    puVar2[0x21] = *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x7c);
    puVar2[0x22] = local_14;
    puVar2[0x1c] = puVar4[3];
    puVar2[0x1d] = puVar4[4];
    puVar2[0x1e] = puVar4[5];
    puVar2[0x26] = 0x3f800000;
    puVar2[0x27] = 0xffffffff;
    *(char *)((int)puVar2 + 0x9f) =
         -0x40 - (((char)(local_10 / 0xc) + (char)(local_10 >> 0x1f)) -
                 (char)((longlong)local_10 * 0x2aaaaaab >> 0x3f));
    puVar2[0x28] = *(float *)(param_1 + 100) + *(float *)(param_1 + 0x84);
    puVar2[0x29] = local_14;
    puVar2[0x23] = puVar4[3];
    puVar2[0x24] = puVar4[4];
    puVar2[0x25] = puVar4[5];
    local_14 = 128.0 / (float)_Dst[0xd2] + local_14;
    puVar2[0x2d] = 0x3f800000;
    puVar2[0x2e] = 0xffffffff;
    iVar3 = iVar5 + 0xff;
    *(char *)((int)puVar2 + 0xbb) =
         -1 - (((char)(iVar3 / 0xc) + (char)(iVar3 >> 0x1f)) -
              (char)((longlong)iVar3 * 0x2aaaaaab >> 0x3f));
    puVar2[0x2f] = *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x7c);
    puVar2[0x30] = local_14;
    puVar2[0x2a] = puVar4[6];
    puVar2[0x2b] = puVar4[7];
    puVar2[0x2c] = puVar4[8];
    puVar2[0x34] = 0x3f800000;
    iVar3 = local_10 + 0xc0;
    puVar2[0x35] = 0xffffffff;
    *(char *)((int)puVar2 + 0xd7) =
         -0x40 - (((char)(iVar3 / 0xc) + (char)(iVar3 >> 0x1f)) -
                 (char)((longlong)iVar3 * 0x2aaaaaab >> 0x3f));
    puVar2[0x36] = *(float *)(param_1 + 100) + *(float *)(param_1 + 0x84);
    puVar2[0x37] = local_14;
    puVar2[0x31] = puVar4[6];
    puVar2[0x32] = puVar4[7];
    puVar2[0x33] = puVar4[8];
    iVar3 = iVar5 + 0x1fe;
    local_14 = 128.0 / (float)_Dst[0xd2] + local_14;
    puVar2[0x3b] = 0x3f800000;
    puVar2[0x3c] = 0xffffffff;
    *(char *)((int)puVar2 + 0xf3) =
         -1 - (((char)(iVar3 / 0xc) + (char)(iVar3 >> 0x1f)) -
              (char)((longlong)iVar3 * 0x2aaaaaab >> 0x3f));
    puVar2[0x3d] = *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x7c);
    puVar2[0x3e] = local_14;
    puVar2[0x38] = puVar4[9];
    puVar2[0x39] = puVar4[10];
    puVar2[0x3a] = puVar4[0xb];
    puVar2[0x42] = 0x3f800000;
    puVar2[0x43] = 0xffffffff;
    iVar3 = local_10 + 0x180;
    *(char *)((int)puVar2 + 0x10f) =
         -0x40 - (((char)(iVar3 / 0xc) + (char)(iVar3 >> 0x1f)) -
                 (char)((longlong)iVar3 * 0x2aaaaaab >> 0x3f));
    puVar2[0x44] = *(float *)(param_1 + 100) + *(float *)(param_1 + 0x84);
    puVar2[0x45] = local_14;
    puVar2[0x3f] = puVar4[9];
    puVar2[0x40] = puVar4[10];
    puVar2[0x41] = puVar4[0xb];
    iVar3 = iVar5 + 0x2fd;
    local_14 = 128.0 / (float)_Dst[0xd2] + local_14;
    puVar2[0x49] = 0x3f800000;
    puVar2[0x4a] = 0xffffffff;
    *(char *)((int)puVar2 + 299) =
         -1 - (((char)(iVar3 / 0xc) + (char)(iVar3 >> 0x1f)) -
              (char)((longlong)iVar3 * 0x2aaaaaab >> 0x3f));
    puVar2[0x4b] = *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x7c);
    puVar2[0x4c] = local_14;
    puVar2[0x46] = puVar4[0xc];
    puVar2[0x47] = puVar4[0xd];
    puVar2[0x48] = puVar4[0xe];
    puVar2[0x50] = 0x3f800000;
    iVar3 = local_10 + 0x240;
    puVar2[0x51] = 0xffffffff;
    *(char *)((int)puVar2 + 0x147) =
         -0x40 - (((char)(iVar3 / 0xc) + (char)(iVar3 >> 0x1f)) -
                 (char)((longlong)iVar3 * 0x2aaaaaab >> 0x3f));
    iVar5 = iVar5 + 0x5fa;
    puVar2[0x52] = *(float *)(param_1 + 100) + *(float *)(param_1 + 0x84);
    puVar2[0x53] = local_14;
    puVar2[0x4d] = puVar4[0xc];
    puVar2[0x4e] = puVar4[0xd];
    puVar2[0x4f] = puVar4[0xe];
    local_14 = 128.0 / (float)_Dst[0xd2] + local_14;
    local_10 = local_10 + 0x480;
    puVar2 = puVar2 + 0x54;
    puVar4 = puVar4 + 0x12;
  } while (iVar5 < 0xdf2);
  if ((_Dst[0x101] & 1) == 0) {
    _Dst[0xff] = 0;
    _Dst[0xfe] = 0;
    _Dst[0xfd] = 0xfff0bdc1;
    _Dst[0x100] = &DAT_004b2ed0;
    _Dst[0x101] = _Dst[0x101] | 1;
  }
  _Dst[0xff] = 0;
  _Dst[0xfe] = 0;
  _Dst[0xfd] = 0xffffffff;
  return 0;
}


