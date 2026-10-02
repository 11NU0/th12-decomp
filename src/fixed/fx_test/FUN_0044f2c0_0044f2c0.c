/* undefined __stdcall FUN_0044f2c0(void) @ 0044f2c0  98 bytes */

#include "th12.h"

void __stdcall FUN_0044f2c0(void)

{
  char cVar1;
  char *pcVar2;
  
  if (PTR_DAT_004b2ec8 != &DAT_004b0ec8) {
    FUN_00464220(&DAT_004b0ec8,"---------------------------------------------------------- \r\n");
    if (DAT_004b2ecc != '\0') {
      MessageBoxA((HWND)0x0,&DAT_004b0ec8,"log",0x10);
    }
    pcVar2 = &DAT_004b0ec8;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00463e80(&DAT_004b0ec8);
  }
  return;
}


