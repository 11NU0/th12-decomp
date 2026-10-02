/* undefined __stdcall FUN_00431800(void) @ 00431800  37 bytes */
#include "th12.h"

void __stdcall FUN_00431800(void)

{
  char *pcVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  if ((*(uint *)((int)unaff_EDI + 0x590) & 0x8000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(unaff_EDI + (unaff_ESI * 3 + 0x102) * 8));
    pcVar1 = (char *)(unaff_ESI + 0x930 + unaff_EDI);
    *pcVar1 = *pcVar1 + -1;
  }
  return;
}


