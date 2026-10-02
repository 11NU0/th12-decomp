/* undefined __stdcall FUN_004057e0(void) @ 004057e0  161 bytes */
#include "th12.h"

void __stdcall FUN_004057e0(void)

{
  int iVar1;
  uint *_Dst;
  
  iVar1 = DAT_004b43bc;
  _Dst = (uint *)operator_new(0x44);
  if (_Dst != (uint *)0x0) {
    _Dst[0x10] = _Dst[0x10] & 0xfffffffe;
    _memset(_Dst,0,0x44);
    *_Dst = *_Dst | 2;
    FUN_00452a60((int)_Dst,2,0x1e,0,0,0);
  }
  if ((*(uint *)((int)iVar1 + 0x35d0) & 1) == 0) {
    *(undefined4 *)((int)iVar1 + 0x35c8) = 0;
    *(undefined4 *)((int)iVar1 + 0x35c4) = 0;
    *(undefined4 *)((int)iVar1 + 0x35c0) = 0xfff0bdc1;
    *(undefined4 **)((int)iVar1 + 0x35cc) = &DAT_004b2ed0;
    *(uint *)((int)iVar1 + 0x35d0) = *(uint *)((int)iVar1 + 0x35d0) | 1;
  }
  *(undefined4 *)((int)iVar1 + 0x35c4) = 0x1e;
  *(undefined4 *)((int)iVar1 + 0x35c8) = 0x41f00000;
  *(undefined4 *)((int)iVar1 + 0x35c0) = 0x1d;
  *(uint *)((int)iVar1 + 0x35bc) = *(uint *)((int)iVar1 + 0x35bc) | 2;
  return;
}


