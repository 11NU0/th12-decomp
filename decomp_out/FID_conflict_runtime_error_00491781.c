/* exception * __thiscall FID_conflict:runtime_error(void * this, exception * param_1) @ 00491781  58 bytes */
#include "th12.h"

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall std::logic_error::logic_error(class std::logic_error const &)
    public: __thiscall std::runtime_error::runtime_error(class std::runtime_error const &)
   
   Library: Visual Studio 2008 Release */

exception * __thiscall FID_conflict_runtime_error(void *this,exception *param_1)

{
  std::exception::exception((exception *)this,param_1);
  *(undefined ***)this = &PTR_FUN_0049f384;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0xc),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0xc));
  return (exception *)this;
}


