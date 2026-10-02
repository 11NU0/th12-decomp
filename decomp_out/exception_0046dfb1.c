/* undefined __thiscall exception(exception * this, char * * param_1, int param_2) @ 0046dfb1  29 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: __thiscall std::exception::exception(char const * const &,int)
   
   Library: Visual Studio 2008 Release */

void __thiscall std::exception::exception(exception *this,char **param_1,int param_2)

{
  char *pcVar1;
  
  *(undefined ***)this = &PTR_FUN_0049cd28;
  pcVar1 = *param_1;
  *(undefined4 *)(this + 8) = 0;
  *(char **)(this + 4) = pcVar1;
  return;
}


