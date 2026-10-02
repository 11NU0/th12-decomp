/* void __thiscall ~type_info(type_info * this) @ 0046cd81  16 bytes */

#include "th12.h"

/* Library Function - Single Match
    public: virtual __thiscall type_info::~type_info(void)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall type_info::~type_info(type_info *this)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__0049cd0c;
  _Type_info_dtor(this);
  return;
}


