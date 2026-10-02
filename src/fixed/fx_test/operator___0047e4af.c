/* DName * __thiscall operator+=(DName * this, DNameStatus param_1) @ 0047e4af  66 bytes */

#include "th12.h"

/* Library Function - Single Match
    public: class DName & __thiscall DName_operator_add_assign(enum DNameStatus)
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName_operator_add_assign(DName *this,DNameStatus param_1)

{
  DNameStatusNode *pDVar1;
  
  if ((char)this[4] < '\x02') {
    if (((*(int *)this == 0) || (param_1 == 2)) || (param_1 == 3)) {
      operator_assign(this,param_1);
    }
    else if (param_1 != 0) {
      pDVar1 = DNameStatusNode_make(param_1);
      append(this,(DNameNode *)pDVar1);
    }
  }
  return this;
}


