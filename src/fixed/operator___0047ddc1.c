/* DName * __thiscall operator|=(DName * this, DName * param_1) @ 0047ddc1  31 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: class DName & __thiscall DName_operator_or_assign(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __fastcall DName_operator_or_assign(DName *(float *)this,DName *param_1)

{
  if ((this[4] != (DName)0x3) && ('\x01' < (char)param_1[4])) {
    this[4] = param_1[4];
  }
  return this;
}


