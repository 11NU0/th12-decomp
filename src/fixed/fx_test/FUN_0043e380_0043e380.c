/* undefined __stdcall FUN_0043e380(void) @ 0043e380  83 bytes */

#include "th12.h"

void __stdcall FUN_0043e380(void)

{
  void *_Memory;
  int unaff_ESI;
  int iVar1;
  
  if (*(int *)(unaff_ESI + 0x34) != 0) {
    if (0 < *(int *)(unaff_ESI + 0x38)) {
      iVar1 = 0;
      do {
        _Memory = *(void **)(*(int *)(unaff_ESI + 0x34) + iVar1 * 4);
        if (_Memory != (void *)0x0) {
          _free(_Memory);
          *(undefined4 *)(*(int *)(unaff_ESI + 0x34) + iVar1 * 4) = 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(unaff_ESI + 0x38));
    }
    if (*(void **)(unaff_ESI + 0x34) != (void *)0x0) {
      _free(*(void **)(unaff_ESI + 0x34));
      *(undefined4 *)(unaff_ESI + 0x34) = 0;
    }
    *(undefined4 *)(unaff_ESI + 0x34) = 0;
  }
  return;
}


