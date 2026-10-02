/* undefined __stdcall FUN_00406550(void) @ 00406550  62 bytes */
#include "th12.h"

void FUN_00406550(void)

{
  int unaff_EBX;
  int unaff_ESI;
  
  *(int *)(unaff_ESI + 0x54c) = unaff_EBX * 0x118 + 0x204 + unaff_ESI;
  FUN_00430910();
  (**(code **)(**(int **)(unaff_ESI + 8) + 0xbc))
            (*(int **)(unaff_ESI + 8),*(int *)(unaff_ESI + 0x54c) + 0xcc);
  *(int *)(unaff_ESI + 0x550) = unaff_EBX;
  return;
}


