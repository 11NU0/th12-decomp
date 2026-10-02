/* int __cdecl ___init_time(threadlocinfo * _LocInfo) @ 00483e6d  121 bytes */

#include "th12.h"

/* Library Function - Single Match
    ___init_time
   
   Library: Visual Studio 2008 Release */

int __cdecl ___init_time(threadlocinfo *_LocInfo)

{
  undefined **ppuVar1;
  undefined **_Memory;
  int iVar2;
  uint uVar3;
  int **ppiVar4;
  
  if (_LocInfo->lc_category[1].locale == (char *)0x0) {
    _Memory = &PTR_DAT_004adea8;
LAB_00483ec5:
    ppiVar4 = &_LocInfo[1].lc_category[0].wrefcount;
    ppuVar1 = (undefined **)*ppiVar4;
    if (ppuVar1 != &PTR_DAT_004adea8) {
      InterlockedDecrement((LONG *)(ppuVar1 + 0x2d));
    }
    *ppiVar4 = (int *)_Memory;
    iVar2 = 0;
  }
  else {
    _Memory = (undefined **)__calloc_crt(1,0xb8);
    if (_Memory != (undefined **)0x0) {
      uVar3 = __get_lc_time();
      if (uVar3 == 0) {
        _Memory[0x2d] = (undefined *)0x1;
        goto LAB_00483ec5;
      }
      ___free_lc_time(_Memory);
      _free(_Memory);
    }
    iVar2 = 1;
  }
  return iVar2;
}


