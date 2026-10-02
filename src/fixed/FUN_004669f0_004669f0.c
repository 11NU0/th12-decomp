/* int __fastcall FUN_004669f0(int param_1) @ 004669f0  223 bytes */
#include "th12.h"

int __fastcall FUN_004669f0(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  if ((**(int **)((int)unaff_EDI + 4) == 0) || (*(int *)((int)unaff_EDI + 0xc) == 0)) {
    return -0x7ffbfe10;
  }
  *(undefined4 *)((int)unaff_EDI + 0x60) = 0;
  *(undefined4 *)((int)unaff_EDI + 100) = 0;
  *(undefined4 *)((int)unaff_EDI + 0x68) = 0;
  *(undefined4 *)((int)unaff_EDI + 0x6c) = 0;
  if (**(int **)((int)unaff_EDI + 4) == 0) {
    iVar2 = -0x7ffbfe10;
  }
  else {
    iVar2 = FUN_00466220();
    if (-1 < iVar2) {
      if ((param_1 != 0) &&
         (iVar2 = FUN_00465fe0((int *)**(undefined4 **)((int)unaff_EDI + 4)), iVar2 < 0)) {
        return iVar2;
      }
      iVar2 = *(int *)((int)unaff_EDI + 0xc);
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
          iVar2 = (**(code **)(*(int *)**(undefined4 **)((int)unaff_EDI + 4) + 0x34))
                            ((int *)**(undefined4 **)((int)unaff_EDI + 4),0);
          return iVar2;
        }
      }
      iVar2 = (**(code **)(*(int *)**(undefined4 **)((int)unaff_EDI + 4) + 0x34))
                        ((int *)**(undefined4 **)((int)unaff_EDI + 4),0);
      return iVar2;
    }
  }
  return iVar2;
}


