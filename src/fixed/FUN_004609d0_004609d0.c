/* undefined __fastcall FUN_004609d0(int param_1) @ 004609d0  313 bytes */
#include "th12.h"

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __fastcall FUN_004609d0(int param_1)

{
  undefined4 stack0xffffffcc;
  int *piVar1;
  int *piVar2;
  int *in_EAX;
  int iVar3;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int *piStack_38;
  int local_2c;
  int iStack_28;
  
  if (*(int *)(*(int *)(*(int *)(&DAT_004b50c0 + *in_EAX * 4 + param_1) + 0x120) + in_EAX[1] * 0x14)
      != 0) {
    piStack_38 = (int *)0x4609fd;
    FUN_0045a3c0();
    piVar2 = DAT_004ce8f0;
    piStack_38 = &local_2c;
    iStack_3c = 0;
    iStack_40 = 0;
    iStack_44 = 0;
    iVar3 = (**(code **)(*DAT_004ce8f0 + 0x48))();
    if (iVar3 == 0) {
      iVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(&DAT_004b50c0 + *in_EAX * 4 + param_1) +
                                              0x120) + in_EAX[1] * 0x14) + 0x48))
                        (*(undefined4 *)
                          (*(int *)(*(int *)(&DAT_004b50c0 + *in_EAX * 4 + param_1) + 0x120) +
                          in_EAX[1] * 0x14));
      if (iVar3 != 0) {
        (**(code **)((int)iStack_3c + 8))(&iStack_3c);
        return;
      }
      iStack_44 = in_EAX[2];
      iStack_40 = in_EAX[3];
      iStack_3c = in_EAX[4] + iStack_44;
      piStack_38 = (int *)(in_EAX[5] + iStack_40);
      local_2c = in_EAX[8] + in_EAX[6];
      iStack_28 = in_EAX[9] + in_EAX[7];
      iVar3 = D3DXLoadSurfaceFromSurface(piVar2,0,&stack0xffffffcc,&iStack_3c,0,&iStack_44,2,0);
      if (iVar3 == 0) {
        piVar1 = *(int **)(*(int *)(*(int *)(&DAT_004b50c0 + *in_EAX * 4 + param_1) + 0x120) +
                          in_EAX[1] * 0x14);
        (**(code **)(*piVar1 + 0x54))(piVar1,0);
      }
      (**(code **)(*piVar2 + 8))(piVar2);
      (**(code **)((int)iRam00000000 + 8))(0);
    }
  }
  return;
}


