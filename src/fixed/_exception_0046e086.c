/* void __thiscall ~exception(exception * this) @ 0046e086  22 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Library: Visual Studio 2008 Release */

void __fastcall exception::~exception(exception *(float *)this)

{
  *(undefined ***)this = &PTR_FUN_0049cd28;
  if (*(int *)((int)this + 8) != 0) {
    _free(*(void **)((int)this + 4));
  }
  return;
}


