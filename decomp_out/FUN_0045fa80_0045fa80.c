/* int __thiscall FUN_0045fa80(void * this, undefined4 param_1, undefined4 param_2) @ 0045fa80  287 bytes */
#include "th12.h"

int __thiscall FUN_0045fa80(void *this,undefined4 param_1,undefined4 param_2)

{
  int in_EAX;
  int iVar1;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  int iStack_4;
  
  local_18 = (int *)0x0;
  if ((DAT_004ceae8 & 1) != 0) {
    iVar1 = *(int *)(&DAT_004a2338 + in_EAX * 4);
    if ((iVar1 == 0x15) || (iVar1 == 0)) {
      in_EAX = 5;
    }
    else if (iVar1 == 0x14) {
      in_EAX = 3;
    }
  }
  unaff_EDI[4] = unaff_EDI[4] & 0xfffffffe;
  local_c = (int)*(short *)((int)this + 8);
  local_8 = (int)*(short *)((int)this + 10);
  local_14 = 0;
  local_10 = 0;
  iVar1 = D3DXCreateTexture(DAT_004ce8f0,param_1,param_2,1,0,
                            *(undefined4 *)(&DAT_004a2338 + in_EAX * 4),1,unaff_EDI);
  if (iVar1 != 0) {
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))(local_18);
    }
    return -1;
  }
  (**(code **)(*(int *)*unaff_EDI + 0x48))((int *)*unaff_EDI,0,&local_18);
  D3DXLoadSurfaceFromMemory
            (unaff_ESI,0,&stack0xffffffe0,(int)this + 0x10,
             *(undefined4 *)(&DAT_004a2338 + *(short *)((int)this + 6) * 4),
             (int)*(short *)((int)this + 8) *
             *(int *)(&DAT_004a235c + *(short *)((int)this + 6) * 4),0,&stack0xffffffe0,1,0);
  unaff_EDI[3] = *(undefined4 *)(&DAT_004a235c + in_EAX * 4);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return *(int *)(&DAT_004a235c + in_EAX * 4) * local_8 * iStack_4;
}


