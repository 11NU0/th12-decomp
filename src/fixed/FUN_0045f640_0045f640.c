/* undefined4 __stdcall FUN_0045f640(void) @ 0045f640  252 bytes */
#include "th12.h"

undefined4 __stdcall FUN_0045f640(void)

{
  int iVar1;
  int in_EAX;
  undefined4 unaff_EBX;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  int *piVar2;
  undefined *puStack_1c;
  undefined4 local_18;
  int local_14;
  int iStack_10;
  int iStack_8;
  
  puStack_1c = (undefined *)&local_18;
  local_14 = in_EAX;
  if ((DAT_004ceae8 & 1) != 0) {
    iVar1 = *(int *)(((char *)&DAT_004a2338 + in_EAX * 4));
    if ((iVar1 == 0x15) || (iVar1 == 0)) {
      local_14 = 5;
    }
    else if (iVar1 == 0x14) {
      local_14 = 3;
    }
  }
  piVar2 = (int *)*unaff_ESI;
  unaff_ESI[4] = unaff_ESI[4] & 0xfffffffe;
  unaff_ESI[2] = unaff_EBX;
  local_18 = 0;
  (**(code **)(*piVar2 + 0x48))(piVar2,0);
  if (iStack_8 == 0) {
    D3DXLoadSurfaceFromFileInMemory(piVar2,0,0,unaff_EDI,unaff_EBX,0,1,0,0);
  }
  else {
    iVar1 = *(int *)((int)unaff_EDI + 0x1c) + unaff_EDI;
    puStack_1c = (undefined *)0x0;
    local_18 = 0;
    local_14 = (int)*(short *)((int)iVar1 + 8);
    iStack_10 = (int)*(short *)((int)iVar1 + 10);
    D3DXLoadSurfaceFromMemory
              (piVar2,0,0,iVar1 + 0x10,*(undefined4 *)(&DAT_004a2338 + *(short *)((int)iVar1 + 6) * 4),
               (int)*(short *)((int)iVar1 + 8) * *(int *)(&DAT_004a235c + *(short *)((int)iVar1 + 6) * 4),0,
               &puStack_1c,1,0);
  }
  (**(code **)(*piVar2 + 8))(piVar2);
  FUN_0045ee00();
  unaff_ESI[3] = *(undefined4 *)(&DAT_004a235c + (int)piVar2 * 4);
  return 0;
}


