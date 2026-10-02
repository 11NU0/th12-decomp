/* undefined __thiscall __non_rtti_object(__non_rtti_object * this, char * param_1) @ 0046e135  29 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: __thiscall std::__non_rtti_object::__non_rtti_object(char const *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

__non_rtti_object * __thiscall
std::__non_rtti_object::__non_rtti_object(__non_rtti_object *this,char *param_1)

{
  bad_typeid::bad_typeid((bad_typeid *)this,param_1);
  *(undefined ***)this = &PTR_FUN_0049cd60;
  return this;
}


