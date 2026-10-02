/* undefined __thiscall exception(exception * this) @ 0046df4d  17 bytes */

#include "th12.h"

/* Library Function - Single Match
    public: __thiscall std_exception::exception(void)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall std_exception_exception(exception *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &PTR_FUN_0049cd28;
  return;
}


