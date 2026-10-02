/* void __stdcall __NLG_Notify(ulong param_1) @ 0048c99d  31 bytes */
#include "th12.h"

/* Library Function - Single Match
    __NLG_Notify
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __NLG_Notify(ulong param_1)

{
  undefined4 in_EAX;
  undefined4 unaff_EBP;
  
  DAT_004ae30c = param_1;
  DAT_004ae308 = in_EAX;
  DAT_004ae310 = unaff_EBP;
  return;
}


