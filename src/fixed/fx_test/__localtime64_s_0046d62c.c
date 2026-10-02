/* errno_t __cdecl __localtime64_s(tm * _Tm, __time64_t * _Time) @ 0046d62c  687 bytes */

#include "th12.h"

/* Library Function - Single Match
    __localtime64_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __localtime64_s(tm *_Tm,__time64_t *_Time)

{
  int *piVar1;
  errno_t eVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_c = 0;
  local_10 = 0;
  local_8 = 0;
  if (_Tm == (tm *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  _memset(_Tm,0xff,0x24);
  if (_Time == (__time64_t *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  iVar3 = *(int *)((int)_Time + 4);
  if (((iVar3 < 1) && (iVar3 < 0)) ||
     ((6 < iVar3 && ((7 < iVar3 || (0x93406fff < *(uint *)_Time)))))) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    return 0x16;
  }
  ___tzset();
  eVar2 = __get_daylight(&local_c);
  if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar2 = __get_dstbias((long *)&local_10);
  if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  eVar2 = __get_timezone((long *)&local_8);
  if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  iVar3 = *(int *)((int)_Time + 4);
  uVar6 = *(uint *)_Time;
  if ((-1 < iVar3) && ((0 < iVar3 || (0x3f480 < uVar6)))) {
    local_18 = uVar6 - local_8;
    local_14 = (iVar3 - ((int)local_8 >> 0x1f)) - (uint)(uVar6 < local_8);
    eVar2 = __gmtime64_s(_Tm,(__time64_t *)&local_18);
    if (eVar2 != 0) {
      return eVar2;
    }
    if (local_c == 0) {
      return 0;
    }
    iVar3 = __isindst(_Tm);
    if (iVar3 == 0) {
      return 0;
    }
    bVar8 = local_18 < local_10;
    local_18 = local_18 - local_10;
    local_14 = (local_14 - ((int)local_10 >> 0x1f)) - (uint)bVar8;
    eVar2 = __gmtime64_s(_Tm,(__time64_t *)&local_18);
    if (eVar2 == 0) {
      _Tm->tm_isdst = 1;
      return 0;
    }
    return eVar2;
  }
  eVar2 = __gmtime64_s(_Tm,_Time);
  if (eVar2 != 0) {
    return eVar2;
  }
  if ((local_c == 0) || (iVar3 = __isindst(_Tm), iVar3 == 0)) {
    uVar6 = _Tm->tm_sec;
    uVar7 = uVar6 - local_8;
    uVar6 = (((int)uVar6 >> 0x1f) - ((int)local_8 >> 0x1f)) - (uint)(uVar6 < local_8);
  }
  else {
    uVar4 = local_8 + local_10;
    uVar6 = _Tm->tm_sec;
    uVar7 = uVar6 - uVar4;
    uVar6 = (((int)uVar6 >> 0x1f) - ((int)uVar4 >> 0x1f)) - (uint)(uVar6 < uVar4);
    _Tm->tm_isdst = 1;
  }
  uVar9 = __allrem(uVar7,uVar6,0x3c,0);
  iVar3 = (int)uVar9;
  _Tm->tm_sec = iVar3;
  if (iVar3 < 0) {
    bVar8 = 0x3b < uVar7;
    uVar7 = uVar7 - 0x3c;
    _Tm->tm_sec = iVar3 + 0x3c;
    uVar6 = (uVar6 - 1) + (uint)bVar8;
  }
  lVar10 = __alldiv(uVar7,uVar6,0x3c,0);
  lVar10 = lVar10 + _Tm->tm_min;
  uVar9 = __allrem((uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20),0x3c,0);
  iVar3 = (int)uVar9;
  _Tm->tm_min = iVar3;
  if (iVar3 < 0) {
    _Tm->tm_min = iVar3 + 0x3c;
    lVar10 = lVar10 + -0x3c;
  }
  lVar10 = __alldiv((uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20),0x3c,0);
  lVar10 = lVar10 + _Tm->tm_hour;
  uVar9 = __allrem((uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20),0x18,0);
  iVar3 = (int)uVar9;
  _Tm->tm_hour = iVar3;
  if (iVar3 < 0) {
    _Tm->tm_hour = iVar3 + 0x18;
    lVar10 = lVar10 + -0x18;
  }
  lVar10 = __alldiv((uint)lVar10,(uint)((ulonglong)lVar10 >> 0x20),0x18,0);
  iVar5 = (int)((ulonglong)lVar10 >> 0x20);
  iVar3 = (int)lVar10;
  if (-1 < lVar10) {
    if ((iVar5 != 0 && -1 < lVar10) || (iVar3 != 0)) {
      _Tm->tm_mday = _Tm->tm_mday + iVar3;
      _Tm->tm_wday = (_Tm->tm_wday + iVar3) % 7;
      goto LAB_0046d89b;
    }
    if (iVar5 != 0 && -1 < lVar10) {
      return 0;
    }
    if (-1 < lVar10) {
      return 0;
    }
  }
  _Tm->tm_mday = _Tm->tm_mday + iVar3;
  _Tm->tm_wday = (iVar3 + 7 + _Tm->tm_wday) % 7;
  if (_Tm->tm_mday < 1) {
    _Tm->tm_yday = _Tm->tm_yday + iVar3 + 0x16d;
    _Tm->tm_year = _Tm->tm_year + -1;
    _Tm->tm_mday = _Tm->tm_mday + 0x1f;
    _Tm->tm_mon = 0xb;
    return 0;
  }
LAB_0046d89b:
  _Tm->tm_yday = _Tm->tm_yday + iVar3;
  return 0;
}


