/* undefined4 __stdcall FUN_0044b8e0(void) @ 0044b8e0  51 bytes */

#include "th12.h"

undefined4 __stdcall FUN_0044b8e0(void)

{
  int *in_EAX;
  int iVar1;
  char *unaff_EBX;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)*in_EAX;
  if (puVar3 != (undefined4 *)0x0) {
    for (iVar2 = in_EAX[1]; 0 < iVar2; iVar2 = iVar2 + -1) {
      iVar1 = __stricmp(unaff_EBX,(char *)*puVar3);
      if (iVar1 == 0) {
        return puVar3[2];
      }
      puVar3 = puVar3 + 4;
    }
  }
  return 0;
}


