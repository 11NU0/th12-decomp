/* undefined ___sbh_heap_init(undefined4 param_1) @ 0046ed7a  78 bytes */

#include "th12.h"

/* Library Function - Single Match
    ___sbh_heap_init
   
   Library: Visual Studio 2008 Release */

undefined4 ___sbh_heap_init(undefined4 param_1)

{
  DAT_004d6444 = HeapAlloc(DAT_004b3c04,0,0x140);
  if (DAT_004d6444 == (LPVOID)0x0) {
    return 0;
  }
  DAT_004b3d58 = 0;
  DAT_004d6440 = 0;
  DAT_004d644c = DAT_004d6444;
  DAT_004d6448 = param_1;
  DAT_004d6450 = 0x10;
  return 1;
}


