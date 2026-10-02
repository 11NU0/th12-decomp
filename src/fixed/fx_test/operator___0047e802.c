/* DName * __thiscall operator+=(DName * this, DName * param_1) @ 0047e802  103 bytes */

#include "th12.h"

/* Library Function - Single Match
    public: class DName & __thiscall DName_operator_add_assign(class DName *)
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName_operator_add_assign(DName *this,DName *param_1)

{
  DName DVar1;
  pDNameNode *this_00;
  DNameNode *pDVar2;
  
  if (((char)this[4] < '\x02') && (param_1 != (DName *)0x0)) {
    if (*(int *)this == 0) {
      operator_assign(this,param_1);
    }
    else {
      DVar1 = param_1[4];
      if ((DVar1 == (DName)0x0) || (DVar1 == (DName)0x1)) {
        this_00 = (pDNameNode *)HeapManager_getMemory((HeapManager *)&DAT_004b42f8,8,0);
        if (this_00 == (pDNameNode *)0x0) {
          pDVar2 = (DNameNode *)0x0;
        }
        else {
          pDVar2 = (DNameNode *)pDNameNode_pDNameNode(this_00,param_1);
        }
        append(this,pDVar2);
      }
      else {
        DName_operator_add_assign(this,(int)(char)DVar1);
      }
    }
  }
  return this;
}


