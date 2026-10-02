/* DName * __thiscall operator=(DName * this, DName * param_1) @ 0047e2aa  77 bytes */

#include "th12.h"

/* Library Function - Single Match
    public: class DName & __thiscall DName_operator_assign(class DName *)
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName_operator_assign(DName *this,DName *param_1)

{
  pDNameNode *this_00;
  int iVar1;
  
  *(undefined4 *)this = 0;
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  if (param_1 != (DName *)0x0) {
    this_00 = (pDNameNode *)HeapManager_getMemory((HeapManager *)&DAT_004b42f8,8,0);
    if (this_00 == (pDNameNode *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = pDNameNode_pDNameNode(this_00,param_1);
    }
    *(int *)this = iVar1;
    if (iVar1 != 0) {
      return this;
    }
  }
  this[4] = (DName)0x3;
  return this;
}


