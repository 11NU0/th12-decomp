/* undefined __thiscall pcharNode(pcharNode * this, char * param_1, int param_2) @ 0047e3b8  87 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: __thiscall pcharNode_pcharNode(char const *,int)
   
   Library: Visual Studio 2008 Release */

pcharNode * __fastcall pcharNode_pcharNode(pcharNode *(float *)this,char *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  *(undefined ***)this = &PTR_LAB_0049ddec;
  if ((param_2 == 0) || (param_1 == (char *)0x0)) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
  }
  else {
    puVar1 = (undefined *)HeapManager_getMemory((HeapManager *)&DAT_004b42f8,param_2,0);
    *(undefined **)((int)this + 4) = puVar1;
    *(int *)((int)this + 8) = param_2;
    if ((puVar1 != (undefined *)0x0) && (param_2 != 0)) {
      iVar2 = (int)param_1 - (int)puVar1;
      do {
        *puVar1 = puVar1[iVar2];
        puVar1 = puVar1 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return this;
}


