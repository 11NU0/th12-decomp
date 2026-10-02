/* undefined4 __fastcall FUN_0046a250(int param_1, undefined4 * param_2) @ 0046a250  170 bytes */

#include "th12.h"

undefined4 __fastcall FUN_0046a250(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *_Dst;
  
  _Dst = (undefined4 *)_malloc(0x30);
  *(undefined4 **)(param_1 + 0x478) = _Dst;
  _memset(_Dst,0,0x30);
  _Dst[9] = 0;
  _Dst[8] = 0;
  _Dst[10] = 0x41900000;
  _Dst[0xb] = 0xc1900000;
  *_Dst = *param_2;
  _Dst[1] = param_2[1];
  _Dst[2] = param_2[2];
  if ((_Dst[7] & 1) == 0) {
    _Dst[5] = 0;
    _Dst[4] = 0;
    _Dst[3] = 0xfff0bdc1;
    _Dst[6] = &DAT_004b2ed0;
    _Dst[7] = _Dst[7] | 1;
  }
  _Dst[5] = 0;
  _Dst[4] = 0;
  _Dst[3] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x430) = *_Dst;
  *(undefined4 *)(param_1 + 0x434) = _Dst[1];
  uVar1 = _Dst[2];
  *(uint *)(param_1 + 0x47c) = *(uint *)(param_1 + 0x47c) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0x438) = uVar1;
  return 0;
}


