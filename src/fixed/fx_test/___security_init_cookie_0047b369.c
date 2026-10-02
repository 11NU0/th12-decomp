/* void __cdecl ___security_init_cookie(void) @ 0047b369  150 bytes */

#include "th12.h"

/* Library Function - Single Match
    ___security_init_cookie
   
   Library: Visual Studio 2008 Release */

typedef struct local_c__u { undefined4 _; undefined4 dwLowDateTime; undefined4 dwHighDateTime; } local_c__u;
typedef struct local_14__u { undefined4 _; undefined4 s; } local_14__u;
void __cdecl ___security_init_cookie(void)

{
  local_c__u *local_c__u_alias;
  local_14__u *local_14__u_alias;
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  LARGE_INTEGER local_14;
  _FILETIME local_c;
  
  local_c__u_alias = (local_c__u *)&local_c;
  local_c__u_alias->dwLowDateTime = 0;
  local_c__u_alias = (local_c__u *)&local_c;
  local_c__u_alias->dwHighDateTime = 0;
  if ((DAT_004ad138 == 0xbb40e64e) || ((DAT_004ad138 & 0xffff0000) == 0)) {
    GetSystemTimeAsFileTime(&local_c);
  local_c__u_alias = (local_c__u *)&local_c;
    uVar4 = local_c__u_alias->dwHighDateTime ^ local_c__u_alias->dwLowDateTime;
    DVar1 = GetCurrentProcessId();
    DVar2 = GetCurrentThreadId();
    DVar3 = GetTickCount();
    QueryPerformanceCounter(&local_14);
  local_14__u_alias = (local_14__u *)&local_14;
    DAT_004ad138 = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ local_14__u_alias->s.HighPart ^ local_14__u_alias->s.LowPart;
    if (DAT_004ad138 == 0xbb40e64e) {
      DAT_004ad138 = 0xbb40e64f;
    }
    else if ((DAT_004ad138 & 0xffff0000) == 0) {
      DAT_004ad138 = DAT_004ad138 | DAT_004ad138 << 0x10;
    }
    DAT_004ad13c = ~DAT_004ad138;
  }
  else {
    DAT_004ad13c = ~DAT_004ad138;
  }
  return;
}


