/* uint __cdecl ___strgtold12(_LDBL12 * pld12, char * * p_end_ptr, char * str, int mult12, int scale, int decpt, int implicit_E) @ 0046d50a  66 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___strgtold12
   
   Library: Visual Studio 2008 Release */

uint __cdecl
___strgtold12(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,
             int implicit_E)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate__LocaleUpdate((_LocaleUpdate *)&local_14,(localeinfo_struct *)0x0);
  uVar1 = ___strgtold12_l(pld12,p_end_ptr,str,mult12,scale,decpt,implicit_E,&local_14);
  if (local_8 != '\0') {
    *(uint *)((int)local_c + 0x70) = *(uint *)((int)local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


