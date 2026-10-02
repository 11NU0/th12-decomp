/* undefined4 __stdcall FUN_0040db40(void) @ 0040db40  514 bytes */
#include "th12.h"

undefined4 __stdcall FUN_0040db40(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *extraout_ECX;
  void *pvVar6;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  int unaff_EDI;
  
  if ((*(byte *)((int)unaff_EDI + 0x7c) & 1) != 0) {
    *(int *)((int)unaff_EDI + 0x90) = *(int *)((int)unaff_EDI + 0x90) + 1;
    if (0x3b < *(int *)((int)unaff_EDI + 0x28)) {
      *(uint *)((int)DAT_004b43c0 + 0x35bc) = *(uint *)((int)DAT_004b43c0 + 0x35bc) & 0xfffffffe;
    }
    if ((299 < *(int *)((int)unaff_EDI + 0x28)) && ((*(byte *)((int)unaff_EDI + 0x7c) & 8) == 0)) {
      iVar5 = *(int *)((int)unaff_EDI + 0x84);
      iVar5 = *(int *)((int)unaff_EDI + 0x80) -
              (iVar5 - ((int)((iVar5 >> 0x1f & 3U) + iVar5) >> 2)) /
              (*(int *)((int)unaff_EDI + 0x88) + -300);
      *(int *)((int)unaff_EDI + 0x80) = iVar5 - iVar5 % 10;
    }
    FUN_00464a80();
    pvVar6 = extraout_ECX;
    if (0x77 < *(int *)((int)unaff_EDI + 0x28)) {
      if ((*(byte *)((int)unaff_EDI + 0x7c) & 4) == 0) {
        pvVar6 = extraout_ECX;
        if (*(float *)((int)DAT_004b4514 + 0x980) < 96.0) {
          piVar4 = (int *)((int)unaff_EDI + 0x14);
          iVar5 = 3;
          pvVar6 = extraout_ECX;
          do {
            FUN_00461970(pvVar6,*piVar4);
            piVar4 = piVar4 + 1;
            iVar5 = iVar5 + -1;
            pvVar6 = extraout_ECX_00;
          } while (iVar5 != 0);
          *(uint *)((int)unaff_EDI + 0x7c) = *(uint *)((int)unaff_EDI + 0x7c) | 4;
          pvVar6 = extraout_ECX_00;
        }
      }
      else {
        pvVar6 = DAT_004b4514;
        if (128.0 < *(float *)((int)DAT_004b4514 + 0x980) !=
            NANP(*(float *)((int)DAT_004b4514 + 0x980))) {
          piVar4 = (int *)((int)unaff_EDI + 0x14);
          iVar5 = 3;
          do {
            FUN_00461970(pvVar6,*piVar4);
            piVar4 = piVar4 + 1;
            iVar5 = iVar5 + -1;
            pvVar6 = extraout_ECX_01;
          } while (iVar5 != 0);
          *(uint *)((int)unaff_EDI + 0x7c) = *(uint *)((int)unaff_EDI + 0x7c) & 0xfffffffb;
        }
      }
    }
    iVar3 = DAT_004ce8cc;
    iVar5 = *(int *)((int)DAT_004b43dc + 0x1c);
    fVar1 = *(float *)((int)iVar5 + 0x1078);
    fVar2 = *(float *)((int)iVar5 + 0x107c);
    *(float *)((int)unaff_EDI + 0xac) =
         *(float *)((int)unaff_EDI + 0xac) +
         (*(float *)((int)iVar5 + 0x1074) - *(float *)((int)unaff_EDI + 0xac)) * 0.05;
    *(float *)((int)unaff_EDI + 0xb0) =
         *(float *)((int)unaff_EDI + 0xb0) + (fVar1 - *(float *)((int)unaff_EDI + 0xb0)) * 0.05;
    *(float *)((int)unaff_EDI + 0xb4) =
         *(float *)((int)unaff_EDI + 0xb4) + (fVar2 - *(float *)((int)unaff_EDI + 0xb4)) * 0.05;
    piVar4 = FUN_00461920(pvVar6,iVar3,*(int *)((int)unaff_EDI + 0x20));
    if (piVar4 != (int *)0x0) {
      piVar4[0x10c] = (int)(*(float *)((int)unaff_EDI + 0xac) + 32.0 + 192.0);
      piVar4[0x10d] = (int)(*(float *)((int)unaff_EDI + 0xb0) + 16.0);
      piVar4[0x10e] = *(int *)((int)unaff_EDI + 0xb4);
    }
    if (((*(uint *)((int)unaff_EDI + 0x7c) & 0x20) != 0) && (*(int *)((int)DAT_004b43c4 + 0x3c) == 0)) {
      *(uint *)((int)unaff_EDI + 0x7c) = *(uint *)((int)unaff_EDI + 0x7c) & 0xffffffdf;
    }
  }
  return 1;
}


