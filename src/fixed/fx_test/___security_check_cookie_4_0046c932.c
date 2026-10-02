/* undefined __fastcall @__security_check_cookie@4(int param_1) @ 0046c932  15 bytes */

#include "th12.h"

/* Library Function - Single Match
    @__security_check_cookie@4
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __fastcall ___security_check_cookie_4(int param_1)

{
  if (param_1 == DAT_004ad138) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___report_gsfailure();
}


