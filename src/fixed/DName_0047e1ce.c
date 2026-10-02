/* undefined __thiscall DName(DName * this, DNameStatus param_1) @ 0047e1ce  69 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: __thiscall DName_DName(enum DNameStatus)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

DName * __fastcall DName_DName(DName *(float *)this,DNameStatus param_1)

{
  DNameStatus DVar1;
  DNameStatusNode *pDVar2;
  
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xffff00ff;
  DVar1 = param_1;
  if ((param_1 != 2) && (param_1 != 3)) {
    DVar1 = 0;
  }
  *(undefined4 *)this = 0;
  this[4] = SUB41(DVar1,0);
  if (param_1 == 1) {
    pDVar2 = DNameStatusNode_make(1);
    *(DNameStatusNode **)this = pDVar2;
    if (pDVar2 == (DNameStatusNode *)0x0) {
      this[4] = (DName)0x3;
    }
  }
  return this;
}


