/* char * __cdecl UScore(Tokens param_1) @ 0047dc0b  30 bytes */

#include "th12.h"

/* Library Function - Single Match
    public: static char const * __cdecl UnDecorator_UScore(enum Tokens)
   
   Library: Visual Studio 2008 Release */

char * __cdecl UnDecorator_UScore(Tokens param_1)

{
  char *pcVar1;
  
  pcVar1 = (&PTR_s___based__0049dc30)[param_1];
  if ((~DAT_004b4328 & 1) == 0) {
    pcVar1 = pcVar1 + 2;
  }
  return pcVar1;
}


