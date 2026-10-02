/* void __cdecl __FF_MSGBANNER(void) @ 0047315e  57 bytes */

#include "th12.h"

/* Library Function - Single Match
    __FF_MSGBANNER
   
   Library: Visual Studio 2008 Release */

void __cdecl __FF_MSGBANNER(void)

{
  int iVar1;
  
  iVar1 = __set_error_mode(3);
  if (iVar1 != 1) {
    iVar1 = __set_error_mode(3);
    if (iVar1 != 0) {
      return;
    }
    if (DAT_004ad134 != 1) {
      return;
    }
  }
  __NMSG_WRITE(0xfc);
  __NMSG_WRITE(0xff);
  return;
}


