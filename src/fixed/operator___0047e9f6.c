/* DName * __thiscall operator+=(DName * this, char param_1) @ 0047e9f6  82 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: class DName & __thiscall DName_operator_add_assign(char)
   
   Library: Visual Studio 2008 Release */

DName * __fastcall DName_operator_add_assign(DName *(float *)this,char param_1)

{
  DNameNode *pDVar1;
  
  if (((char)this[4] < '\x02') && (param_1 != '\0')) {
    if (*(int *)this == 0) {
      operator_assign(this,param_1);
    }
    else {
      pDVar1 = (DNameNode *)HeapManager_getMemory((HeapManager *)&DAT_004b42f8,8,0);
      if (pDVar1 == (DNameNode *)0x0) {
        pDVar1 = (DNameNode *)0x0;
      }
      else {
        *(undefined ***)pDVar1 = &PTR_LAB_0049ddbc;
        pDVar1[4] = (DNameNode)param_1;
      }
      append(this,pDVar1);
    }
  }
  return this;
}


