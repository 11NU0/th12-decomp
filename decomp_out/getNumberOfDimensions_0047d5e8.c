/* int __cdecl getNumberOfDimensions(void) @ 0047d5e8  99 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static int __cdecl UnDecorator::getNumberOfDimensions(void)
   
   Library: Visual Studio 2008 Release */

int __cdecl UnDecorator::getNumberOfDimensions(void)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *DAT_004b4318;
  if (cVar2 != '\0') {
    if (('/' < cVar2) && (cVar2 < ':')) {
      DAT_004b4318 = DAT_004b4318 + 1;
      return cVar2 + -0x2f;
    }
    iVar1 = 0;
LAB_0047d634:
    if (cVar2 == '@') {
      cVar2 = *DAT_004b4318;
      DAT_004b4318 = DAT_004b4318 + 1;
      if (cVar2 != '@') {
LAB_0047d647:
        iVar1 = -1;
      }
      return iVar1;
    }
    if (cVar2 != '\0') {
      if ((cVar2 < 'A') || ('P' < cVar2)) goto LAB_0047d647;
      DAT_004b4318 = DAT_004b4318 + 1;
      iVar1 = iVar1 * 0x10 + -0x41 + (int)cVar2;
      cVar2 = *DAT_004b4318;
      goto LAB_0047d634;
    }
  }
  return 0;
}


