/* void * __thiscall `scalar_deleting_destructor'(type_info * this, uint param_1) @ 0046cd91  33 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: virtual void * __thiscall type_info::`scalar deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void * __thiscall type_info::_scalar_deleting_destructor_(type_info *this,uint param_1)

{
  ~type_info(this);
  if ((param_1 & 1) != 0) {
    FUN_0046ca4f(this);
  }
  return this;
}


