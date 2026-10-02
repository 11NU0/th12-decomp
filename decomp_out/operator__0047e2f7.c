/* DName * __thiscall operator=(DName * this, DNameStatus param_1) @ 0047e2f7  55 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(enum DNameStatus)
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName::operator=(DName *this,DNameStatus param_1)

{
  DNameStatusNode *pDVar1;
  
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  this[4] = SUB41(param_1,0);
  if (param_1 == 1) {
    pDVar1 = DNameStatusNode::make(1);
    *(DNameStatusNode **)this = pDVar1;
    if (pDVar1 == (DNameStatusNode *)0x0) {
      this[4] = (DName)0x3;
    }
  }
  else {
    *(undefined4 *)this = 0;
  }
  return this;
}


