/* undefined __thiscall basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>,class__STL70>(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>,class__STL70> * this, char * param_1) @ 004916bf  39 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char>,class _STL70>::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char>,class _STL70>(char const *)
   
   Library: Visual Studio 2015 Release */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>,class__STL70> *
__thiscall
std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>,class__STL70>::
basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>,class__STL70>
          (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>,class__STL70>
           *this,char *param_1)

{
  *(undefined4 *)(this + 0x18) = 0xf;
  FUN_0044edf0(this,0);
  FUN_0044ebd0(param_1);
  return this;
}


