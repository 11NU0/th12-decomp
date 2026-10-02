/* int __thiscall FUN_0045f880(void * this, int param_1) @ 0045f880  503 bytes */
#include "th12.h"

int __fastcall FUN_0045f880(void *this,int param_1)

{
  undefined4 stack0xffffffb8;
  undefined4 stack0xffffffb4;
  int in_EAX;
  int iVar1;
  int iVar2;
  int *unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  int *piVar3;
  undefined *puVar4;
  int *piVar5;
  int *piVar6;
  int local_44;
  int local_40;
  int *local_3c [3];
  undefined auStack_30 [16];
  int iStack_20;
  int iStack_1c;
  int iStack_10;
  int iStack_c;
  
  local_40 = in_EAX;
  if ((DAT_004ceae8 & 1) != 0) {
    iVar1 = *(int *)(((char *)&DAT_004a2338 + in_EAX * 4));
    if ((iVar1 == 0x15) || (iVar1 == 0)) {
      local_40 = 5;
    }
    else if (iVar1 == 0x14) {
      local_40 = 3;
    }
  }
  unaff_ESI[4] = unaff_ESI[4] & 0xfffffffe;
  iVar1 = D3DXCreateTextureFromFileInMemoryEx
                    (DAT_004ce8f0,unaff_ESI[1],unaff_ESI[2],0,0,0,0,
                     *(undefined4 *)(((char *)&DAT_004a2338 + local_40 * 4)),1,1,0xffffffff,0,0,0,local_3c);
  if (iVar1 == 0) {
    piVar3 = &local_44;
    iVar1 = 0;
    piVar5 = local_3c[0];
    (**(code **)(*local_3c[0] + 0x48))();
    puVar4 = auStack_30;
    piVar6 = piVar3;
    (**(code **)(*piVar3 + 0x30))(piVar3,puVar4);
    if ((iStack_20 == unaff_EDI) && (iStack_1c == param_1)) {
      *unaff_ESI = (int)piVar6;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
      }
    }
    else {
      D3DXCreateTexture(DAT_004ce8f0,unaff_EDI,param_1,0,0,
                        *(undefined4 *)(((char *)&DAT_004a2338 + iVar1 * 4)),1,unaff_ESI);
      (**(code **)(*(int *)*unaff_ESI + 0x48))((int *)*unaff_ESI,0,&stack0xffffffb4);
      local_40 = unaff_EDI;
      if (iStack_20 < unaff_EDI + (int)this) {
        local_40 = iStack_20 - (int)this;
      }
      if (iStack_1c < param_1 + iStack_c) {
        param_1 = iStack_1c - iStack_c;
      }
      local_40 = local_40 + (int)this;
      local_3c[0] = (int *)(param_1 + iStack_c);
      local_44 = iStack_c;
      iVar2 = D3DXLoadSurfaceFromSurface(unaff_EBP,0,0,piVar5,0,&stack0xffffffb8,1,0);
      if (iVar2 != 0) {
        FUN_004622e0();
      }
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
        piVar5 = (int *)0x0;
      }
      if (unaff_EBP != (int *)0x0) {
        (**(code **)(*unaff_EBP + 8))(unaff_EBP,piVar3,puVar4,piVar5);
      }
      param_1 = iStack_10;
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 8))(piVar6);
        param_1 = iStack_10;
      }
    }
    FUN_0045ee00();
    unaff_ESI[3] = *(int *)(((char *)&DAT_004a235c + iVar1 * 4));
    return *(int *)(((char *)&DAT_004a235c + iVar1 * 4)) * unaff_EDI * param_1;
  }
  return -1;
}


