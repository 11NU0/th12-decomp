/* undefined __thiscall DNameStatusNode(DNameStatusNode * this, DNameStatus param_1) @ 0047deb6  37 bytes */

#include "th12.h"

/* Library Function - Single Match
    private: __thiscall DNameStatusNode_DNameStatusNode(enum DNameStatus)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall DNameStatusNode_DNameStatusNode(DNameStatusNode *this,DNameStatus param_1)

{
  *(DNameStatus *)(this + 4) = param_1;
  *(undefined ***)this = &PTR_LAB_0049ddd4;
  *(uint *)(this + 8) = (-(uint)(param_1 != 1) & 0xfffffffc) + 4;
  return;
}


