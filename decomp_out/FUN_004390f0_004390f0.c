/* undefined4 * __stdcall FUN_004390f0(undefined4 * param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5) @ 004390f0  194 bytes */
#include "th12.h"

undefined4 *
FUN_004390f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  int in_EAX;
  int iVar2;
  undefined4 *_Dst;
  
  _Dst = (undefined4 *)(in_EAX + 0x8988);
  iVar2 = 0;
  do {
    if ((*(byte *)(_Dst + 0x1c) & 1) == 0) {
      _memset(_Dst,0,0x74);
      _Dst[0x1c] = _Dst[0x1c] | 3;
      _memset(_Dst + 6,0,0x34);
      _Dst[6] = *param_1;
      _Dst[7] = param_1[1];
      uVar1 = param_1[2];
      *_Dst = param_2;
      _Dst[8] = uVar1;
      _Dst[1] = param_3;
      if ((_Dst[0x17] & 1) == 0) {
        _Dst[0x15] = 0;
        _Dst[0x14] = 0;
        _Dst[0x13] = 0xfff0bdc1;
        _Dst[0x16] = &DAT_004b2ed0;
        _Dst[0x17] = _Dst[0x17] | 1;
      }
      _Dst[0x14] = param_4;
      _Dst[0x13] = param_4 + -1;
      _Dst[0x15] = (float)param_4;
      _Dst[0x18] = param_5;
      _Dst[0x19] = 0;
      _Dst[0x1a] = 999999;
      _Dst[0x1b] = 4;
      return _Dst;
    }
    iVar2 = iVar2 + 1;
    _Dst = _Dst + 0x1d;
  } while (iVar2 < 0x80);
  return _Dst;
}


