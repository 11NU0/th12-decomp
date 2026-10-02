/* DName * __thiscall operator[](Replicator * this, DName * param_1, uint param_2) @ 0047e378  64 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: class DName __thiscall Replicator_operator_index(int)const 
   
   Library: Visual Studio 2008 Release */

DName * __fastcall Replicator_operator_index(Replicator *(float *)this,DName *param_1,uint param_2)

{
  undefined4 *puVar1;
  DNameStatus DVar2;
  
  if (param_2 < 10) {
    if ((*(int *)this != -1) && ((int)param_2 <= *(int *)this)) {
      puVar1 = *(undefined4 **)(this + param_2 * 4 + 4);
      *(undefined4 *)param_1 = *puVar1;
      *(undefined4 *)((int)param_1 + 4) = puVar1[1];
      return param_1;
    }
    DVar2 = 2;
  }
  else {
    DVar2 = 3;
  }
  DName_DName(param_1,DVar2);
  return param_1;
}


