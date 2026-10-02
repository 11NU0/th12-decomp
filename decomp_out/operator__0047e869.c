/* DName * __thiscall operator=(DName * this, char param_1) @ 0047e869  45 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator=(char)
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName::operator=(DName *this,char param_1)

{
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  *(undefined4 *)this = 0;
  if (param_1 != '\0') {
    doPchar(this,&param_1,1);
  }
  return this;
}


