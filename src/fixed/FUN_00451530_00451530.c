/* undefined __stdcall FUN_00451530(void) @ 00451530  344 bytes */
#include "th12.h"

typedef struct local_260__u { undefined4 _; undefined4 cb; undefined4 lpReserved; undefined4 lpTitle; } local_260__u;
void __stdcall FUN_00451530(void)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  undefined auStack_264 [4];
  _STARTUPINFOA local_260;
  byte abStack_218 [264];
  byte local_110 [268];
  uint local_4;
  
  local_4 = DAT_004ad138 ^ (uint)auStack_264;
  ((local_260__u *)&local_260)->cb = 0x44;
  _memset(&((local_260__u *)&local_260)->lpReserved,0,0x40);
  GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_110,0x105);
  GetConsoleTitleA((LPSTR)abStack_218,0x105);
  GetStartupInfoA(&local_260);
  if (((local_260__u *)&local_260)->lpTitle == (char *)0x0) {
    DAT_004cee78 = DAT_004cee78 | 0x40;
  }
  else {
    pcVar3 = _strrchr(((local_260__u *)&local_260)->lpTitle,0x2e);
    iVar4 = FUN_00463df0(((local_260__u *)&local_260)->lpTitle);
    if ((iVar4 != 0) && (pcVar3 != (char *)0x0)) {
      iVar4 = __stricmp(pcVar3,".lnk");
      if (iVar4 == 0) {
        do {
          FUN_004517a0(((local_260__u *)&local_260)->lpTitle);
          pcVar3 = _strrchr((char *)abStack_218,0x2e);
          iVar4 = __stricmp(pcVar3,".lnk");
        } while (iVar4 == 0);
      }
      else {
        iVar4 = -(int)((local_260__u *)&local_260)->lpTitle;
        do {
          cVar1 = *((local_260__u *)&local_260)->lpTitle;
          ((local_260__u *)&local_260)->lpTitle[(int)(abStack_218 + iVar4)] = cVar1;
          ((local_260__u *)&local_260)->lpTitle = ((local_260__u *)&local_260)->lpTitle + 1;
        } while (cVar1 != '\0');
      }
      pbVar6 = abStack_218;
      pbVar5 = local_110;
      do {
        bVar2 = *pbVar5;
        bVar7 = bVar2 < *pbVar6;
        if (bVar2 != *pbVar6) {
LAB_00451645:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0045164a;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar7 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_00451645;
        pbVar5 = pbVar5 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_0045164a:
      if (iVar4 != 0) {
        DAT_004cf418 = 1;
      }
    }
    DAT_004cee78 = DAT_004cee78 & 0xffffffbf;
  }
  ___security_check_cookie_4(local_4 ^ (uint)auStack_264);
  return;
}


