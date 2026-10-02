/* uint __cdecl FID_conflict:___WSTRINGTOLD(_LDOUBLE * pld, char * * p_end_ptr, char * str, int mult12) @ 0046d54c  57 bytes */
#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    ___STRINGTOLD
    ___WSTRINGTOLD
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

uint __cdecl FID_conflict____WSTRINGTOLD(_LDOUBLE *pld,char **p_end_ptr,char *str,int mult12)

{
  uint uVar1;
  localeinfo_struct local_14;
  int local_c;
  char local_8;
  
  _LocaleUpdate__LocaleUpdate((_LocaleUpdate *)&local_14,(localeinfo_struct *)0x0);
  uVar1 = ___STRINGTOLD_L(pld,p_end_ptr,str,mult12,&local_14);
  if (local_8 != '\0') {
    *(uint *)((int)local_c + 0x70) = *(uint *)((int)local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


