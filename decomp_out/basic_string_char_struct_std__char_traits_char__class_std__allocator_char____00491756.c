/* undefined __thiscall basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * this, basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * param_1) @ 00491756  43 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >(class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const &)
   
   Library: Visual Studio 2008 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  *(undefined4 *)(this + 0x18) = 0xf;
  FUN_0044edf0(this,0);
  FUN_0044eaf0(this,param_1,0,0xffffffff);
  return this;
}


