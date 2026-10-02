/* exception * __thiscall FID_conflict:runtime_error(void * this, basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * param_1) @ 00491517  53 bytes */

#include "th12.h"

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall std_logic_error::logic_error(class std_basic_string<char,struct
   std_char_traits<char>,class std_allocator<char> > const &)
    public: __thiscall std_runtime_error::runtime_error(class std_basic_string<char,struct
   std_char_traits<char>,class std_allocator<char> > const &)
   
   Library: Visual Studio 2008 Release */

exception * __thiscall
FID_conflict_runtime_error
          (void *this,
          basic_string<char,struct_std_char_traits<char>,class_std_allocator<char>_> *param_1)

{
  std_exception_exception((exception *)this);
  *(undefined ***)this = &PTR_FUN_0049f384;
  std_basic_string<char,struct_std_char_traits<char>,class_std_allocator<char>_>::
  basic_string<char,struct_std_char_traits<char>,class_std_allocator<char>_>
            ((basic_string<char,struct_std_char_traits<char>,class_std_allocator<char>_> *)
             ((int)this + 0xc),param_1);
  return (exception *)this;
}


