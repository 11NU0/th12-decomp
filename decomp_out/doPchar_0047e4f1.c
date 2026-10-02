/* void __thiscall doPchar(DName * this, char * param_1, int param_2) @ 0047e4f1  124 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: void __thiscall DName::doPchar(char const *,int)
   
   Library: Visual Studio 2008 Release */

void __thiscall DName::doPchar(DName *this,char *param_1,int param_2)

{
  char cVar1;
  pcharNode *this_00;
  undefined4 *puVar2;
  
  if (*(int *)this != 0) {
    operator=(this,3);
    return;
  }
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    this[4] = (DName)0x2;
    return;
  }
  if (param_2 == 0) goto LAB_0047e55d;
  if (param_2 == 1) {
    puVar2 = (undefined4 *)HeapManager::getMemory((HeapManager *)&DAT_004b42f8,8,0);
    if (puVar2 == (undefined4 *)0x0) goto LAB_0047e555;
    cVar1 = *param_1;
    *puVar2 = &PTR_LAB_0049ddbc;
    *(char *)(puVar2 + 1) = cVar1;
  }
  else {
    this_00 = (pcharNode *)HeapManager::getMemory((HeapManager *)&DAT_004b42f8,0xc,0);
    if (this_00 == (pcharNode *)0x0) {
LAB_0047e555:
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)pcharNode::pcharNode(this_00,param_1,param_2);
    }
  }
  *(undefined4 **)this = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    return;
  }
LAB_0047e55d:
  this[4] = (DName)0x3;
  return;
}


