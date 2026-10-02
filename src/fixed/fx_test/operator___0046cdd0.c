/* bool __thiscall operator==(type_info * this, type_info * param_1) @ 0046cdd0  32 bytes */

#include "th12.h"

/* Library Function - Single Match
    public: bool __thiscall type_info_operator_equal(class type_info const &)const 
   
   Library: Visual Studio 2008 Release */

bool __thiscall type_info_operator_equal(type_info *this,type_info *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(param_1 + 9),(char *)(this + 9));
  return (bool)('\x01' - (iVar1 != 0));
}


