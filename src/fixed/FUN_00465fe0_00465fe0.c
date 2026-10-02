/* int __stdcall FUN_00465fe0(int * param_1) @ 00465fe0  570 bytes */
#include "th12.h"

/* WARNING: Removing unreachable block (ram,0x00466026) */
/* WARNING: Removing unreachable block (ram,0x00466030) */
/* WARNING: Removing unreachable block (ram,0x00466040) */
/* WARNING: Removing unreachable block (ram,0x00466044) */
/* WARNING: Removing unreachable block (ram,0x00466128) */
/* WARNING: Removing unreachable block (ram,0x004661cb) */
/* WARNING: Removing unreachable block (ram,0x00466133) */
/* WARNING: Removing unreachable block (ram,0x0046615d) */
/* WARNING: Removing unreachable block (ram,0x004661bd) */
/* WARNING: Removing unreachable block (ram,0x00466167) */
/* WARNING: Removing unreachable block (ram,0x0046613c) */
/* WARNING: Removing unreachable block (ram,0x00466155) */
/* WARNING: Removing unreachable block (ram,0x0046618e) */
/* WARNING: Removing unreachable block (ram,0x004661ad) */
/* WARNING: Removing unreachable block (ram,0x004661bb) */

int __stdcall FUN_00465fe0(int *param_1)

{
  undefined4 stack0xffffffec;
  int iVar1;
  int iVar2;
  int unaff_EBX;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined local_4 [4];
  
  if (param_1 == (int *)0x0) {
    return -0x7ffbfe10;
  }
  iVar2 = (**(code **)(*param_1 + 0x24))();
  if (-1 < iVar2) {
    uStack_2c = 0;
    puStack_30 = local_4;
    iVar2 = (**(code **)(*param_1 + 0x2c))(param_1,0,*(undefined4 *)((int)unaff_EBX + 8));
    if (-1 < iVar2) {
      iVar2 = *(int *)((int)unaff_EBX + 0xc);
      if (*(int *)((int)iVar2 + 0x7c) == 0) {
        if (*(HANDLE *)((int)iVar2 + 0x8c) != (HANDLE)0x0) {
          SetFilePointer(*(HANDLE *)((int)iVar2 + 0x8c),
                         *(int *)(*(int *)((int)iVar2 + 0x90) + 0x10) + DAT_004d4760,(PLONG)0x0,0);
          *(undefined4 *)((int)iVar2 + 8) = *(undefined4 *)(*(int *)((int)iVar2 + 0x90) + 0x1c);
        }
      }
      else {
        *(undefined4 *)((int)iVar2 + 0x84) = *(undefined4 *)((int)iVar2 + 0x80);
        iVar1 = *(int *)(*(int *)((int)iVar2 + 0x90) + 0x1c);
        if (0 < iVar1) {
          *(int *)((int)iVar2 + 0x88) = iVar1;
        }
      }
      iVar2 = FUN_00466d70(&stack0xffffffec,(size_t *)&puStack_30);
      if (-1 < iVar2) {
        if (puStack_30 == (undefined *)0x0) {
          _memset(&stack0xffffffec,
                  (*(short *)(*(int *)(*(int *)((int)unaff_EBX + 0xc) + 0x90) + 0x2e) != 8) - 1 & 0x80,0)
          ;
        }
        (**(code **)(*param_1 + 0x4c))(param_1,&stack0xffffffec,0,0,0);
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}


