/* LPVOID __stdcall ___set_flsgetvalue(void) @ 00475279  52 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___set_flsgetvalue
   
   Library: Visual Studio 2008 Release */

LPVOID __stdcall ___set_flsgetvalue(void)

{
  LPVOID lpTlsValue;
  
  lpTlsValue = TlsGetValue(DAT_004adacc);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)__decode_pointer(DAT_004b4104);
    TlsSetValue(DAT_004adacc,lpTlsValue);
  }
  return lpTlsValue;
}


