/* uint __cdecl und_strncmp(char * param_1, char * param_2, uint param_3) @ 0047e029  42 bytes */
#include "th12.h"

/* Library Function - Single Match
    unsigned int __cdecl und_strncmp(char const *,char const *,unsigned int)
   
   Library: Visual Studio 2008 Release */

uint __cdecl und_strncmp(char *param_1,char *param_2,uint param_3)

{
  byte *in_ECX;
  byte *in_EDX;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  while( true ) {
    param_1 = param_1 + -1;
    if (((param_1 == (char *)0x0) || (*in_ECX == 0)) || (*in_ECX != *in_EDX)) break;
    in_ECX = in_ECX + 1;
    in_EDX = in_EDX + 1;
  }
  return (uint)*in_ECX - (uint)*in_EDX;
}


