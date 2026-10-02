/* byte * __stdcall __wincmdln(void) @ 0047aba3  95 bytes */

#include "th12.h"

/* Library Function - Single Match
    __wincmdln
   
   Library: Visual Studio 2008 Release */

byte * __stdcall __wincmdln(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  
  bVar2 = false;
  if (DAT_004d6434 == 0) {
    ___initmbctable();
  }
  pbVar4 = DAT_004d645c;
  if (DAT_004d645c == (byte *)0x0) {
    pbVar4 = &DAT_0049fe19;
  }
  do {
    bVar1 = *pbVar4;
    if (bVar1 < 0x21) {
      if (bVar1 == 0) {
        return pbVar4;
      }
      if (!bVar2) {
        for (; (*pbVar4 != 0 && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
        }
        return pbVar4;
      }
    }
    if (bVar1 == 0x22) {
      bVar2 = !bVar2;
    }
    iVar3 = __ismbblead((uint)bVar1);
    if (iVar3 != 0) {
      pbVar4 = pbVar4 + 1;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}


