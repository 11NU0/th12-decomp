/* undefined __stdcall FUN_0043c730(void) @ 0043c730  396 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

typedef struct DAT_004ce568__u { undefined4 _; undefined1 _0_2_; } DAT_004ce568__u;
void __stdcall FUN_0043c730(void)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *_Dst;
  int iVar5;
  
  iVar4 = DAT_004b4518;
  if (*(int *)((int)DAT_004b4518 + 0x10) == 0) {
    _Dst = operator_new(0xa0);
    if (_Dst == (void *)0x0) {
      _Dst = (void *)0x0;
    }
    else {
      _memset(_Dst,0,0xa0);
    }
    *(void **)(iVar4 + 0x20 + DAT_004b0cb0 * 4) = _Dst;
    puVar1 = *(undefined2 **)(iVar4 + 0x20 + DAT_004b0cb0 * 4);
    puVar1[1] = (undefined2)DAT_004ce568;
    _DAT_004ce56c = 0;
    *puVar1 = (undefined2)DAT_004b0cb0;
    *(uint *)((int)puVar1 + 0x4e) =
         *(uint *)((int)puVar1 + 0x4e) ^ (*(uint *)((int)puVar1 + 0x4e) ^ DAT_004cee4c) & 1;
    return;
  }
  if (*(int *)((int)DAT_004b4518 + 0x10) == 1) {
    uVar2 = *(undefined4 *)(DAT_004b4518 + 0xb0 + DAT_004b0cb0 * 0x24);
    iVar3 = *(int *)(DAT_004b4518 + 0xb8 + DAT_004b0cb0 * 0x24);
    iVar5 = DAT_004b4518 + 0xa8 + DAT_004b0cb0 * 0x24;
    *(undefined4 *)((int)iVar5 + 4) = *(undefined4 *)(DAT_004b4518 + 0xa8 + DAT_004b0cb0 * 0x24);
    *(undefined4 *)((int)iVar5 + 0xc) = uVar2;
    *(undefined4 *)((int)iVar5 + 0x14) = 0xffffffff;
    ((DAT_004ce568__u *)&DAT_004ce568)->_0_2_ = *(undefined2 *)((int)iVar3 + 2);
    _DAT_004ce56c = 0;
    DAT_004b0c44 = *(undefined4 *)((int)iVar3 + 0xc);
    DAT_004b0c48 = (int)*(short *)((int)iVar3 + 0x10);
    iVar5 = DAT_004b0cd0;
    if ((DAT_004b0cd0 < DAT_004b0c48) || (iVar5 = DAT_004b0cd4, DAT_004b0c48 < DAT_004b0cd4)) {
      DAT_004b0c48 = iVar5;
    }
    DAT_004b0c78 = *(undefined4 *)((int)iVar3 + 0x14);
    _DAT_004b0c98 = (int)*(short *)((int)iVar3 + 0x18);
    _DAT_004b0c9c = (int)*(short *)((int)iVar3 + 0x1a);
    DAT_004b0ccc = *(undefined4 *)((int)iVar3 + 0x2c);
    DAT_004b0cc4 = *(undefined4 *)((int)iVar3 + 0x38);
    DAT_004b0cd8 = *(undefined4 *)(*(int *)(iVar4 + 0xb8 + DAT_004b0cb0 * 0x24) + 0x3c);
    _DAT_004b0ca0 = (int)*(short *)((int)iVar3 + 0x1c);
    _DAT_004b0ca4 = (int)*(short *)((int)iVar3 + 0x1e);
    DAT_004b0c54 = 0;
    DAT_004b0c50 = 0;
    DAT_004b0c4c = 0;
    DAT_004b0c58 = 0;
    DAT_004b0c5c = 0;
    FUN_00422e80();
    FUN_00422e80();
    FUN_00422e80();
  }
  return;
}


