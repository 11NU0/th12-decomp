/* undefined4 * __thiscall FID_conflict:invalid_argument(void * this, basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * param_1) @ 00491638  29 bytes */

#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall std_invalid_argument::invalid_argument(class std_basic_string<char,struct
   std_char_traits<char>,class std_allocator<char> > const &)
    public: __thiscall std_invalid_argument::invalid_argument(class std_basic_string<char,struct
   std_char_traits<char>,class std_allocator<char>,class _STL70> const &)
    public: __thiscall std_length_error::length_error(class std_basic_string<char,struct
   std_char_traits<char>,class std_allocator<char> > const &)
    public: __thiscall std_length_error::length_error(class std_basic_string<char,struct
   std_char_traits<char>,class std_allocator<char>,class _STL70> const &)
     5 names - too many to list
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2015 Release */

undefined4 * __thiscall
FID_conflict_invalid_argument
          (void *this,
          basic_string<char,struct_std_char_traits<char>,class_std_allocator<char>_> *param_1)

{
  FID_conflict_runtime_error(this,param_1);
  *(undefined ***)this = &PTR_FUN_0049f3a8;
  return (undefined4 *)this;
}


