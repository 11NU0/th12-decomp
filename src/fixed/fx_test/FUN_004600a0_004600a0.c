/* undefined4 __stdcall FUN_004600a0(undefined4 * param_1, int param_2, undefined4 param_3, undefined4 param_4, int * param_5) @ 004600a0  802 bytes */

#include "th12.h"

undefined4
__stdcall FUN_004600a0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined local_68 [12];
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_18;
  float fStack_14;
  int iStack_8;
  undefined4 uStack_4;
  
  if (param_5 == (int *)0x0) {
    pcVar4 = &DAT_004a33b8;
  }
  else {
    if (*param_5 == 7) {
      if (*(char *)(param_5 + 8) == '\0') {
        if (*(char *)(param_5[4] + (int)param_5) == '@') {
          if (((char *)(param_5[4] + (int)param_5))[1] == 'R') {
            FUN_0045fbf0();
          }
          else {
            iVar3 = FUN_0045fba0((uint)*(ushort *)((int)param_5 + 10));
            param_1[0x4b] = param_1[0x4b] + iVar3;
          }
        }
        else {
          iVar3 = FUN_0045f880((void *)(int)*(short *)(param_5 + 5),(uint)*(ushort *)(param_5 + 3));
          if (iVar3 < 0) {
            FUN_00464300(&DAT_004a3478);
            return 0xffffffff;
          }
          param_1[0x4b] = param_1[0x4b] + iVar3;
        }
      }
      else {
        iVar3 = FUN_0045fa80((void *)(param_5[7] + (int)param_5),
                             (uint)*(ushort *)((int)param_5 + 10),(uint)*(ushort *)(param_5 + 3));
        if (iVar3 < 0) {
          pcVar4 = &DAT_004a34bc;
          goto LAB_004600b7;
        }
        param_1[0x4b] = param_1[0x4b] + iVar3;
      }
      iVar3 = param_2 * 0x14;
      (**(code **)(**(int **)(param_1[0x48] + iVar3) + 0x44))
                (*(undefined4 *)(param_1[0x48] + iVar3),0,local_68);
      piVar2 = param_5 + 0x10;
      iStack_8 = 0;
      if (*(short *)(param_5 + 1) != 0) {
        do {
          fStack_34 = (float)iStack_5c;
          uStack_54 = *param_1;
          iVar1 = *piVar2;
          iStack_4c = param_1[0x48] + iVar3;
          uStack_50 = uStack_4;
          if (iStack_5c < 0) {
            fStack_34 = fStack_34 + 4.2949673e+09;
          }
          fStack_18 = fStack_34 / (float)(uint)*(ushort *)((int)param_5 + 10);
          fStack_38 = (float)iStack_58;
          if (iStack_58 < 0) {
            fStack_38 = fStack_38 + 4.2949673e+09;
          }
          fStack_14 = fStack_38 / (float)(uint)*(ushort *)(param_5 + 3);
          fStack_48 = fStack_18 * *(float *)((int)param_5 + iVar1 + 4);
          fStack_44 = fStack_14 * *(float *)((int)param_5 + iVar1 + 8);
          fStack_40 = (*(float *)((int)param_5 + iVar1 + 0xc) + *(float *)((int)param_5 + iVar1 + 4)
                      ) * fStack_18;
          fStack_3c = (*(float *)((int)param_5 + iVar1 + 0x10) +
                      *(float *)((int)param_5 + iVar1 + 8)) * fStack_14;
          FUN_00460610((uint)*(ushort *)(param_5 + 3),(int)param_1);
          iStack_8 = iStack_8 + 1;
          piVar2 = piVar2 + 1;
          iVar3 = param_2;
        } while (iStack_8 < (int)(uint)*(ushort *)(param_5 + 1));
      }
      iVar3 = 0;
      if (*(short *)((int)param_5 + 6) != 0) {
        iVar1 = (int)param_1 * 4;
        piVar2 = piVar2 + 1;
        do {
          *(int *)(iVar1 + param_1[0x47]) = *piVar2 + (int)param_5;
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + 4;
          piVar2 = piVar2 + 2;
        } while (iVar3 < (int)(uint)*(ushort *)((int)param_5 + 6));
      }
      return 1;
    }
    pcVar4 = &DAT_004a33f4;
  }
LAB_004600b7:
  FUN_00464300(pcVar4);
  return 0xffffffff;
}


