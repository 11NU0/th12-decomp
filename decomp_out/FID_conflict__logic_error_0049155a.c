/* undefined __fastcall FID_conflict:~logic_error(exception * param_1) @ 0049155a  31 bytes */
#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    public: virtual __thiscall std::logic_error::~logic_error(void)
    public: virtual __thiscall std::runtime_error::~runtime_error(void)
   
   Library: Visual Studio */

void __fastcall FID_conflict__logic_error(exception *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0049f384;
  FUN_0044ec00(param_1 + 0xc,'\x01',0);
  exception::~exception(param_1);
  return;
}


