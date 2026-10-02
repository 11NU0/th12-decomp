/* undefined __thiscall bad_alloc(bad_alloc * this) @ 0046c9cf  27 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: __thiscall std::bad_alloc::bad_alloc(void)
   
   Library: Visual Studio 2008 Release */

bad_alloc * __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  exception::exception((exception *)this,&PTR_s_bad_allocation_004ad0b0,1);
  *(undefined ***)this = &PTR_FUN_0049cd00;
  return this;
}


