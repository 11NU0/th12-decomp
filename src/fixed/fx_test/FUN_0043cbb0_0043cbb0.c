/* undefined __stdcall FUN_0043cbb0(void) @ 0043cbb0  150 bytes */

#include "th12.h"

void __stdcall FUN_0043cbb0(void)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  int unaff_EBX;
  int unaff_EDI;
  
  _Dst = operator_new(0x18b0);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    _memset(_Dst,0,0x18b0);
    *(void **)((int)_Dst + 0x1518) = _Dst;
    *(int *)((int)_Dst + 0x18a0) = (int)_Dst + 0x151c;
    *(void **)((int)_Dst + 0x18a4) = _Dst;
    *(undefined4 *)((int)_Dst + 0x18a8) = 0;
    *(undefined4 *)((int)_Dst + 0x18ac) = 0;
  }
  iVar1 = unaff_EBX + 0x40 + unaff_EDI * 0xc;
  iVar2 = *(int *)(unaff_EBX + 0x44 + unaff_EDI * 0xc);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar1 + 4);
    iVar2 = *(int *)(iVar1 + 4);
  }
  if (*(int *)(iVar1 + 4) != 0) {
    *(int *)((int)_Dst + 0x18a8) = *(int *)(iVar1 + 4);
    *(int *)(*(int *)(iVar1 + 4) + 8) = (int)_Dst + 0x18a4;
  }
  *(int *)(iVar1 + 4) = (int)_Dst + 0x18a4;
  *(int *)((int)_Dst + 0x18ac) = iVar1;
  *(int *)(unaff_EBX + 0xa4) = *(int *)(unaff_EBX + 0xa4) + 1;
  return;
}


