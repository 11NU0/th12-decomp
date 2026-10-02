/* undefined __cdecl __add_exp(undefined8 param_1, short param_2) @ 00496a49  45 bytes */
#include "th12.h"

/* Library Function - Single Match
    __add_exp
   
   Library: Visual Studio 2008 Release */

typedef struct param_1__u { undefined4 _; undefined1 _6_2_; } param_1__u;
void __cdecl __add_exp(undefined8 param_1,short param_2)

{
  __set_exp(param_1,(short)((((param_1__u *)&param_1)->_6_2_ & 0x7ff0) >> 4) + -0x3fe + param_2);
  return;
}


