/* DName * __thiscall operator=(DName * this, char * param_1) @ 0047e896  53 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: class DName & __thiscall DName_operator_assign(char const *)
   
   Library: Visual Studio 2008 Release */

DName * __fastcall DName_operator_assign(DName *(float *)this,char *param_1)

{
  char cVar1;
  int iVar2;
  
  this[4] = (DName)0x0;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xffff00ff;
  *(undefined4 *)this = 0;
  iVar2 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
    cVar1 = param_1[iVar2];
  }
  doPchar(this,param_1,iVar2);
  return this;
}


