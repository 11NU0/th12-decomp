/* Replicator * __thiscall operator+=(Replicator * this, DName * param_1) @ 0047e32e  74 bytes */

#include "th12.h"

/* Library Function - Single Match
    public: class Replicator & __thiscall Replicator_operator_add_assign(class DName const &)
   
   Library: Visual Studio 2008 Release */

Replicator * __thiscall Replicator_operator_add_assign(Replicator *this,DName *param_1)

{
  undefined4 *puVar1;
  
  if ((*(int *)this != 9) && (*(int *)param_1 != 0)) {
    puVar1 = (undefined4 *)HeapManager_getMemory((HeapManager *)&DAT_004b42f8,8,0);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = *(undefined4 *)param_1;
      puVar1[1] = *(undefined4 *)(param_1 + 4);
    }
    if (puVar1 != (undefined4 *)0x0) {
      *(int *)this = *(int *)this + 1;
      *(undefined4 **)(this + *(int *)this * 4 + 4) = puVar1;
    }
  }
  return this;
}


