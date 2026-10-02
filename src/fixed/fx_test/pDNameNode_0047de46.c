/* undefined __thiscall pDNameNode(pDNameNode * this, DName * param_1) @ 0047de46  42 bytes */

#include "th12.h"

/* Library Function - Single Match
    public: __thiscall pDNameNode_pDNameNode(class DName *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall pDNameNode_pDNameNode(pDNameNode *this,DName *param_1)

{
  *(undefined ***)this = &PTR_LAB_0049ddc8;
  if ((param_1 != (DName *)0x0) && ((param_1[4] == (DName)0x2 || (param_1[4] == (DName)0x3)))) {
    param_1 = (DName *)0x0;
  }
  *(DName **)(this + 4) = param_1;
  return;
}


