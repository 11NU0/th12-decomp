/* undefined8 __fastcall FUN_0041e020(int param_1, short * param_2) @ 0041e020  3899 bytes */
#include "th12.h"

typedef struct local_10__u { undefined4 _; undefined1 _2_2_; } local_10__u;
undefined8 __fastcall FUN_0041e020(int param_1,short *param_2)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  uint *_Dst;
  int *piVar4;
  uint uVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  undefined4 uVar6;
  undefined4 extraout_ECX_10;
  int *extraout_ECX_11;
  int *extraout_ECX_12;
  int *extraout_ECX_13;
  int *extraout_ECX_14;
  int *extraout_ECX_15;
  int *extraout_ECX_16;
  uint extraout_ECX_17;
  uint extraout_ECX_18;
  uint extraout_ECX_19;
  short *extraout_EDX;
  short *extraout_EDX_00;
  short *extraout_EDX_01;
  short *extraout_EDX_02;
  short *extraout_EDX_03;
  short *extraout_EDX_04;
  short *extraout_EDX_05;
  short *extraout_EDX_06;
  short *psVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  float *pfVar12;
  int unaff_EDI;
  bool bVar13;
  bool bVar14;
  undefined2 in_FPUControlWord;
  ulonglong uVar15;
  longlong lVar16;
  int *local_10;
  float local_c [2];
  
  if ((*(uint *)((int)unaff_EDI + 0x6d18) & 0x200) != 0) {
    uVar15 = FUN_00464a80();
    param_2 = (short *)(uVar15 >> 0x20);
    param_1 = extraout_ECX;
  }
  if ((*(byte *)((int)unaff_EDI + 0x6d18) & 0x10) != 0) {
    *(int *)((int)unaff_EDI + 0x6d4c) = *(int *)((int)unaff_EDI + 0x6d4c) + 1;
    if ((*(int *)((int)unaff_EDI + 0x6d4c) == 0xb4) &&
       (_Dst = (uint *)operator_new(0x44), param_1 = extraout_ECX_00, param_2 = extraout_EDX,
       _Dst != (uint *)0x0)) {
      _Dst[0x10] = _Dst[0x10] & 0xfffffffe;
      _memset(_Dst,0,0x44);
      *_Dst = *_Dst | 2;
      FUN_00452a60((int)_Dst,5,200,0,0,0);
      param_1 = extraout_ECX_01;
      param_2 = extraout_EDX_00;
    }
    if (0x17b < *(int *)((int)unaff_EDI + 0x6d4c)) {
      if (*(int *)((int)DAT_004b44e8 + 0x74) == 0) {
        param_1 = (-(uint)((DAT_004cee78 & 0x2000) != 0) & 0xfffffff3) + 0xf;
        DAT_004cee40 = param_1;
      }
      else {
        FUN_00432850();
        param_1 = extraout_ECX_02;
        param_2 = extraout_EDX_01;
      }
    }
  }
  if ((*(int *)((int)unaff_EDI + 0x6cb8) != 0) &&
     (piVar4 = FUN_00461920(param_1,DAT_004ce8cc,*(int *)((int)unaff_EDI + 0x6cb4)),
     param_1 = extraout_ECX_03, param_2 = extraout_EDX_02, piVar4 == (int *)0x0)) {
    *(undefined4 *)((int)unaff_EDI + 0x6cb4) = 0;
    *(undefined4 *)((int)unaff_EDI + 0x6cb8) = 0;
  }
  uVar10 = unaff_EDI + 0x10;
  iVar8 = 8;
  do {
    lVar16 = FUN_00455630(param_1,param_2,uVar10);
    param_2 = (short *)((ulonglong)lVar16 >> 0x20);
    uVar10 = uVar10 + 0x4b4;
    iVar8 = iVar8 + -1;
    param_1 = extraout_ECX_04;
  } while (iVar8 != 0);
  uVar10 = unaff_EDI + 0x25b0;
  iVar9 = 8;
  iVar8 = extraout_ECX_04;
  do {
    lVar16 = FUN_00455630(iVar8,param_2,uVar10);
    param_2 = (short *)((ulonglong)lVar16 >> 0x20);
    uVar10 = uVar10 + 0x4b4;
    iVar9 = iVar9 + -1;
    iVar8 = extraout_ECX_05;
  } while (iVar9 != 0);
  uVar10 = unaff_EDI + 0x4b50;
  iVar9 = 2;
  do {
    lVar16 = FUN_00455630(iVar8,param_2,uVar10);
    param_2 = (short *)((ulonglong)lVar16 >> 0x20);
    uVar10 = uVar10 + 0x4b4;
    iVar9 = iVar9 + -1;
    iVar8 = extraout_ECX_06;
  } while (iVar9 != 0);
  uVar10 = unaff_EDI + 0x54b8;
  iVar9 = 4;
  do {
    lVar16 = FUN_00455630(iVar8,param_2,uVar10);
    param_2 = (short *)((ulonglong)lVar16 >> 0x20);
    uVar10 = uVar10 + 0x4b4;
    iVar9 = iVar9 + -1;
    iVar8 = extraout_ECX_07;
  } while (iVar9 != 0);
  if ((*(byte *)((int)unaff_EDI + 0x6d18) & 1) == 0) {
    if (((DAT_004b4514 != 0) && (416.0 < *(float *)((int)DAT_004b4514 + 0x980))) &&
       (*(float *)((int)DAT_004b4514 + 0x97c) < -64.0)) {
      puVar11 = (undefined4 *)((int)unaff_EDI + 0x594c);
      iVar8 = 4;
      do {
        if ((code *)*puVar11 != (code *)0x0) {
          (*(code *)*puVar11)();
        }
        *(undefined2 *)(puVar11 + -0x34) = 3;
        puVar11 = puVar11 + 0x12d;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      *(uint *)((int)unaff_EDI + 0x6d18) = *(uint *)((int)unaff_EDI + 0x6d18) | 1;
    }
  }
  else if ((DAT_004b4514 != 0) &&
          ((*(float *)((int)DAT_004b4514 + 0x980) < 400.0 != NANP(*(float *)((int)DAT_004b4514 + 0x980)) ||
           (-64.0 < *(float *)((int)DAT_004b4514 + 0x97c) != NANP(*(float *)((int)DAT_004b4514 + 0x97c)))))) {
    puVar11 = (undefined4 *)((int)unaff_EDI + 0x594c);
    iVar8 = 4;
    do {
      if ((code *)*puVar11 != (code *)0x0) {
        (*(code *)*puVar11)();
      }
      *(undefined2 *)(puVar11 + -0x34) = 2;
      puVar11 = puVar11 + 0x12d;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *(uint *)((int)unaff_EDI + 0x6d18) = *(uint *)((int)unaff_EDI + 0x6d18) & 0xfffffffe;
  }
  if (DAT_004b43dc == 0) {
LAB_0041e6e3:
    if (*(int *)((int)unaff_EDI + 0x6c78) != 0) {
      FUN_00461970(*(void **)((int)unaff_EDI + 0x6c78),(int)*(void **)((int)unaff_EDI + 0x6c78));
      *(undefined4 *)((int)unaff_EDI + 0x6c78) = 0;
    }
    *(undefined4 *)((int)unaff_EDI + 0x6ce8) = 0;
    *(undefined4 *)((int)unaff_EDI + 0x6cf8) = 0;
    *(undefined4 *)((int)unaff_EDI + 0x6d00) = 0;
    *(undefined4 *)((int)unaff_EDI + 0x6d08) = 0;
    *(undefined4 *)((int)unaff_EDI + 0x6d10) = 0;
  }
  else {
    iVar8 = *(int *)((int)unaff_EDI + 0x6d38);
    iVar9 = DAT_004b43dc;
    if (((-1 < iVar8) && (*(int *)((int)DAT_004b43dc + 0x1c) != 0)) &&
       (((*(byte *)((int)DAT_004b43dc + 0x3c) & 1) == 0 && (*(int *)((int)unaff_EDI + 0x6d30) == 0)))) {
      iVar9 = *(int *)((int)unaff_EDI + 0x6d40);
      if (iVar8 < iVar9) {
        if (iVar8 < 5) {
          if (*(code **)((int)unaff_EDI + 0x4fe4) != (code *)0x0) {
            (**(code **)((int)unaff_EDI + 0x4fe4))();
            iVar9 = extraout_ECX_08;
          }
          *(undefined2 *)((int)unaff_EDI + 0x4f14) = 9;
          if (*(code **)((int)unaff_EDI + 0x5498) != (code *)0x0) {
            (**(code **)((int)unaff_EDI + 0x5498))();
            iVar9 = extraout_ECX_09;
          }
          *(undefined2 *)((int)unaff_EDI + 0x53c8) = 9;
          FUN_00453d90(iVar9,0xc);
        }
        else if (iVar8 < 10) {
          if (*(code **)((int)unaff_EDI + 0x4fe4) != (code *)0x0) {
            (**(code **)((int)unaff_EDI + 0x4fe4))();
          }
          uVar6 = 8;
          *(undefined2 *)((int)unaff_EDI + 0x4f14) = 8;
          if (*(code **)((int)unaff_EDI + 0x5498) != (code *)0x0) {
            (**(code **)((int)unaff_EDI + 0x5498))();
            uVar6 = extraout_ECX_10;
          }
          *(undefined2 *)((int)unaff_EDI + 0x53c8) = 8;
          FUN_00453d90(uVar6,0xb);
        }
      }
      else if (iVar9 < iVar8) {
        if (*(code **)((int)unaff_EDI + 0x4fe4) != (code *)0x0) {
          (**(code **)((int)unaff_EDI + 0x4fe4))();
        }
        *(undefined2 *)((int)unaff_EDI + 0x4f14) = 7;
        if (*(code **)((int)unaff_EDI + 0x5498) != (code *)0x0) {
          (**(code **)((int)unaff_EDI + 0x5498))();
        }
        *(undefined2 *)((int)unaff_EDI + 0x53c8) = 7;
      }
      if (*(int *)((int)unaff_EDI + 0x6d38) != *(int *)((int)unaff_EDI + 0x6d40)) {
        if (*(int *)((int)unaff_EDI + 0x4f48) != 0) {
          FUN_00454b80(*(int *)((int)unaff_EDI + 0x6d38) / 10 + 0xf3,*(int *)((int)unaff_EDI + 0x4f48));
        }
        if (*(int *)((int)unaff_EDI + 0x53fc) != 0) {
          FUN_00454b80(*(int *)((int)unaff_EDI + 0x6d38) % 10 + 0xf3,*(int *)((int)unaff_EDI + 0x53fc));
        }
      }
      iVar9 = DAT_004b43dc;
      *(undefined4 *)((int)unaff_EDI + 0x6d40) = *(undefined4 *)((int)unaff_EDI + 0x6d38);
    }
    iVar8 = DAT_004b4514;
    if (((iVar9 == 0) || (iVar1 = *(int *)((int)iVar9 + 0x1c), iVar1 == 0)) ||
       (((*(byte *)((int)iVar9 + 0x3c) & 1) != 0 || (*(int *)((int)unaff_EDI + 0x6d30) != 0))))
    goto LAB_0041e6e3;
    piVar4 = *(int **)((int)iVar1 + 0x2648);
    *(int **)((int)unaff_EDI + 0x6cf0) = piVar4;
    local_10 = (int *)((float)(int)piVar4 / (float)*(int *)((int)iVar1 + 0x264c));
    *(int **)((int)unaff_EDI + 0x6cec) = local_10;
    if (*(float *)((int)unaff_EDI + 0x6ce8) < (float)local_10 !=
        (NANP(*(float *)((int)unaff_EDI + 0x6ce8)) || NANP((float)local_10))) {
      *(float *)((int)unaff_EDI + 0x6ce8) = *(float *)((int)unaff_EDI + 0x6ce8) + 0.025;
    }
    if (*(float *)((int)unaff_EDI + 0x6cec) < *(float *)((int)unaff_EDI + 0x6ce8) !=
        (NANP(*(float *)((int)unaff_EDI + 0x6cec)) || NANP(*(float *)((int)unaff_EDI + 0x6ce8)))) {
      *(undefined4 *)((int)unaff_EDI + 0x6ce8) = *(undefined4 *)((int)unaff_EDI + 0x6cec);
    }
    if ((*(byte *)((int)unaff_EDI + 0x6d18) & 8) == 0) {
      if ((*(float *)((int)iVar8 + 0x980) <= 64.0) && (*(float *)((int)iVar8 + 0x97c) < -64.0)) {
        iVar8 = 0;
        if (0 < *(int *)((int)unaff_EDI + 0x6cf4)) {
          piVar4 = (int *)((int)unaff_EDI + 0x6c7c);
          local_10 = piVar4;
          do {
            FUN_00461970(piVar4,*local_10);
            local_10 = local_10 + 1;
            iVar8 = iVar8 + 1;
            piVar4 = extraout_ECX_13;
          } while (iVar8 < *(int *)((int)unaff_EDI + 0x6cf4));
        }
        FUN_00461970(*(void **)((int)unaff_EDI + 0x6c78),(int)*(void **)((int)unaff_EDI + 0x6c78));
        *(uint *)((int)unaff_EDI + 0x6d18) = *(uint *)((int)unaff_EDI + 0x6d18) | 8;
        piVar4 = extraout_ECX_14;
      }
    }
    else if ((80.0 < *(float *)((int)iVar8 + 0x980) != (*(float *)((int)iVar8 + 0x980) == 80.0)) ||
            (0.0 < *(float *)((int)iVar8 + 0x97c) != NANP(*(float *)((int)iVar8 + 0x97c)))) {
      iVar8 = 0;
      if (0 < *(int *)((int)unaff_EDI + 0x6cf4)) {
        local_10 = (int *)((int)unaff_EDI + 0x6c7c);
        do {
          FUN_00461970(local_10,*local_10);
          local_10 = local_10 + 1;
          iVar8 = iVar8 + 1;
          piVar4 = extraout_ECX_11;
        } while (iVar8 < *(int *)((int)unaff_EDI + 0x6cf4));
      }
      FUN_00461970(piVar4,*(int *)((int)unaff_EDI + 0x6c78));
      *(uint *)((int)unaff_EDI + 0x6d18) = *(uint *)((int)unaff_EDI + 0x6d18) & 0xfffffff7;
      piVar4 = extraout_ECX_12;
    }
    if (*(int *)((int)unaff_EDI + 0x6c78) == 0) {
      piVar4 = (int *)(DAT_004b0cb0 + -1);
      iVar8 = 0x76;
      switch(piVar4) {
      case (int *)0x0:
        if (DAT_004b0cb8 < 0x18) goto LAB_0041e679;
        break;
      case (int *)0x1:
        if (DAT_004b0cb8 < 0x18) goto LAB_0041e679;
        iVar8 = 0x77;
        break;
      case (int *)0x2:
        if (DAT_004b0cb8 < 0x18) goto LAB_0041e679;
        iVar8 = 0x78;
        break;
      case (int *)0x3:
        if (DAT_004b0cb8 < 0x18) goto LAB_0041e679;
        iVar8 = 0x79;
        break;
      case (int *)0x4:
        if (0x17 < DAT_004b0cb8) {
          iVar8 = 0x7a;
        }
        break;
      case (int *)0x5:
        if (DAT_004b0cb8 < 0x18) goto LAB_0041e679;
        iVar8 = 0x7b;
        break;
      case (int *)0x6:
        iVar8 = ((0x17 < DAT_004b0cb8) - 1 & 0xfffffffb) + 0x7c;
      }
      FUN_004615a0((void *)0x0,*(void **)((int)unaff_EDI + 0x6d44),&local_10,iVar8,0);
      *(int **)((int)unaff_EDI + 0x6c78) = local_10;
      piVar4 = local_10;
    }
LAB_0041e679:
    local_10 = (int *)0x0;
    pfVar12 = (float *)((int)unaff_EDI + 0x6c7c);
    do {
      piVar3 = local_10;
      if ((int)local_10 < *(int *)((int)unaff_EDI + 0x6cf4)) {
        local_10 = piVar3;
        if (*pfVar12 == 0.0) {
          FUN_004615a0((void *)0x0,*(void **)((int)unaff_EDI + 0x6d44),local_c,(int)local_10 + 0x35,0);
          *pfVar12 = local_c[0];
          piVar4 = extraout_ECX_15;
          local_10 = piVar3;
        }
      }
      else {
        local_10 = piVar3;
        if (*pfVar12 != 0.0) {
          FUN_00461970(piVar4,(int)*pfVar12);
          *pfVar12 = 0.0;
          piVar4 = extraout_ECX_16;
        }
      }
      local_10 = (int *)((int)local_10 + 1);
      pfVar12 = pfVar12 + 1;
    } while (local_10 < (int *)0xa);
  }
  piVar4 = *(int **)((int)unaff_EDI + 0x6d30);
  if (piVar4 != (int *)0x0) {
    iVar8 = FUN_0041fcc0(piVar4);
    if (iVar8 == 0) {
      iVar8 = piVar4[2];
      pfVar12 = (float *)piVar4[4];
      piVar4[1] = iVar8;
      if ((*pfVar12 <= 0.99) || (1.01 <= *pfVar12)) {
        local_c[0] = *pfVar12 + (float)piVar4[3];
        piVar4[3] = (int)local_c[0];
        uVar15 = FUN_004931e0(pfVar12,iVar8);
        piVar4[2] = (int)uVar15;
      }
      else {
        piVar4[2] = iVar8 + 1;
        piVar4[3] = (int)((float)piVar4[3] + 1.0);
      }
      goto LAB_0041ebb5;
    }
    local_10 = *(int **)((int)unaff_EDI + 0x6d30);
    if (local_10 != (int *)0x0) {
      iVar8 = local_10[0x10];
      if (iVar8 != 0) {
        for (puVar11 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856b8); puVar11 != (undefined4 *)0x0;
            puVar11 = (undefined4 *)puVar11[1]) {
          piVar4 = (int *)*puVar11;
          if (*piVar4 == iVar8) goto LAB_0041e7f2;
        }
        for (puVar11 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856c0); puVar11 != (undefined4 *)0x0;
            puVar11 = (undefined4 *)puVar11[1]) {
          piVar4 = (int *)*puVar11;
          if (*piVar4 == iVar8) goto LAB_0041e7f2;
        }
      }
      goto LAB_0041e81f;
    }
    goto LAB_0041ebaf;
  }
  goto LAB_0041ebb5;
LAB_0041e7f2:
  if ((piVar4 != (int *)0x0) && (piVar4[0x11f] = piVar4[0x11f] | 0x10000000, piVar4[6] == 0)) {
    for (piVar4 = (int *)piVar4[5]; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
      *(uint *)(*piVar4 + 0x47c) = *(uint *)(*piVar4 + 0x47c) | 0x10000000;
    }
  }
LAB_0041e81f:
  local_10[0x10] = 0;
  iVar8 = local_10[0x11];
  if (iVar8 != 0) {
    for (puVar11 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856b8); puVar11 != (undefined4 *)0x0;
        puVar11 = (undefined4 *)puVar11[1]) {
      piVar4 = (int *)*puVar11;
      if (*piVar4 == iVar8) goto LAB_0041e86f;
    }
    for (puVar11 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856c0); puVar11 != (undefined4 *)0x0;
        puVar11 = (undefined4 *)puVar11[1]) {
      piVar4 = (int *)*puVar11;
      if (*piVar4 == iVar8) goto LAB_0041e86f;
    }
  }
  goto LAB_0041e89f;
LAB_0041e8ef:
  if ((piVar4 != (int *)0x0) && (piVar4[0x11f] = piVar4[0x11f] | 0x10000000, piVar4[6] == 0)) {
    for (piVar4 = (int *)piVar4[5]; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
      *(uint *)(*piVar4 + 0x47c) = *(uint *)(*piVar4 + 0x47c) | 0x10000000;
    }
  }
  goto LAB_0041e91f;
LAB_0041e96f:
  if ((piVar4 != (int *)0x0) && (piVar4[0x11f] = piVar4[0x11f] | 0x10000000, piVar4[6] == 0)) {
    for (piVar4 = (int *)piVar4[5]; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
      *(uint *)(*piVar4 + 0x47c) = *(uint *)(*piVar4 + 0x47c) | 0x10000000;
    }
  }
  goto LAB_0041e99f;
LAB_0041e9ef:
  if ((piVar4 != (int *)0x0) && (piVar4[0x11f] = piVar4[0x11f] | 0x10000000, piVar4[6] == 0)) {
    for (piVar4 = (int *)piVar4[5]; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
      *(uint *)(*piVar4 + 0x47c) = *(uint *)(*piVar4 + 0x47c) | 0x10000000;
    }
  }
  goto LAB_0041ea1f;
LAB_0041ea6f:
  if ((piVar4 != (int *)0x0) && (piVar4[0x11f] = piVar4[0x11f] | 0x10000000, piVar4[6] == 0)) {
    for (piVar4 = (int *)piVar4[5]; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
      *(uint *)(*piVar4 + 0x47c) = *(uint *)(*piVar4 + 0x47c) | 0x10000000;
    }
  }
  goto LAB_0041ea9f;
LAB_0041eaef:
  if ((piVar4 != (int *)0x0) && (piVar4[0x11f] = piVar4[0x11f] | 0x10000000, piVar4[6] == 0)) {
    for (piVar4 = (int *)piVar4[5]; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
      *(uint *)(*piVar4 + 0x47c) = *(uint *)(*piVar4 + 0x47c) | 0x10000000;
    }
  }
  goto LAB_0041eb1f;
LAB_0041eb6f:
  if ((piVar4 != (int *)0x0) && (piVar4[0x11f] = piVar4[0x11f] | 0x10000000, piVar4[6] == 0)) {
    for (piVar4 = (int *)piVar4[5]; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
      *(uint *)(*piVar4 + 0x47c) = *(uint *)(*piVar4 + 0x47c) | 0x10000000;
    }
  }
  goto LAB_0041eb9f;
LAB_0041e86f:
  if ((piVar4 != (int *)0x0) && (piVar4[0x11f] = piVar4[0x11f] | 0x10000000, piVar4[6] == 0)) {
    for (piVar4 = (int *)piVar4[5]; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
      *(uint *)(*piVar4 + 0x47c) = *(uint *)(*piVar4 + 0x47c) | 0x10000000;
    }
  }
LAB_0041e89f:
  local_10[0x11] = 0;
  iVar8 = local_10[0x12];
  if (iVar8 != 0) {
    for (puVar11 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856b8); puVar11 != (undefined4 *)0x0;
        puVar11 = (undefined4 *)puVar11[1]) {
      piVar4 = (int *)*puVar11;
      if (*piVar4 == iVar8) goto LAB_0041e8ef;
    }
    for (puVar11 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856c0); puVar11 != (undefined4 *)0x0;
        puVar11 = (undefined4 *)puVar11[1]) {
      piVar4 = (int *)*puVar11;
      if (*piVar4 == iVar8) goto LAB_0041e8ef;
    }
  }
LAB_0041e91f:
  local_10[0x12] = 0;
  iVar8 = local_10[0x13];
  if (iVar8 != 0) {
    for (puVar11 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856b8); puVar11 != (undefined4 *)0x0;
        puVar11 = (undefined4 *)puVar11[1]) {
      piVar4 = (int *)*puVar11;
      if (*piVar4 == iVar8) goto LAB_0041e96f;
    }
    for (puVar11 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856c0); puVar11 != (undefined4 *)0x0;
        puVar11 = (undefined4 *)puVar11[1]) {
      piVar4 = (int *)*puVar11;
      if (*piVar4 == iVar8) goto LAB_0041e96f;
    }
  }
LAB_0041e99f:
  local_10[0x13] = 0;
  iVar8 = local_10[0x14];
  if (iVar8 != 0) {
    for (puVar11 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856b8); puVar11 != (undefined4 *)0x0;
        puVar11 = (undefined4 *)puVar11[1]) {
      piVar4 = (int *)*puVar11;
      if (*piVar4 == iVar8) goto LAB_0041e9ef;
    }
    for (puVar11 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856c0); puVar11 != (undefined4 *)0x0;
        puVar11 = (undefined4 *)puVar11[1]) {
      piVar4 = (int *)*puVar11;
      if (*piVar4 == iVar8) goto LAB_0041e9ef;
    }
  }
LAB_0041ea1f:
  local_10[0x14] = 0;
  iVar8 = local_10[0x15];
  if (iVar8 != 0) {
    for (puVar11 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856b8); puVar11 != (undefined4 *)0x0;
        puVar11 = (undefined4 *)puVar11[1]) {
      piVar4 = (int *)*puVar11;
      if (*piVar4 == iVar8) goto LAB_0041ea6f;
    }
    for (puVar11 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856c0); puVar11 != (undefined4 *)0x0;
        puVar11 = (undefined4 *)puVar11[1]) {
      piVar4 = (int *)*puVar11;
      if (*piVar4 == iVar8) goto LAB_0041ea6f;
    }
  }
LAB_0041ea9f:
  local_10[0x15] = 0;
  iVar8 = local_10[0x16];
  if (iVar8 != 0) {
    for (puVar11 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856b8); puVar11 != (undefined4 *)0x0;
        puVar11 = (undefined4 *)puVar11[1]) {
      piVar4 = (int *)*puVar11;
      if (*piVar4 == iVar8) goto LAB_0041eaef;
    }
    for (puVar11 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856c0); puVar11 != (undefined4 *)0x0;
        puVar11 = (undefined4 *)puVar11[1]) {
      piVar4 = (int *)*puVar11;
      if (*piVar4 == iVar8) goto LAB_0041eaef;
    }
  }
LAB_0041eb1f:
  local_10[0x16] = 0;
  iVar8 = local_10[0x17];
  if (iVar8 != 0) {
    for (puVar11 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856b8); puVar11 != (undefined4 *)0x0;
        puVar11 = (undefined4 *)puVar11[1]) {
      piVar4 = (int *)*puVar11;
      if (*piVar4 == iVar8) goto LAB_0041eb6f;
    }
    for (puVar11 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856c0); puVar11 != (undefined4 *)0x0;
        puVar11 = (undefined4 *)puVar11[1]) {
      piVar4 = (int *)*puVar11;
      if (*piVar4 == iVar8) goto LAB_0041eb6f;
    }
  }
LAB_0041eb9f:
  local_10[0x17] = 0;
  FUN_0046ca4f(local_10);
LAB_0041ebaf:
  *(undefined4 *)((int)unaff_EDI + 0x6d30) = 0;
LAB_0041ebb5:
  if ((DAT_004b43dc == 0) || (iVar8 = *(int *)((int)DAT_004b43dc + 0x1c), iVar8 == 0)) goto LAB_0041ef0c;
  uVar10 = ~(*(uint *)((int)iVar8 + 0x26f8) >> 5);
  if (((uVar10 & 1) == 0) || ((~*(uint *)((int)iVar8 + 0x26f8) & 1) == 0)) goto LAB_0041ef0c;
  uVar5 = *(uint *)((int)unaff_EDI + 0x6d18) >> 1;
  psVar7 = DAT_004b43cc;
  if ((*(byte *)((int)DAT_004b43cc + 0x3e) & 1) == 0) {
    uVar5 = uVar5 & 3;
    if (uVar5 == 0) {
      if (*(int *)((int)iVar8 + 0x2650) < 700) {
        if (*(code **)((int)unaff_EDI + 0x6c20) != (code *)0x0) {
          (**(code **)((int)unaff_EDI + 0x6c20))();
          psVar7 = extraout_EDX_05;
        }
LAB_0041ed3f:
        *(undefined2 *)((int)unaff_EDI + 0x6b50) = 7;
        uVar10 = *(uint *)((int)unaff_EDI + 0x6d18) & 0xfffffffb | 2;
        *(uint *)((int)unaff_EDI + 0x6d18) = uVar10;
      }
    }
    else if (uVar5 == 1) {
      if (*(int *)((int)iVar8 + 0x2650) < 400) {
        if (*(code **)((int)unaff_EDI + 0x6c20) != (code *)0x0) {
          (**(code **)((int)unaff_EDI + 0x6c20))();
          uVar10 = extraout_ECX_18;
        }
LAB_0041ed90:
        *(undefined2 *)((int)unaff_EDI + 0x6b50) = 8;
        *(uint *)((int)unaff_EDI + 0x6d18) = *(uint *)((int)unaff_EDI + 0x6d18) & 0xfffffffd | 4;
        psVar7 = (short *)0x8;
      }
    }
    else if (uVar5 == 2) {
      if (*(int *)((int)iVar8 + 0x2650) < 200) {
        if (*(code **)((int)unaff_EDI + 0x6c20) != (code *)0x0) {
          (**(code **)((int)unaff_EDI + 0x6c20))();
          psVar7 = extraout_EDX_06;
        }
LAB_0041eddd:
        uVar10 = 9;
        *(undefined2 *)((int)unaff_EDI + 0x6b50) = 9;
        *(uint *)((int)unaff_EDI + 0x6d18) = *(uint *)((int)unaff_EDI + 0x6d18) | 6;
      }
    }
    else if (uVar5 == 3) {
      iVar9 = *(int *)((int)iVar8 + 0x2650);
      bVar14 = SBORROW4(iVar9,200);
      iVar1 = iVar9 + -200;
      bVar13 = iVar9 == 200;
      goto LAB_0041ee01;
    }
  }
  else {
    uVar5 = uVar5 & 3;
    if (uVar5 == 0) {
      if (*(int *)((int)iVar8 + 0x2650) < 2000) {
        if (*(code **)((int)unaff_EDI + 0x6c20) == (code *)0x0) goto LAB_0041ed3f;
        (**(code **)((int)unaff_EDI + 0x6c20))();
        *(undefined2 *)((int)unaff_EDI + 0x6b50) = 7;
        uVar10 = *(uint *)((int)unaff_EDI + 0x6d18) & 0xfffffffb | 2;
        *(uint *)((int)unaff_EDI + 0x6d18) = uVar10;
        psVar7 = extraout_EDX_03;
      }
    }
    else if (uVar5 == 1) {
      if (*(int *)((int)iVar8 + 0x2650) < 1000) {
        if (*(code **)((int)unaff_EDI + 0x6c20) == (code *)0x0) goto LAB_0041ed90;
        (**(code **)((int)unaff_EDI + 0x6c20))();
        *(undefined2 *)((int)unaff_EDI + 0x6b50) = 8;
        *(uint *)((int)unaff_EDI + 0x6d18) = *(uint *)((int)unaff_EDI + 0x6d18) & 0xfffffffd | 4;
        uVar10 = extraout_ECX_17;
        psVar7 = (short *)0x8;
      }
    }
    else if (uVar5 == 2) {
      if (*(int *)((int)iVar8 + 0x2650) < 400) {
        if (*(code **)((int)unaff_EDI + 0x6c20) == (code *)0x0) goto LAB_0041eddd;
        (**(code **)((int)unaff_EDI + 0x6c20))();
        uVar10 = 9;
        *(undefined2 *)((int)unaff_EDI + 0x6b50) = 9;
        *(uint *)((int)unaff_EDI + 0x6d18) = *(uint *)((int)unaff_EDI + 0x6d18) | 6;
        psVar7 = extraout_EDX_04;
      }
    }
    else if (uVar5 == 3) {
      iVar9 = *(int *)((int)iVar8 + 0x2650);
      bVar14 = SBORROW4(iVar9,400);
      iVar1 = iVar9 + -400;
      bVar13 = iVar9 == 400;
LAB_0041ee01:
      if (!bVar13 && bVar14 == iVar1 < 0) {
        if (*(code **)((int)unaff_EDI + 0x6c20) != (code *)0x0) {
          (**(code **)((int)unaff_EDI + 0x6c20))();
          uVar10 = extraout_ECX_19;
        }
        *(undefined2 *)((int)unaff_EDI + 0x6b50) = 10;
        *(uint *)((int)unaff_EDI + 0x6d18) = *(uint *)((int)unaff_EDI + 0x6d18) & 0xfffffff9;
        psVar7 = (short *)0xa;
      }
    }
  }
  FUN_00455630(uVar10,psVar7,unaff_EDI + 0x678c);
  iVar9 = DAT_004b4514;
  *(float *)((int)unaff_EDI + 0x6bbc) = *(float *)((int)iVar8 + 0x1074) + 32.0 + 192.0;
  *(undefined4 *)((int)unaff_EDI + 0x6bc0) = 0x43f00000;
  fVar2 = ABS(*(float *)((int)iVar8 + 0x1074) - *(float *)((int)iVar9 + 0x97c));
  if (fVar2 < 64.0) {
    local_10 = (int *)CONCAT22(((local_10__u *)&local_10)->_2_2_,in_FPUControlWord);
    local_c[0]._0_1_ = (char)(int)ROUND(fVar2 * -191.0 * 0.015625);
    *(char *)((int)unaff_EDI + 0x6b4b) = '@' - local_c[0]._0_1_;
  }
  else {
    *(undefined *)((int)unaff_EDI + 0x6b4b) = 0xff;
  }
  if ((*(float *)((int)iVar8 + 0x1074) < -192.0) ||
     (192.0 < *(float *)((int)iVar8 + 0x1074) != NANP(*(float *)((int)iVar8 + 0x1074)))) {
    *(undefined *)((int)unaff_EDI + 0x6b4b) = 0;
  }
LAB_0041ef0c:
  iVar8 = *(int *)((int)unaff_EDI + 0x6cc4);
  pfVar12 = *(float **)((int)unaff_EDI + 0x6ccc);
  *(int *)((int)unaff_EDI + 0x6cc0) = iVar8;
  if ((0.99 < *pfVar12) && (*pfVar12 < 1.01)) {
    *(int *)((int)unaff_EDI + 0x6cc4) = iVar8 + 1;
    *(float *)((int)unaff_EDI + 0x6cc8) = *(float *)((int)unaff_EDI + 0x6cc8) + 1.0;
    return CONCAT44(iVar8 + 1,1);
  }
  local_c[0] = *pfVar12 + *(float *)((int)unaff_EDI + 0x6cc8);
  *(float *)((int)unaff_EDI + 0x6cc8) = local_c[0];
  uVar15 = FUN_004931e0(pfVar12,iVar8);
  *(int *)((int)unaff_EDI + 0x6cc4) = (int)uVar15;
  return CONCAT44((int)(uVar15 >> 0x20),1);
}


