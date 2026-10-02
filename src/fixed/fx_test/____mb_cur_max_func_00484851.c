/* int __cdecl ____mb_cur_max_func(void) @ 00484851  41 bytes */

#include "th12.h"

/* Library Function - Single Match
    ____mb_cur_max_func
   
   Library: Visual Studio 2008 Release */

int __cdecl ____mb_cur_max_func(void)

{
  _ptiddata p_Var1;
  pthreadlocinfo ptVar2;
  
  p_Var1 = __getptd();
  ptVar2 = p_Var1->ptlocinfo;
  if ((ptVar2 != (pthreadlocinfo)PTR_DAT_004adab8) && ((p_Var1->_ownlocale & DAT_004ad9d4) == 0)) {
    ptVar2 = ___updatetlocinfo();
  }
  return (int)ptVar2->locale_name[3];
}


