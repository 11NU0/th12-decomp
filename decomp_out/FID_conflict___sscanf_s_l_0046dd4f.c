/* int __cdecl FID_conflict:__sscanf_s_l(char * _Src, char * _Format, _locale_t _Locale, ...) @ 0046dd4f  35 bytes */
#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    __sscanf_l
    __sscanf_s_l
   
   Library: Visual Studio 2008 Release */

int __cdecl FID_conflict___sscanf_s_l(char *_Src,char *_Format,_locale_t _Locale,...)

{
  int iVar1;
  
  iVar1 = _vscan_fn(__input_l,(int)_Format,_Locale,&stack0x00000010);
  return iVar1;
}


