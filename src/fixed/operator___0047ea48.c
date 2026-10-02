/* DName * __thiscall operator+=(DName * this, char * param_1) @ 0047ea48  100 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: class DName & __thiscall DName_operator_add_assign(char const *)
   
   Library: Visual Studio 2008 Release */

DName * __fastcall DName_operator_add_assign(DName *(float *)this,char *param_1)

{
  char cVar1;
  pcharNode *this_00;
  DNameNode *pDVar2;
  int iVar3;
  
  if ((((char)this[4] < '\x02') && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    if (*(int *)this == 0) {
      operator_assign(this,param_1);
    }
    else {
      this_00 = (pcharNode *)HeapManager_getMemory((HeapManager *)&DAT_004b42f8,0xc,0);
      if (this_00 == (pcharNode *)0x0) {
        pDVar2 = (DNameNode *)0x0;
      }
      else {
        iVar3 = 0;
        cVar1 = *param_1;
        while (cVar1 != '\0') {
          iVar3 = iVar3 + 1;
          cVar1 = param_1[iVar3];
        }
        pDVar2 = (DNameNode *)pcharNode_pcharNode(this_00,param_1,iVar3);
      }
      append(this,pDVar2);
    }
  }
  return this;
}


