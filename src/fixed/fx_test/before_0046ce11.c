/* int __thiscall before(type_info * this, type_info * param_1) @ 0046ce11  36 bytes */

#include "th12.h"

/* Library Function - Single Match
    public: int __thiscall type_info_before(class type_info const &)const 
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __thiscall type_info_before(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (uint)(0 < iVar1);
}


