/* bool __thiscall operator!=(type_info * this, type_info * param_1) @ 0046cdf0  33 bytes */

#include "th12.h"

/* Library Function - Single Match
    public: bool __thiscall type_info_operator_not_equal(class type_info const &)const 
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

bool __thiscall type_info_operator_not_equal(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return iVar1 != 0;
}


