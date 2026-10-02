/* undefined __cdecl _fast_error_exit(int param_1) @ 0046e62f  41 bytes */
#include "th12.h"

/* Library Function - Single Match
    _fast_error_exit
   
   Library: Visual Studio 2008 Release */

void __cdecl _fast_error_exit(int param_1)

{
  if (DAT_004b38d8 == 1) {
    __FF_MSGBANNER();
  }
  __NMSG_WRITE(param_1);
  ___crtExitProcess(0xff);
  return;
}


