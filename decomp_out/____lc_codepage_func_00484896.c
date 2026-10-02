/* UINT __cdecl ____lc_codepage_func(void) @ 00484896  38 bytes */
#include "th12.h"

/* Library Function - Single Match
    ____lc_codepage_func
   
   Library: Visual Studio 2008 Release */

UINT __cdecl ____lc_codepage_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_004adab8) && ((p_Var1->_ownlocale & DAT_004ad9d4) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return ptVar2->lc_codepage;
}


