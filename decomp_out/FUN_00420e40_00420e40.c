/* undefined1 * __stdcall FUN_00420e40(void) @ 00420e40  41 bytes */
#include "th12.h"

undefined1 * FUN_00420e40(void)

{
  byte bVar1;
  byte *in_EAX;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  
  cVar3 = '\a';
  pbVar4 = &DAT_004d5040;
  bVar2 = 0x77;
  do {
    bVar1 = *in_EAX ^ bVar2;
    bVar2 = bVar2 + cVar3;
    *pbVar4 = bVar1;
    pbVar4 = pbVar4 + 1;
    in_EAX = in_EAX + 1;
    cVar3 = cVar3 + '\x10';
  } while (bVar1 != 0);
  return &DAT_004d5040;
}


