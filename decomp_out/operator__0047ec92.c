/* DName * __thiscall operator+(DName * this, DName * param_1, char * param_2) @ 0047ec92  36 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: class DName __thiscall DName::operator+(char const *)const 
   
   Library: Visual Studio 2008 Release */

DName * __thiscall DName::operator+(DName *this,DName *param_1,char *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  operator+=(param_1,param_2);
  return param_1;
}


