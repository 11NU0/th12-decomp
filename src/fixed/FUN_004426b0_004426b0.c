/* undefined __stdcall FUN_004426b0(void) @ 004426b0  3777 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_004426b0(void)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  int iVar3;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 uVar4;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  undefined4 extraout_ECX_18;
  undefined4 extraout_ECX_19;
  undefined4 extraout_ECX_20;
  undefined4 extraout_ECX_21;
  undefined4 extraout_ECX_22;
  undefined4 extraout_ECX_23;
  undefined4 extraout_ECX_24;
  undefined4 extraout_ECX_25;
  undefined4 extraout_ECX_26;
  undefined4 extraout_ECX_27;
  undefined4 extraout_ECX_28;
  undefined4 extraout_ECX_29;
  undefined4 extraout_ECX_30;
  undefined4 extraout_ECX_31;
  undefined4 extraout_ECX_32;
  undefined4 extraout_ECX_33;
  undefined4 extraout_ECX_34;
  undefined4 extraout_ECX_35;
  undefined4 extraout_ECX_36;
  undefined4 extraout_ECX_37;
  undefined4 extraout_ECX_38;
  undefined4 extraout_ECX_39;
  undefined4 extraout_ECX_40;
  undefined4 extraout_ECX_41;
  undefined4 extraout_ECX_42;
  undefined4 extraout_ECX_43;
  undefined4 extraout_ECX_44;
  undefined4 extraout_ECX_45;
  undefined4 extraout_ECX_46;
  undefined4 extraout_ECX_47;
  undefined4 extraout_ECX_48;
  undefined4 extraout_ECX_49;
  undefined4 extraout_ECX_50;
  undefined4 extraout_ECX_51;
  undefined4 extraout_EDX;
  int *piVar5;
  int unaff_EBX;
  ulonglong uVar6;
  
  DAT_004d477c = (int)DAT_004cead0;
  FUN_00454960(8,0);
  DAT_004d4780 = (int)DAT_004cead1;
  if (DAT_004d4780 == 0) {
    _DAT_004d4784 = -10000;
    iVar3 = extraout_ECX;
  }
  else {
    uVar6 = FUN_004931e0(extraout_ECX,extraout_EDX);
    iVar3 = -5000 - (int)uVar6;
    _DAT_004d4784 = iVar3;
  }
  iVar1 = DAT_004ce8cc;
  piVar2 = FUN_00461920(iVar3,DAT_004ce8cc,*(int *)((int)unaff_EBX + 0x2cc));
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
  }
  for (piVar2 = piVar2 + 4; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if (*(short *)(*piVar2 + 0x3ea) == 0x1d) {
      iVar3 = *(int *)*piVar2;
      goto LAB_00442798;
    }
  }
  iVar3 = 0;
LAB_00442798:
  piVar2 = FUN_00461920(0x1d,iVar1,iVar3);
  uVar4 = extraout_ECX_00;
  if (piVar2 != (int *)0x0) {
    FUN_00454b80((int)DAT_004cead0 / 100 + 0x2c,piVar2[0xfe]);
    uVar4 = extraout_ECX_01;
  }
  piVar2 = FUN_00461920(uVar4,iVar1,*(int *)((int)unaff_EBX + 0x2cc));
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
  }
  for (piVar2 = piVar2 + 4; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if (*(short *)(*piVar2 + 0x3ea) == 0x1e) {
      iVar3 = *(int *)*piVar2;
      goto LAB_00442809;
    }
  }
  iVar3 = 0;
LAB_00442809:
  piVar2 = FUN_00461920(0x1e,iVar1,iVar3);
  uVar4 = extraout_ECX_02;
  if (piVar2 != (int *)0x0) {
    FUN_00454b80(((int)DAT_004cead0 / 10) % 10 + 0x2c,piVar2[0xfe]);
    uVar4 = extraout_ECX_03;
  }
  piVar2 = FUN_00461920(uVar4,iVar1,*(int *)((int)unaff_EBX + 0x2cc));
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
  }
  piVar2 = piVar2 + 4;
  uVar4 = extraout_ECX_04;
  if (piVar2 != (int *)0x0) {
    uVar4 = 0x1f;
    do {
      if (*(short *)(*piVar2 + 0x3ea) == 0x1f) {
        iVar3 = *(int *)*piVar2;
        goto LAB_00442888;
      }
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
  }
  iVar3 = 0;
LAB_00442888:
  piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
  uVar4 = extraout_ECX_05;
  if (piVar2 != (int *)0x0) {
    FUN_00454b80((int)DAT_004cead0 % 10 + 0x2c,piVar2[0xfe]);
    uVar4 = extraout_ECX_06;
  }
  piVar2 = FUN_00461920(uVar4,iVar1,*(int *)((int)unaff_EBX + 0x2cc));
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
  }
  for (piVar2 = piVar2 + 4; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if (*(short *)(*piVar2 + 0x3ea) == 0x21) {
      iVar3 = *(int *)*piVar2;
      goto LAB_004428f8;
    }
  }
  iVar3 = 0;
LAB_004428f8:
  piVar2 = FUN_00461920(0x21,iVar1,iVar3);
  uVar4 = extraout_ECX_07;
  if (piVar2 != (int *)0x0) {
    FUN_00454b80((int)DAT_004cead0 / 100 + 0x37,piVar2[0xfe]);
    uVar4 = extraout_ECX_08;
  }
  piVar2 = FUN_00461920(uVar4,iVar1,*(int *)((int)unaff_EBX + 0x2cc));
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
  }
  for (piVar2 = piVar2 + 4; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if (*(short *)(*piVar2 + 0x3ea) == 0x22) {
      iVar3 = *(int *)*piVar2;
      goto LAB_00442969;
    }
  }
  iVar3 = 0;
LAB_00442969:
  piVar2 = FUN_00461920(0x22,iVar1,iVar3);
  uVar4 = extraout_ECX_09;
  if (piVar2 != (int *)0x0) {
    FUN_00454b80(((int)DAT_004cead0 / 10) % 10 + 0x37,piVar2[0xfe]);
    uVar4 = extraout_ECX_10;
  }
  piVar2 = FUN_00461920(uVar4,iVar1,*(int *)((int)unaff_EBX + 0x2cc));
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
  }
  piVar2 = piVar2 + 4;
  uVar4 = extraout_ECX_11;
  if (piVar2 != (int *)0x0) {
    uVar4 = 0x23;
    do {
      if (*(short *)(*piVar2 + 0x3ea) == 0x23) {
        iVar3 = *(int *)*piVar2;
        goto LAB_004429e8;
      }
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
  }
  iVar3 = 0;
LAB_004429e8:
  piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
  uVar4 = extraout_ECX_12;
  if (piVar2 != (int *)0x0) {
    FUN_00454b80((int)DAT_004cead0 % 10 + 0x37,piVar2[0xfe]);
    uVar4 = extraout_ECX_13;
  }
  piVar2 = FUN_00461920(uVar4,iVar1,*(int *)((int)unaff_EBX + 0x2cc));
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
  }
  for (piVar2 = piVar2 + 4; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if (*(short *)(*piVar2 + 0x3ea) == 0x25) {
      iVar3 = *(int *)*piVar2;
      goto LAB_00442a58;
    }
  }
  iVar3 = 0;
LAB_00442a58:
  piVar2 = FUN_00461920(0x25,iVar1,iVar3);
  uVar4 = extraout_ECX_14;
  if (piVar2 != (int *)0x0) {
    FUN_00454b80((int)DAT_004cead1 / 100 + 0x2c,piVar2[0xfe]);
    uVar4 = extraout_ECX_15;
  }
  piVar2 = FUN_00461920(uVar4,iVar1,*(int *)((int)unaff_EBX + 0x2cc));
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
  }
  for (piVar2 = piVar2 + 4; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if (*(short *)(*piVar2 + 0x3ea) == 0x26) {
      iVar3 = *(int *)*piVar2;
      goto LAB_00442ac9;
    }
  }
  iVar3 = 0;
LAB_00442ac9:
  piVar2 = FUN_00461920(0x26,iVar1,iVar3);
  uVar4 = extraout_ECX_16;
  if (piVar2 != (int *)0x0) {
    FUN_00454b80(((int)DAT_004cead1 / 10) % 10 + 0x2c,piVar2[0xfe]);
    uVar4 = extraout_ECX_17;
  }
  piVar2 = FUN_00461920(uVar4,iVar1,*(int *)((int)unaff_EBX + 0x2cc));
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
  }
  piVar2 = piVar2 + 4;
  uVar4 = extraout_ECX_18;
  if (piVar2 != (int *)0x0) {
    uVar4 = 0x27;
    do {
      if (*(short *)(*piVar2 + 0x3ea) == 0x27) {
        iVar3 = *(int *)*piVar2;
        goto LAB_00442b48;
      }
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
  }
  iVar3 = 0;
LAB_00442b48:
  piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
  uVar4 = extraout_ECX_19;
  if (piVar2 != (int *)0x0) {
    FUN_00454b80((int)DAT_004cead1 % 10 + 0x2c,piVar2[0xfe]);
    uVar4 = extraout_ECX_20;
  }
  piVar2 = FUN_00461920(uVar4,iVar1,*(int *)((int)unaff_EBX + 0x2cc));
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
  }
  for (piVar2 = piVar2 + 4; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if (*(short *)(*piVar2 + 0x3ea) == 0x29) {
      iVar3 = *(int *)*piVar2;
      goto LAB_00442bb8;
    }
  }
  iVar3 = 0;
LAB_00442bb8:
  piVar2 = FUN_00461920(0x29,iVar1,iVar3);
  uVar4 = extraout_ECX_21;
  if (piVar2 != (int *)0x0) {
    FUN_00454b80((int)DAT_004cead1 / 100 + 0x37,piVar2[0xfe]);
    uVar4 = extraout_ECX_22;
  }
  piVar2 = FUN_00461920(uVar4,iVar1,*(int *)((int)unaff_EBX + 0x2cc));
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
  }
  for (piVar2 = piVar2 + 4; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if (*(short *)(*piVar2 + 0x3ea) == 0x2a) {
      iVar3 = *(int *)*piVar2;
      goto LAB_00442c29;
    }
  }
  iVar3 = 0;
LAB_00442c29:
  piVar2 = FUN_00461920(0x2a,iVar1,iVar3);
  uVar4 = extraout_ECX_23;
  if (piVar2 != (int *)0x0) {
    FUN_00454b80(((int)DAT_004cead1 / 10) % 10 + 0x37,piVar2[0xfe]);
    uVar4 = extraout_ECX_24;
  }
  piVar2 = FUN_00461920(uVar4,iVar1,*(int *)((int)unaff_EBX + 0x2cc));
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
  }
  piVar2 = piVar2 + 4;
  uVar4 = extraout_ECX_25;
  if (piVar2 != (int *)0x0) {
    uVar4 = 0x2b;
    do {
      if (*(short *)(*piVar2 + 0x3ea) == 0x2b) {
        iVar3 = *(int *)*piVar2;
        goto LAB_00442ca8;
      }
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
  }
  iVar3 = 0;
LAB_00442ca8:
  piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
  uVar4 = extraout_ECX_26;
  if (piVar2 != (int *)0x0) {
    FUN_00454b80((int)DAT_004cead1 % 10 + 0x37,piVar2[0xfe]);
    uVar4 = extraout_ECX_27;
  }
  if ('\t' < DAT_004cead0) {
    uVar4 = *(undefined4 *)((int)unaff_EBX + 0x2cc);
    if (DAT_004cead0 < 'd') {
      piVar2 = FUN_00461920(uVar4,iVar1,uVar4);
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
      }
      piVar2 = piVar2 + 4;
      uVar4 = extraout_ECX_32;
      if (piVar2 != (int *)0x0) {
        uVar4 = 0x1d;
        do {
          if (*(short *)(*piVar2 + 0x3ea) == 0x1d) {
            iVar3 = *(int *)*piVar2;
            goto LAB_00442f08;
          }
          piVar2 = (int *)piVar2[1];
        } while (piVar2 != (int *)0x0);
      }
      iVar3 = 0;
LAB_00442f08:
      piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
      piVar2[0x11f] = piVar2[0x11f] & 0xfffffffd;
      piVar2 = FUN_00461920(*(undefined4 *)((int)unaff_EBX + 0x2cc),iVar1,
                            *(undefined4 *)((int)unaff_EBX + 0x2cc));
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
      }
      piVar2 = piVar2 + 4;
      uVar4 = extraout_ECX_33;
      if (piVar2 != (int *)0x0) {
        uVar4 = 0x1e;
        do {
          if (*(short *)(*piVar2 + 0x3ea) == 0x1e) {
            iVar3 = *(int *)*piVar2;
            goto LAB_00442f58;
          }
          piVar2 = (int *)piVar2[1];
        } while (piVar2 != (int *)0x0);
      }
      iVar3 = 0;
LAB_00442f58:
      piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
      piVar2[0x11f] = piVar2[0x11f] | 2;
      piVar2 = FUN_00461920(*(undefined4 *)((int)unaff_EBX + 0x2cc),iVar1,
                            *(undefined4 *)((int)unaff_EBX + 0x2cc));
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
      }
      piVar2 = piVar2 + 4;
      uVar4 = extraout_ECX_34;
      if (piVar2 != (int *)0x0) {
        uVar4 = 0x21;
        do {
          if (*(short *)(*piVar2 + 0x3ea) == 0x21) {
            iVar3 = *(int *)*piVar2;
            goto LAB_00442fa8;
          }
          piVar2 = (int *)piVar2[1];
        } while (piVar2 != (int *)0x0);
      }
      iVar3 = 0;
LAB_00442fa8:
      piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
      piVar2[0x11f] = piVar2[0x11f] & 0xfffffffd;
      piVar2 = FUN_00461920(*(undefined4 *)((int)unaff_EBX + 0x2cc),iVar1,
                            *(undefined4 *)((int)unaff_EBX + 0x2cc));
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
      }
      piVar2 = piVar2 + 4;
      uVar4 = extraout_ECX_35;
      if (piVar2 != (int *)0x0) {
        uVar4 = 0x22;
        do {
          piVar5 = (int *)*piVar2;
          if (*(short *)((int)piVar5 + 0x3ea) == 0x22) goto LAB_004432c3;
          piVar2 = (int *)piVar2[1];
        } while (piVar2 != (int *)0x0);
      }
    }
    else {
      piVar2 = FUN_00461920(uVar4,iVar1,uVar4);
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
      }
      piVar2 = piVar2 + 4;
      uVar4 = extraout_ECX_40;
      if (piVar2 != (int *)0x0) {
        uVar4 = 0x1d;
        do {
          if (*(short *)(*piVar2 + 0x3ea) == 0x1d) {
            iVar3 = *(int *)*piVar2;
            goto LAB_004431b8;
          }
          piVar2 = (int *)piVar2[1];
        } while (piVar2 != (int *)0x0);
      }
      iVar3 = 0;
LAB_004431b8:
      piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
      piVar2[0x11f] = piVar2[0x11f] | 2;
      piVar2 = FUN_00461920(*(undefined4 *)((int)unaff_EBX + 0x2cc),iVar1,
                            *(undefined4 *)((int)unaff_EBX + 0x2cc));
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
      }
      piVar2 = piVar2 + 4;
      uVar4 = extraout_ECX_41;
      if (piVar2 != (int *)0x0) {
        uVar4 = 0x1e;
        do {
          if (*(short *)(*piVar2 + 0x3ea) == 0x1e) {
            iVar3 = *(int *)*piVar2;
            goto LAB_00443208;
          }
          piVar2 = (int *)piVar2[1];
        } while (piVar2 != (int *)0x0);
      }
      iVar3 = 0;
LAB_00443208:
      piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
      piVar2[0x11f] = piVar2[0x11f] | 2;
      piVar2 = FUN_00461920(*(undefined4 *)((int)unaff_EBX + 0x2cc),iVar1,
                            *(undefined4 *)((int)unaff_EBX + 0x2cc));
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
      }
      piVar2 = piVar2 + 4;
      uVar4 = extraout_ECX_42;
      if (piVar2 != (int *)0x0) {
        uVar4 = 0x21;
        do {
          if (*(short *)(*piVar2 + 0x3ea) == 0x21) {
            iVar3 = *(int *)*piVar2;
            goto LAB_00443258;
          }
          piVar2 = (int *)piVar2[1];
        } while (piVar2 != (int *)0x0);
      }
      iVar3 = 0;
LAB_00443258:
      piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
      piVar2[0x11f] = piVar2[0x11f] | 2;
      piVar2 = FUN_00461920(*(undefined4 *)((int)unaff_EBX + 0x2cc),iVar1,
                            *(undefined4 *)((int)unaff_EBX + 0x2cc));
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
      }
      piVar2 = piVar2 + 4;
      uVar4 = extraout_ECX_43;
      if (piVar2 != (int *)0x0) {
        uVar4 = 0x22;
        do {
          piVar5 = (int *)*piVar2;
          if (*(short *)((int)piVar5 + 0x3ea) == 0x22) goto LAB_004432c3;
          piVar2 = (int *)piVar2[1];
        } while (piVar2 != (int *)0x0);
      }
    }
    iVar3 = 0;
    goto LAB_00442ff8;
  }
  piVar2 = FUN_00461920(uVar4,iVar1,*(int *)((int)unaff_EBX + 0x2cc));
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
  }
  piVar2 = piVar2 + 4;
  uVar4 = extraout_ECX_28;
  if (piVar2 != (int *)0x0) {
    uVar4 = 0x1d;
    do {
      if (*(short *)(*piVar2 + 0x3ea) == 0x1d) {
        iVar3 = *(int *)*piVar2;
        goto LAB_00442d28;
      }
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
  }
  iVar3 = 0;
LAB_00442d28:
  piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
  piVar2[0x11f] = piVar2[0x11f] & 0xfffffffd;
  piVar2 = FUN_00461920(*(undefined4 *)((int)unaff_EBX + 0x2cc),iVar1,*(undefined4 *)((int)unaff_EBX + 0x2cc))
  ;
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
  }
  piVar2 = piVar2 + 4;
  uVar4 = extraout_ECX_29;
  if (piVar2 != (int *)0x0) {
    uVar4 = 0x1e;
    do {
      if (*(short *)(*piVar2 + 0x3ea) == 0x1e) {
        iVar3 = *(int *)*piVar2;
        goto LAB_00442d78;
      }
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
  }
  iVar3 = 0;
LAB_00442d78:
  piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
  piVar2[0x11f] = piVar2[0x11f] & 0xfffffffd;
  piVar2 = FUN_00461920(*(undefined4 *)((int)unaff_EBX + 0x2cc),iVar1,*(undefined4 *)((int)unaff_EBX + 0x2cc))
  ;
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
  }
  piVar2 = piVar2 + 4;
  uVar4 = extraout_ECX_30;
  if (piVar2 != (int *)0x0) {
    uVar4 = 0x21;
    do {
      if (*(short *)(*piVar2 + 0x3ea) == 0x21) {
        iVar3 = *(int *)*piVar2;
        goto LAB_00442dc8;
      }
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
  }
  iVar3 = 0;
LAB_00442dc8:
  piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
  piVar2[0x11f] = piVar2[0x11f] & 0xfffffffd;
  piVar2 = FUN_00461920(*(undefined4 *)((int)unaff_EBX + 0x2cc),iVar1,*(undefined4 *)((int)unaff_EBX + 0x2cc))
  ;
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
  }
  piVar2 = piVar2 + 4;
  uVar4 = extraout_ECX_31;
  if (piVar2 != (int *)0x0) {
    uVar4 = 0x22;
    do {
      if (*(short *)(*piVar2 + 0x3ea) == 0x22) {
        iVar3 = *(int *)*piVar2;
        goto LAB_00442e18;
      }
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
  }
  iVar3 = 0;
LAB_00442e18:
  piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
  piVar2[0x11f] = piVar2[0x11f] & 0xfffffffd;
LAB_00443008:
  uVar4 = *(undefined4 *)((int)unaff_EBX + 0x2cc);
  if (DAT_004cead1 < '\n') {
    piVar2 = FUN_00461920(uVar4,iVar1,uVar4);
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
    }
    piVar2 = piVar2 + 4;
    uVar4 = extraout_ECX_36;
    if (piVar2 != (int *)0x0) {
      uVar4 = 0x25;
      do {
        if (*(short *)(*piVar2 + 0x3ea) == 0x25) {
          iVar3 = *(int *)*piVar2;
          goto LAB_00443058;
        }
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)0x0);
    }
    iVar3 = 0;
LAB_00443058:
    piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
    piVar2[0x11f] = piVar2[0x11f] & 0xfffffffd;
    piVar2 = FUN_00461920(*(undefined4 *)((int)unaff_EBX + 0x2cc),iVar1,
                          *(undefined4 *)((int)unaff_EBX + 0x2cc));
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
    }
    piVar2 = piVar2 + 4;
    uVar4 = extraout_ECX_37;
    if (piVar2 != (int *)0x0) {
      uVar4 = 0x26;
      do {
        if (*(short *)(*piVar2 + 0x3ea) == 0x26) {
          iVar3 = *(int *)*piVar2;
          goto LAB_004430a8;
        }
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)0x0);
    }
    iVar3 = 0;
LAB_004430a8:
    piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
    piVar2[0x11f] = piVar2[0x11f] & 0xfffffffd;
    piVar2 = FUN_00461920(*(undefined4 *)((int)unaff_EBX + 0x2cc),iVar1,
                          *(undefined4 *)((int)unaff_EBX + 0x2cc));
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
    }
    piVar2 = piVar2 + 4;
    uVar4 = extraout_ECX_38;
    if (piVar2 != (int *)0x0) {
      uVar4 = 0x29;
      do {
        if (*(short *)(*piVar2 + 0x3ea) == 0x29) {
          iVar3 = *(int *)*piVar2;
          goto LAB_004430f8;
        }
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)0x0);
    }
    iVar3 = 0;
LAB_004430f8:
    piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
    piVar2[0x11f] = piVar2[0x11f] & 0xfffffffd;
    piVar2 = FUN_00461920(*(undefined4 *)((int)unaff_EBX + 0x2cc),iVar1,
                          *(undefined4 *)((int)unaff_EBX + 0x2cc));
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
    }
    piVar2 = piVar2 + 4;
    uVar4 = extraout_ECX_39;
    if (piVar2 != (int *)0x0) {
      uVar4 = 0x2a;
      do {
        if (*(short *)(*piVar2 + 0x3ea) == 0x2a) {
          iVar3 = *(int *)*piVar2;
          goto LAB_00443148;
        }
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)0x0);
    }
    iVar3 = 0;
LAB_00443148:
    piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
    piVar2[0x11f] = piVar2[0x11f] & 0xfffffffd;
    return;
  }
  if (DAT_004cead1 < 'd') {
    piVar2 = FUN_00461920(uVar4,iVar1,uVar4);
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
    }
    piVar2 = piVar2 + 4;
    uVar4 = extraout_ECX_44;
    if (piVar2 != (int *)0x0) {
      uVar4 = 0x25;
      do {
        if (*(short *)(*piVar2 + 0x3ea) == 0x25) {
          iVar3 = *(int *)*piVar2;
          goto LAB_00443338;
        }
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)0x0);
    }
    iVar3 = 0;
LAB_00443338:
    piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
    piVar2[0x11f] = piVar2[0x11f] & 0xfffffffd;
    piVar2 = FUN_00461920(*(undefined4 *)((int)unaff_EBX + 0x2cc),iVar1,
                          *(undefined4 *)((int)unaff_EBX + 0x2cc));
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
    }
    piVar2 = piVar2 + 4;
    uVar4 = extraout_ECX_45;
    if (piVar2 != (int *)0x0) {
      uVar4 = 0x26;
      do {
        if (*(short *)(*piVar2 + 0x3ea) == 0x26) {
          iVar3 = *(int *)*piVar2;
          goto LAB_00443388;
        }
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)0x0);
    }
    iVar3 = 0;
LAB_00443388:
    piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
    piVar2[0x11f] = piVar2[0x11f] | 2;
    piVar2 = FUN_00461920(*(undefined4 *)((int)unaff_EBX + 0x2cc),iVar1,
                          *(undefined4 *)((int)unaff_EBX + 0x2cc));
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
    }
    piVar2 = piVar2 + 4;
    uVar4 = extraout_ECX_46;
    if (piVar2 != (int *)0x0) {
      uVar4 = 0x29;
      do {
        if (*(short *)(*piVar2 + 0x3ea) == 0x29) {
          iVar3 = *(int *)*piVar2;
          goto LAB_004433d8;
        }
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)0x0);
    }
    iVar3 = 0;
LAB_004433d8:
    piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
    piVar2[0x11f] = piVar2[0x11f] & 0xfffffffd;
    piVar2 = FUN_00461920(*(undefined4 *)((int)unaff_EBX + 0x2cc),iVar1,
                          *(undefined4 *)((int)unaff_EBX + 0x2cc));
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
    }
    piVar2 = piVar2 + 4;
    uVar4 = extraout_ECX_47;
    if (piVar2 != (int *)0x0) {
      uVar4 = 0x2a;
      do {
        piVar5 = (int *)*piVar2;
        if (*(short *)((int)piVar5 + 0x3ea) == 0x2a) goto LAB_004435a3;
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)0x0);
    }
  }
  else {
    piVar2 = FUN_00461920(uVar4,iVar1,uVar4);
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
    }
    piVar2 = piVar2 + 4;
    uVar4 = extraout_ECX_48;
    if (piVar2 != (int *)0x0) {
      uVar4 = 0x25;
      do {
        if (*(short *)(*piVar2 + 0x3ea) == 0x25) {
          iVar3 = *(int *)*piVar2;
          goto LAB_00443488;
        }
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)0x0);
    }
    iVar3 = 0;
LAB_00443488:
    piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
    piVar2[0x11f] = piVar2[0x11f] | 2;
    piVar2 = FUN_00461920(*(undefined4 *)((int)unaff_EBX + 0x2cc),iVar1,
                          *(undefined4 *)((int)unaff_EBX + 0x2cc));
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
    }
    piVar2 = piVar2 + 4;
    uVar4 = extraout_ECX_49;
    if (piVar2 != (int *)0x0) {
      uVar4 = 0x26;
      do {
        if (*(short *)(*piVar2 + 0x3ea) == 0x26) {
          iVar3 = *(int *)*piVar2;
          goto LAB_004434d8;
        }
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)0x0);
    }
    iVar3 = 0;
LAB_004434d8:
    piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
    piVar2[0x11f] = piVar2[0x11f] | 2;
    piVar2 = FUN_00461920(*(undefined4 *)((int)unaff_EBX + 0x2cc),iVar1,
                          *(undefined4 *)((int)unaff_EBX + 0x2cc));
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
    }
    piVar2 = piVar2 + 4;
    uVar4 = extraout_ECX_50;
    if (piVar2 != (int *)0x0) {
      uVar4 = 0x29;
      do {
        if (*(short *)(*piVar2 + 0x3ea) == 0x29) {
          iVar3 = *(int *)*piVar2;
          goto LAB_00443528;
        }
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)0x0);
    }
    iVar3 = 0;
LAB_00443528:
    piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
    piVar2[0x11f] = piVar2[0x11f] | 2;
    piVar2 = FUN_00461920(*(undefined4 *)((int)unaff_EBX + 0x2cc),iVar1,
                          *(undefined4 *)((int)unaff_EBX + 0x2cc));
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)((int)unaff_EBX + 0x2cc) = 0;
    }
    piVar2 = piVar2 + 4;
    uVar4 = extraout_ECX_51;
    if (piVar2 != (int *)0x0) {
      uVar4 = 0x2a;
      do {
        piVar5 = (int *)*piVar2;
        if (*(short *)((int)piVar5 + 0x3ea) == 0x2a) goto LAB_004435a3;
        piVar2 = (int *)piVar2[1];
      } while (piVar2 != (int *)0x0);
    }
  }
  iVar3 = 0;
LAB_00443428:
  piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
  piVar2[0x11f] = piVar2[0x11f] | 2;
  return;
LAB_004432c3:
  uVar4 = 0x22;
  iVar3 = *piVar5;
LAB_00442ff8:
  piVar2 = FUN_00461920(uVar4,iVar1,iVar3);
  piVar2[0x11f] = piVar2[0x11f] | 2;
  goto LAB_00443008;
LAB_004435a3:
  uVar4 = 0x2a;
  iVar3 = *piVar5;
  goto LAB_00443428;
}


