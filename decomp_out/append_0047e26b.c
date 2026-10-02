/* void __thiscall append(DName * this, DNameNode * param_1) @ 0047e26b  63 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: void __thiscall DName::append(class DNameNode *)
   
   Library: Visual Studio 2008 Release */

void __thiscall DName::append(DName *this,DNameNode *param_1)

{
  pairNode *this_00;
  int iVar1;
  
  if (param_1 != (DNameNode *)0x0) {
    this_00 = (pairNode *)HeapManager::getMemory((HeapManager *)&DAT_004b42f8,0x10,0);
    if (this_00 == (pairNode *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = pairNode::pairNode(this_00,*(DNameNode **)this,param_1);
    }
    *(int *)this = iVar1;
    if (iVar1 != 0) {
      return;
    }
  }
  this[4] = (DName)0x3;
  return;
}


