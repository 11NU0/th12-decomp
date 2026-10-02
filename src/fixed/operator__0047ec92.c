/* DName * __thiscall operator+(DName * this, DName * param_1, char * param_2) @ 0047ec92  36 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: class DName __thiscall DName_operator_add(char const *)const 
   
   Library: Visual Studio 2008 Release */

DName * __fastcall DName_operator_add(DName *(float *)this,DName *param_1,char *param_2)

{
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)this + 4);
  operator_add_assign(param_1,param_2);
  return param_1;
}


