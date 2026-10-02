/* undefined4 __fastcall FUN_0044b960(undefined4 param_1, undefined4 param_2) @ 0044b960  336 bytes */
#include "th12.h"

uint __fastcall FUN_0044b960(undefined4 param_1,undefined4 param_2)

{
  size_t _Size;
  uint in_EAX;
  uint *puVar1;
  int iVar2;
  uint *_Memory;
  int iVar3;
  int unaff_EBX;
  uint *unaff_EBP;
  undefined4 *unaff_ESI;
  int iStack_10;
  int iStack_c;
  
  if ((undefined4 *)unaff_ESI[3] == (undefined4 *)0x0) {
    return in_EAX & 0xffffff00;
  }
  puVar1 = (uint *)(*(code *)**(undefined4 **)unaff_ESI[3])(param_2,&DAT_004a2334);
  if ((char)puVar1 != '\0') {
    puVar1 = (uint *)(**(code **)(*(int *)unaff_ESI[3] + 8))(&stack0xffffffe8,0x10);
    if (puVar1 != (uint *)0x0) {
      puVar1 = (uint *)FUN_004639d0(&stack0xffffffe8,0x10,'7',0x10,0x10);
      if (unaff_EBX == 0x31414854) {
        _Size = iStack_10 + 0xc521974f;
        unaff_ESI[1] = iStack_c + -0x8180754;
        iVar2 = (**(code **)(*(int *)unaff_ESI[3] + 0x14))();
        (**(code **)(*(int *)unaff_ESI[3] + 0x18))(iVar2 - _Size,0);
        _Memory = (uint *)_malloc(_Size);
        puVar1 = _Memory;
        if (_Memory != (uint *)0x0) {
          iVar3 = (**(code **)(*(int *)unaff_ESI[3] + 8))(_Memory,_Size);
          if (iVar3 == 0) {
            puVar1 = (uint *)0x0;
          }
          else {
            FUN_004639d0((byte *)_Memory,_Size,-0x65,0x80,_Size);
            unaff_EBP = (uint *)FUN_0044c710(_Memory,_Size,0);
            puVar1 = unaff_EBP;
            if (unaff_EBP != (uint *)0x0) {
              puVar1 = FUN_0044bab0(unaff_EBP,unaff_ESI[1],iVar2 - _Size);
              *unaff_ESI = puVar1;
              if (puVar1 != (uint *)0x0) {
                _free(_Memory);
                _free(unaff_EBP);
                return CONCAT31((int3)((uint)puVar1 >> 8),1);
              }
            }
          }
          _free(_Memory);
          if (unaff_EBP != (uint *)0x0) {
            _free(unaff_EBP);
          }
        }
      }
    }
  }
  if ((int *)unaff_ESI[3] != (int *)0x0) {
    puVar1 = (uint *)(**(code **)(*(int *)unaff_ESI[3] + 0x1c))(1);
  }
  unaff_ESI[3] = 0;
  return (uint)puVar1 & 0xffffff00;
}


