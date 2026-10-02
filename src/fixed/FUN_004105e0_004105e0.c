/* undefined4 __fastcall FUN_004105e0(int param_1, undefined4 * param_2) @ 004105e0  308 bytes */
#include "th12.h"

undefined4 __fastcall FUN_004105e0(int param_1,undefined4 *param_2)

{
  float fVar1;
  char cVar2;
  char cVar3;
  undefined4 *_Dst;
  int iVar4;
  char *pcVar5;
  
  _Dst = (undefined4 *)_malloc(0xd8);
  *(undefined4 **)((int)param_1 + 0x478) = _Dst;
  _memset(_Dst,0,0xd8);
  *_Dst = *param_2;
  _Dst[1] = param_2[1];
  iVar4 = FUN_00464440();
  fVar1 = (float)iVar4;
  if (iVar4 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  _Dst[0x30] = (fVar1 * 4.656613e-10 - 1.0) * 3.1415927;
  if ((_Dst[0x35] & 1) == 0) {
    _Dst[0x33] = 0;
    _Dst[0x32] = 0;
    _Dst[0x31] = 0xfff0bdc1;
    _Dst[0x34] = &DAT_004b2ed0;
    _Dst[0x35] = _Dst[0x35] | 1;
  }
  _Dst[0x32] = 1;
  _Dst[0x33] = 0x3f800000;
  _Dst[0x31] = 0;
  cVar3 = '\0';
  iVar4 = 0;
  pcVar5 = (char *)((int)_Dst + 0x20);
  do {
    pcVar5[0] = '\0';
    pcVar5[1] = -1;
    pcVar5[2] = '@';
    pcVar5[3] = -1;
    if (iVar4 < 8) {
      *pcVar5 = (char)iVar4 * -0x20 + -1;
    }
    else {
      cVar2 = cVar3 * -0x10;
      cVar3 = cVar3 + '\x01';
      pcVar5[3] = cVar2 + -1;
    }
    iVar4 = iVar4 + 1;
    pcVar5 = pcVar5 + 4;
  } while (iVar4 < 0x10);
  *(undefined4 *)((int)param_1 + 0x430) = *param_2;
  *(undefined4 *)((int)param_1 + 0x434) = param_2[1];
  *(undefined4 *)((int)param_1 + 0x438) = param_2[2];
  *(undefined4 *)((int)param_1 + 0x20) = 0xd;
  return 0;
}


