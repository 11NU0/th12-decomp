/* undefined __stdcall FUN_0043e720(void) @ 0043e720  277 bytes */

#include "th12.h"

void __stdcall FUN_0043e720(void)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *_Dst;
  int iVar4;
  char local_108 [256];
  uint uStack_8;
  uint local_4;
  
  iVar2 = DAT_004b4528;
  local_4 = DAT_004ad138 ^ (uint)local_108;
  _sprintf(local_108,"%s",
           *(undefined4 *)(*(int *)(DAT_004b4528 + 0x34) + *(int *)(DAT_004b4528 + 0x114) * 4));
  iVar4 = 0;
  if (*(int **)(iVar2 + 0x2dc) != (int *)0x0) {
    (**(code **)(**(int **)(iVar2 + 0x2dc) + 0x14))(1);
    *(undefined4 *)(iVar2 + 0x2dc) = 0;
  }
  *(undefined4 *)(iVar2 + 0x2dc) = 0;
  if (*(void **)(iVar2 + 0x2e0) != (void *)0x0) {
    _free(*(void **)(iVar2 + 0x2e0));
    *(undefined4 *)(iVar2 + 0x2e0) = 0;
  }
  pbVar3 = FUN_00463c10((size_t *)0x0,0);
  *(byte **)(iVar2 + 0x2e0) = pbVar3;
  _Dst = (undefined4 *)operator_new(0x1098);
  if (_Dst == (undefined4 *)0x0) {
    _Dst = (undefined4 *)0x0;
  }
  else {
    *_Dst = &PTR_FUN_0049fc28;
    _Dst[0x424] = 0;
    _Dst[0x425] = 0;
    _memset(_Dst,0,0x1098);
  }
  *(undefined4 **)(iVar2 + 0x2d8) = _Dst;
  (**(code **)*_Dst)(*(undefined4 *)(iVar2 + 0x2e0));
  iVar1 = *(int *)(*(int *)(iVar2 + 0x2d8) + 8);
  *(int *)(iVar2 + 500) = iVar1;
  if ((iVar1 != 0) && (iVar1 < 1)) {
    iVar4 = iVar1 + -1;
  }
  *(int *)(iVar2 + 0x1ec) = iVar4;
  *(undefined4 *)(iVar2 + 0x30) = 1;
  ___security_check_cookie_4(uStack_8 ^ (uint)&stack0xfffffef4);
  return;
}


