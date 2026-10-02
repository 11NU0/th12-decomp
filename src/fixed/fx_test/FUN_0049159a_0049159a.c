/* undefined4 * __thiscall FUN_0049159a(void * this, basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * param_1) @ 0049159a  29 bytes */

#include "th12.h"

undefined4 * __thiscall
FUN_0049159a(void *this,
            basic_string<char,struct_std_char_traits<char>,class_std_allocator<char>_> *param_1)

{
  FID_conflict_runtime_error(this,param_1);
  *(undefined ***)this = &PTR_FUN_0049f390;
  return (undefined4 *)this;
}


