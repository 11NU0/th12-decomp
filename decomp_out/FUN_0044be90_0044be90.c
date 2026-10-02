/* undefined __fastcall FUN_0044be90(int param_1) @ 0044be90  34 bytes */
#include "th12.h"

void __fastcall FUN_0044be90(int param_1)

{
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


