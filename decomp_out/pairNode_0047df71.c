/* undefined __thiscall pairNode(pairNode * this, DNameNode * param_1, DNameNode * param_2) @ 0047df71  33 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: __thiscall pairNode::pairNode(class DNameNode *,class DNameNode *)
   
   Library: Visual Studio 2008 Release */

void __thiscall pairNode::pairNode(pairNode *this,DNameNode *param_1,DNameNode *param_2)

{
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(DNameNode **)(this + 4) = param_1;
  *(undefined ***)this = &PTR_LAB_0049dde0;
  *(DNameNode **)(this + 8) = param_2;
  return;
}


