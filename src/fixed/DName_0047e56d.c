/* undefined __thiscall DName(DName * this, char param_1) @ 0047e56d  45 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: __thiscall DName_DName(char)
   
   Library: Visual Studio 2008 Release */

DName * __fastcall DName_DName(DName *(float *)this,char param_1)

{
  this[4] = (DName)0x0;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xffff00ff;
  *(undefined4 *)this = 0;
  if (param_1 != '\0') {
    doPchar(this,&param_1,1);
  }
  return this;
}


