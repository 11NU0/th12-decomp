/* undefined __stdcall FUN_004123c0(void) @ 004123c0  126 bytes */
#include "th12.h"

void FUN_004123c0(void)

{
  int iVar1;
  int unaff_ESI;
  void *_Dst;
  
  *(uint *)(unaff_ESI + 0x27c) = *(uint *)(unaff_ESI + 0x27c) & 0xfffffffe;
  *(uint *)(unaff_ESI + 0x2cc) = *(uint *)(unaff_ESI + 0x2cc) & 0xfffffffe;
  *(uint *)(unaff_ESI + 0x318) = *(uint *)(unaff_ESI + 0x318) & 0xfffffffe;
  *(uint *)(unaff_ESI + 0x354) = *(uint *)(unaff_ESI + 0x354) & 0xfffffffe;
  *(uint *)(unaff_ESI + 0x390) = *(uint *)(unaff_ESI + 0x390) & 0xfffffffe;
  *(uint *)(unaff_ESI + 0x3cc) = *(uint *)(unaff_ESI + 0x3cc) & 0xfffffffe;
  *(uint *)(unaff_ESI + 0x408) = *(uint *)(unaff_ESI + 0x408) & 0xfffffffe;
  *(uint *)(unaff_ESI + 0x444) = *(uint *)(unaff_ESI + 0x444) & 0xfffffffe;
  *(uint *)(unaff_ESI + 0x480) = *(uint *)(unaff_ESI + 0x480) & 0xfffffffe;
  _Dst = (void *)(unaff_ESI + 0x48c);
  iVar1 = 7;
  do {
    _memset(_Dst,0,0x214);
    *(undefined4 *)((int)_Dst + 0x208) = 0xffffffff;
    _Dst = (void *)((int)_Dst + 0x214);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(uint *)(unaff_ESI + 0x16a0) = *(uint *)(unaff_ESI + 0x16a0) & 0xfffffffe;
  *(uint *)(unaff_ESI + 0x16b4) = *(uint *)(unaff_ESI + 0x16b4) & 0xfffffffe;
  return;
}


