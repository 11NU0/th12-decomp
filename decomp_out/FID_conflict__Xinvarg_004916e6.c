/* undefined __stdcall FID_conflict:_Xinvarg(void) @ 004916e6  56 bytes */
#include "th12.h"

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Different Base Names
    public: static void __cdecl std::_String_base::_Xinvarg(void)
    public: static void __cdecl std::_String_base::_Xlen(void)
   
   Library: Visual Studio 2015 Release */

void FID_conflict__Xinvarg(void)

{
  code *pcVar1;
  undefined local_54 [40];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>,class__STL70>
  local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x4916f2;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>,class__STL70>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>,class__STL70>
            (local_2c,"invalid string position");
  local_8 = 0;
  FID_conflict_invalid_argument
            (local_54,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)local_2c);
  __CxxThrowException_8(local_54,&DAT_004ab2d4);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


