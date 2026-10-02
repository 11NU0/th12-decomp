/* int __cdecl FUN_00496a31(undefined4 param_1, undefined8 param_2) @ 00496a31  24 bytes */
#include "th12.h"

typedef struct param_2__u { undefined4 _; undefined1 _2_4_; } param_2__u;
int __cdecl FUN_00496a31(undefined4 param_1,undefined8 param_2)

{
  return (int)(short)(((ushort)(((param_2__u *)&param_2)->_2_4_ >> 4) & 0x7ff) - 0x3fe);
}


