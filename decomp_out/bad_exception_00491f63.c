/* undefined __thiscall bad_exception(bad_exception * this, char * param_1) @ 00491f63  30 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: __thiscall std::bad_exception::bad_exception(char const *)
   
   Library: Visual Studio 2008 Release */

bad_exception * __thiscall std::bad_exception::bad_exception(bad_exception *this,char *param_1)

{
  exception::exception((exception *)this,&param_1);
  *(undefined ***)this = &PTR_FUN_0049f3f8;
  return this;
}


