/* undefined4 __fastcall FUN_00410720(int param_1, float * param_2) @ 00410720  187 bytes */

#include "th12.h"

undefined4 __fastcall FUN_00410720(int param_1,float *param_2)

{
  float *_Dst;
  
  _Dst = (float *)_malloc(0x2c);
  *(float **)(param_1 + 0x478) = _Dst;
  _memset(_Dst,0,0x2c);
  *_Dst = *param_2 + 32.0 + 192.0;
  _Dst[1] = param_2[1] + 16.0;
  _Dst[2] = param_2[2];
  if (((uint)_Dst[7] & 1) == 0) {
    _Dst[5] = 0.0;
    _Dst[4] = 0.0;
    _Dst[3] = -NAN;
    _Dst[6] = (float)&DAT_004b2ed0;
    _Dst[7] = (float)((uint)_Dst[7] | 1);
  }
  _Dst[5] = 0.0;
  _Dst[4] = 0.0;
  _Dst[3] = -NAN;
  _Dst[8] = 128.0;
  _Dst[9] = 7.96875;
  _Dst[10] = 2.3418409e-38;
  *(float *)(param_1 + 0x430) = *_Dst;
  *(float *)(param_1 + 0x434) = _Dst[1];
  *(float *)(param_1 + 0x438) = _Dst[2];
  *(undefined4 *)(param_1 + 0x20) = 0xd;
  return 0;
}


