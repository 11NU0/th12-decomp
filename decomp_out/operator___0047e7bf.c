/* DName * __thiscall operator+=(DName * this, DName * param_1) @ 0047e7bf  67 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: class DName & __thiscall DName::operator+=(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName::operator+=(DName *this,DName *param_1)

{
  if ((char)this[4] < '\x02') {
    if (*(DNameNode **)param_1 == (DNameNode *)0x0) {
      operator+=(this,(int)(char)param_1[4]);
    }
    else if (*(int *)this == 0) {
      FUN_0047dde0(this,(undefined4 *)param_1);
    }
    else {
      append(this,*(DNameNode **)param_1);
    }
  }
  return this;
}


