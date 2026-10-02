/* DName * __cdecl getLexicalFrame(DName * param_1) @ 0047f32e  51 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getLexicalFrame(void)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getLexicalFrame(DName *param_1)

{
  DName *pDVar1;
  DName *pDVar2;
  char cVar3;
  DName local_14 [8];
  DName local_c [8];
  
  cVar3 = '\'';
  pDVar2 = param_1;
  pDVar1 = getDimension(local_c,'\0');
  pDVar1 = DName_operator_add(local_14,'`',pDVar1);
  DName_operator_add(pDVar1,pDVar2,cVar3);
  return param_1;
}


