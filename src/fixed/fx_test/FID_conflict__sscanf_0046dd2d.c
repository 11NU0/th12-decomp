/* int __cdecl FID_conflict:_sscanf(char * _Src, char * _Format, ...) @ 0046dd2d  34 bytes */

#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    _sscanf
    _sscanf_s
   
   Library: Visual Studio 2008 Release */

int __cdecl FID_conflict__sscanf(char *_Src,char *_Format,...)

{
  int iVar1;
  
  iVar1 = _vscan_fn(__input_l,(int)_Format,0,&stack0x0000000c);
  return iVar1;
}


