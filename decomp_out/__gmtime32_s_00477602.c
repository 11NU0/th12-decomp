/* errno_t __cdecl __gmtime32_s(tm * _Tm, __time32_t * _Time) @ 00477602  307 bytes */
#include "th12.h"

/* Library Function - Single Match
    __gmtime32_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __gmtime32_s(tm *_Tm,__time32_t *_Time)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  bVar1 = false;
  if ((_Tm == (tm *)0x0) || (_memset(_Tm,0xff,0x24), _Time == (__time32_t *)0x0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    iVar5 = *_Time;
    if (-0xa8c1 < iVar5) {
      iVar3 = iVar5 % 0x7861f80;
      iVar5 = (iVar5 / 0x7861f80) * 4;
      iVar6 = iVar5 + 0x46;
      iVar4 = iVar3;
      if (0x1e1337f < iVar3) {
        iVar4 = iVar3 + -0x1e13380;
        iVar6 = iVar5 + 0x47;
        if (0x1e1337f < iVar4) {
          iVar4 = iVar3 + -0x3c26700;
          iVar6 = iVar5 + 0x48;
          if (iVar4 < 0x1e28500) {
            bVar1 = true;
          }
          else {
            iVar6 = iVar5 + 0x49;
            iVar4 = iVar3 + -0x5a4ec00;
          }
        }
      }
      _Tm->tm_year = iVar6;
      puVar7 = (undefined4 *)&DAT_004ae29c;
      _Tm->tm_yday = iVar4 / 0x15180;
      if (!bVar1) {
        puVar7 = &DAT_004ae2d0;
      }
      iVar6 = 1;
      iVar5 = puVar7[1];
      while (iVar5 < _Tm->tm_yday) {
        iVar6 = iVar6 + 1;
        iVar5 = puVar7[iVar6];
      }
      _Tm->tm_mon = iVar6 + -1;
      _Tm->tm_mday = _Tm->tm_yday - puVar7[iVar6 + -1];
      iVar5 = *_Time;
      _Tm->tm_isdst = 0;
      _Tm->tm_wday = (iVar5 / 0x15180 + 4) % 7;
      _Tm->tm_hour = (iVar4 % 0x15180) / 0xe10;
      iVar5 = (iVar4 % 0x15180) % 0xe10;
      _Tm->tm_min = iVar5 / 0x3c;
      _Tm->tm_sec = iVar5 % 0x3c;
      return 0;
    }
    piVar2 = __errno();
    *piVar2 = 0x16;
  }
  return 0x16;
}


