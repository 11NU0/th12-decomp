/* float10 __cdecl __set_exp(undefined8 param_1, short param_2) @ 00496a05  44 bytes */

#include "th12.h"

/* Library Function - Single Match
    __set_exp
   
   Library: Visual Studio 2008 Release */

float10 __cdecl __set_exp(undefined8 param_1,short param_2)

{
  undefined8 local_c;
  
  local_c = (double)CONCAT26((param_2 + 0x3fe) * 0x10 | param_1._6_2_ & 0x800f,(int6)param_1);
  return (float10)local_c;
}


