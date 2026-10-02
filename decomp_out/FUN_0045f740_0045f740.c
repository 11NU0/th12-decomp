/* undefined4 __stdcall FUN_0045f740(undefined4 param_1) @ 0045f740  319 bytes */
#include "th12.h"

undefined4 FUN_0045f740(undefined4 param_1)

{
  int iVar1;
  int unaff_EBX;
  undefined4 *unaff_ESI;
  int *piVar2;
  undefined4 uStack_2c;
  undefined4 uStack_8;
  int iStack_4;
  
  unaff_ESI[4] = unaff_ESI[4] & 0xfffffffe;
  unaff_ESI[2] = param_1;
  piVar2 = (int *)0x0;
  (**(code **)(*(int *)*unaff_ESI + 0x48))((int *)*unaff_ESI,0,&stack0xffffffc8);
  if (iStack_4 == 0) {
    (**(code **)(*piVar2 + 0x30))(piVar2,&uStack_2c);
    D3DXLoadSurfaceFromFileInMemory(piVar2,0,&stack0xffffffc4,unaff_EBX,uStack_8,0,1,0,0);
  }
  else {
    iVar1 = *(int *)(unaff_EBX + 0x1c) + unaff_EBX;
    uStack_2c = 0;
    D3DXLoadSurfaceFromMemory
              (piVar2,0,&uStack_2c,iVar1 + 0x10,
               *(undefined4 *)(&DAT_004a2338 + *(short *)(iVar1 + 6) * 4),
               (int)*(short *)(iVar1 + 8) * *(int *)(&DAT_004a235c + *(short *)(iVar1 + 6) * 4),0,
               &stack0xffffffc4,1,0);
  }
  (**(code **)(*piVar2 + 8))(piVar2);
  FUN_0045ee00();
  unaff_ESI[3] = *(undefined4 *)(&DAT_004a235c + (int)piVar2 * 4);
  return 0;
}


