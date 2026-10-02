/* undefined __stdcall FUN_00402410(void) @ 00402410  62 bytes */
#include "th12.h"

void __stdcall FUN_00402410(void)

{
  int unaff_EBX;
  int unaff_ESI;
  
  *(int *)((int)unaff_ESI + 0x54c) = unaff_EBX * 0x118 + 0x204 + unaff_ESI;
  FUN_00430a70();
  (**(code **)(**(int **)((int)unaff_ESI + 8) + 0xbc))
            (*(int **)((int)unaff_ESI + 8),*(int *)((int)unaff_ESI + 0x54c) + 0xcc);
  *(int *)((int)unaff_ESI + 0x550) = unaff_EBX;
  return;
}


