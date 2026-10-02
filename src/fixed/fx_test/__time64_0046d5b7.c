/* __time64_t __cdecl __time64(__time64_t * _Time) @ 0046d5b7  81 bytes */

#include "th12.h"

/* WARNING: Removing unreachable block (ram,0x0046d5ee) */
/* Library Function - Single Match
    __time64
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

typedef struct local_c__u { undefined4 _; undefined4 dwLowDateTime; undefined4 dwHighDateTime; } local_c__u;
__time64_t __cdecl __time64(__time64_t *_Time)

{
  local_c__u *local_c__u_alias;
  longlong lVar1;
  _FILETIME local_c;
  
  GetSystemTimeAsFileTime(&local_c);
  local_c__u_alias = (local_c__u *)&local_c;
  lVar1 = __aulldiv(local_c__u_alias->dwLowDateTime + 0x2ac18000,
  local_c__u_alias = (local_c__u *)&local_c;
                    local_c__u_alias->dwHighDateTime + 0xfe624e21 + (uint)(0xd53e7fff < local_c__u_alias->dwLowDateTime)
                    ,10000000,0);
  if (0x793406fff < lVar1) {
    lVar1 = -1;
  }
  if (_Time != (__time64_t *)0x0) {
    *_Time = lVar1;
  }
  return lVar1;
}


