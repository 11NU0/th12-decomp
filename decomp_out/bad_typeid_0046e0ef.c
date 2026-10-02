/* undefined __thiscall bad_typeid(bad_typeid * this, char * param_1) @ 0046e0ef  30 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: __thiscall std::bad_typeid::bad_typeid(char const *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

bad_typeid * __thiscall std::bad_typeid::bad_typeid(bad_typeid *this,char *param_1)

{
  exception::exception((exception *)this,&param_1);
  *(undefined ***)this = &PTR_FUN_0049cd54;
  return this;
}


