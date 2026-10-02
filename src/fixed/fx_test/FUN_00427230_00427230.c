/* undefined4 __stdcall FUN_00427230(void) @ 00427230  335 bytes */

#include "th12.h"

undefined4 __stdcall FUN_00427230(void)

{
  float fVar1;
  int in_EAX;
  int iVar2;
  float *pfVar3;
  undefined local_4;
  
  pfVar3 = (float *)(in_EAX + 0x43c);
  iVar2 = 0xa58;
  do {
    if ((pfVar3[0x162] != 0.0) && ((*(byte *)(pfVar3 + 0x15) & 1) != 0)) {
      pfVar3[-1] = pfVar3[0x151] + 32.0 + 192.0;
      *pfVar3 = pfVar3[0x152] + 16.0;
      pfVar3[1] = pfVar3[0x153];
      pfVar3[300] = pfVar3[-1];
      pfVar3[0x12d] = *pfVar3;
      pfVar3[0x12e] = pfVar3[1];
      if (8.0 <= *pfVar3) {
        FUN_0045c900((void *)*pfVar3,DAT_004ce8cc);
        pfVar3[0x164] = 0.0;
      }
      else {
        fVar1 = pfVar3[0x12d];
        pfVar3[0x12d] = 24.0;
        if (fVar1 - 8.0 < 32.0) {
          local_4 = (undefined)(int)ROUND((fVar1 - 8.0) * 0.03125 * 255.0);
          *(undefined *)((int)pfVar3 + 1099) = local_4;
        }
        else {
          *(undefined *)((int)pfVar3 + 1099) = 0xff;
        }
        FUN_0045c900(DAT_004ce8cc,DAT_004ce8cc);
        pfVar3[0x164] = 1.4013e-45;
      }
    }
    pfVar3 = pfVar3 + 0x276;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 1;
}


