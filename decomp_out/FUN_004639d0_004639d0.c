/* byte * __stdcall FUN_004639d0(byte * param_1, uint param_2, char param_3, uint param_4, size_t param_5) @ 004639d0  280 bytes */
#include "th12.h"

byte * FUN_004639d0(byte *param_1,uint param_2,char param_3,uint param_4,size_t param_5)

{
  byte *pbVar1;
  byte in_AL;
  byte *_Dst;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  uVar5 = param_4;
  uVar4 = (int)param_2 % (int)param_4;
  param_4 = param_2;
  if ((int)param_5 <= (int)param_2) {
    param_4 = param_5;
  }
  _Dst = (byte *)_malloc(param_4);
  if (_Dst != (byte *)0x0) {
    uVar4 = param_2 - ((param_2 & 1) +
                      (((int)(uVar5 + ((int)uVar5 >> 0x1f & 3U)) >> 2 <= (int)uVar4) - 1 & uVar4));
    _memcpy(_Dst,param_1,param_4);
    pbVar6 = _Dst;
    pbVar1 = param_1;
    for (; (0 < (int)uVar4 && (0 < (int)param_5)); param_5 = param_5 - uVar5) {
      if ((int)uVar4 < (int)uVar5) {
        uVar5 = uVar4;
      }
      pbVar1 = pbVar1 + uVar5;
      pbVar7 = pbVar1 + -1;
      for (iVar2 = (int)(uVar5 + 1) / 2; 0 < iVar2; iVar2 = iVar2 + -1) {
        bVar3 = *pbVar6 ^ in_AL;
        in_AL = in_AL + param_3;
        *pbVar7 = bVar3;
        pbVar7 = pbVar7 + -2;
        pbVar6 = pbVar6 + 1;
      }
      pbVar7 = pbVar1;
      for (iVar2 = (int)uVar5 / 2; 0 < iVar2; iVar2 = iVar2 + -1) {
        pbVar7 = pbVar7 + -2;
        bVar3 = *pbVar6 ^ in_AL;
        in_AL = in_AL + param_3;
        *pbVar7 = bVar3;
        pbVar6 = pbVar6 + 1;
      }
      uVar4 = uVar4 - uVar5;
    }
    _free(_Dst);
  }
  return param_1;
}


