/* undefined4 __stdcall FUN_0041ca10(void) @ 0041ca10  86 bytes */
#include "th12.h"

undefined4 __stdcall FUN_0041ca10(void)

{
  undefined4 *puVar1;
  int unaff_EDI;
  
  puVar1 = (undefined4 *)operator_new(0x24);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = puVar1[1] & 0xfffffffe;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[5] = puVar1;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  puVar1[1] = puVar1[1] | 3;
  puVar1[2] = ((void *)0x0041cd60);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[8] = unaff_EDI;
  FUN_00462420();
  *(undefined4 **)((int)unaff_EDI + 0xc) = puVar1;
  return 0;
}


