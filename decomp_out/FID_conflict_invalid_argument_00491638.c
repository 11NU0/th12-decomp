/* undefined4 * __thiscall FID_conflict:invalid_argument(void * this, basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * param_1) @ 00491638  29 bytes */
#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall std::invalid_argument::invalid_argument(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const &)
    public: __thiscall std::invalid_argument::invalid_argument(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char>,class _STL70> const &)
    public: __thiscall std::length_error::length_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const &)
    public: __thiscall std::length_error::length_error(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char>,class _STL70> const &)
     5 names - too many to list
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2015 Release */

undefined4 * __thiscall
FID_conflict_invalid_argument
          (void *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  FID_conflict_runtime_error(this,param_1);
  *(undefined ***)this = &PTR_FUN_0049f3a8;
  return (undefined4 *)this;
}


