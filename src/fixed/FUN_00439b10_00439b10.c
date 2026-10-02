/* undefined4 __stdcall FUN_00439b10(int param_1) @ 00439b10  903 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00439b10(int param_1)

{
  float *pfVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  void *this;
  void *this_00;
  float10 fVar8;
  float10 extraout_ST0;
  float10 extraout_ST1;
  int local_38;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_c;
  float local_8;
  
  this_00 = (void *)((int)param_1 + 0xa78);
  local_38 = 0x100;
LAB_00439b32:
  if (*(int *)((int)this_00 + 0x28) != 0) {
    *(undefined4 *)((int)this_00 + 0x38) = 0;
    pcVar2 = *(code **)(*(int *)((int)this_00 + 0x54) + 0x28);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    if ((*(byte *)((int)this_00 + 0x24) & 1) == 0) {
      FUN_00465390(this_00,*(float *)((int)this_00 + 0x10),*(float *)((int)this_00 + 0xc));
      *(undefined4 *)((int)this_00 + 8) = 0;
    }
    else {
      *(float *)((int)this_00 + 0x14) =
           *(float *)((int)this_00 + 0x18) + *(float *)((int)this_00 + 0x14);
      fVar8 = FUN_004646e0(*(float *)((int)this_00 + 0xc) + *(float *)((int)this_00 + 0x10));
      fVar8 = FUN_004646e0((float)fVar8);
      *(float *)((int)this_00 + 0x10) = (float)fVar8;
    }
    pfVar1 = (float *)((int)this_00 + -0xc);
    FUN_00464db0();
    iVar5 = DAT_004ce8cc;
    iVar3 = *(int *)((int)this_00 + 0x2c);
    if (iVar3 != 0) {
      for (puVar4 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856b8); puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)puVar4[1]) {
        piVar6 = (int *)*puVar4;
        if (*piVar6 == iVar3) goto LAB_00439be6;
      }
      for (puVar4 = *(undefined4 **)((int)DAT_004ce8cc + 0x8856c0); puVar4 != (undefined4 *)0x0;
          puVar4 = (undefined4 *)puVar4[1]) {
        piVar6 = (int *)*puVar4;
        if (*piVar6 == iVar3) goto LAB_00439be6;
      }
    }
    goto LAB_00439bea;
  }
  goto LAB_00439d77;
LAB_00439be6:
  if (piVar6 == (int *)0x0) {
LAB_00439bea:
    *(undefined4 *)((int)this_00 + 0x28) = 0;
    piVar6 = FUN_00461920(iVar3,iVar5,*(int *)((int)this_00 + 0x30));
    if ((piVar6 != (int *)0x0) && (piVar6[0x11f] = piVar6[0x11f] | 0x10000000, piVar6[6] == 0)) {
      for (piVar6 = (int *)piVar6[5]; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
        *(uint *)(*piVar6 + 0x47c) = *(uint *)(*piVar6 + 0x47c) | 0x10000000;
      }
    }
    *(undefined4 *)((int)this_00 + 0x2c) = 0;
    *(undefined4 *)((int)this_00 + 0x30) = 0;
  }
  else if ((((((*(char *)(*(int *)((int)this_00 + 0x54) + 0x1d) == '\x02') ||
              (FUN_0045cdf0(&local_30), *(int *)((int)this_00 + -0x1c) < 10)) ||
             ((local_30 < 32.0 == (local_30 == 32.0) &&
              (((416.0 < local_30 == (local_30 == 416.0) && (local_2c < 16.0 == (local_2c == 16.0)))
               && (local_2c < 464.0)))))) ||
            (((local_24 < 32.0 == (local_24 == 32.0) && (local_24 < 416.0)) &&
             ((local_20 < 16.0 == (local_20 == 16.0) && (464.0 < local_20 == (local_20 == 464.0)))))
            )) || ((((local_18 < 32.0 == (local_18 == 32.0) && (local_18 < 416.0)) &&
                    ((local_14 < 16.0 == (local_14 == 16.0) && (local_14 < 464.0)))) ||
                   ((((local_c < 32.0 == (local_c == 32.0) && (local_c < 416.0)) &&
                     (local_8 < 16.0 == (local_8 == 16.0))) && (local_8 < 464.0)))))) ||
          (((*(char *)(*(int *)((int)this_00 + 0x54) + 0x1d) == '\x03' &&
            (*pfVar1 < -224.0 == (*pfVar1 == -224.0))) &&
           ((*pfVar1 < 224.0 && (-64.0 <= *(float *)((int)this_00 + -8))))))) {
    iVar3 = DAT_004ce8cc;
    fVar8 = (float10)192.0;
    piVar6[0x10c] = (int)(float)((float10)*pfVar1 + (float10)32.0 + fVar8);
    piVar6[0x10d] = (int)(*(float *)((int)this_00 + -8) + 16.0);
    piVar6[0x10e] = *(int *)((int)this_00 + -4);
    if (*(int *)((int)this_00 + 0x30) != 0) {
      piVar7 = FUN_00461920(*(undefined4 *)((int)this_00 + 0x30),iVar3,
                            *(undefined4 *)((int)this_00 + 0x30));
      if (piVar7 == (int *)0x0) {
        *(undefined4 *)((int)this_00 + 0x30) = 0;
      }
      else {
        piVar7[0x10c] = (int)(float)((float10)*pfVar1 + extraout_ST1 + fVar8);
        piVar7[0x10d] = (int)(float)(extraout_ST0 + (float10)*(float *)((int)this_00 + -8));
        piVar7[0x10e] = *(int *)((int)this_00 + -4);
      }
    }
    if ((piVar6[0x11f] & 0x20000000U) != 0) {
      piVar6[0xb] = *(int *)((int)this_00 + 0x10);
      piVar6[0x11f] = piVar6[0x11f] | 4;
    }
    FUN_00464a80();
  }
  else {
    FUN_00461a70(this,*(int *)((int)this_00 + 0x2c));
    *(undefined4 *)((int)this_00 + 0x2c) = 0;
    *(undefined4 *)((int)this_00 + 0x28) = 0;
  }
LAB_00439d77:
  this_00 = (void *)((int)this_00 + 0x78);
  local_38 = local_38 + -1;
  if (local_38 == 0) {
    return 0;
  }
  goto LAB_00439b32;
}


