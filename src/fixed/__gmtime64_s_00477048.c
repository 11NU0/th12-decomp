/* errno_t __cdecl __gmtime64_s(tm * _Tm, __time64_t * _Time) @ 00477048  579 bytes */
#include "th12.h"

/* Library Function - Single Match
    __gmtime64_s
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __gmtime64_s(tm *_Tm,__time64_t *_Time)

{
  tm *ptVar1;
  bool bVar2;
  tm *ptVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  uint local_10;
  
  ptVar3 = _Tm;
  bVar2 = false;
  if ((_Tm == (tm *)0x0) || (_memset(_Tm,0xff,0x24), _Time == (__time64_t *)0x0)) {
    piVar4 = __errno();
    *piVar4 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  uVar9 = *(uint *)_Time;
  uVar5 = *(uint *)((int)_Time + 4);
  lVar13 = *_Time;
  if (((0x7fffffff < uVar5) && (((int)uVar5 < -1 || (uVar9 < 0xffff5740)))) ||
     ((6 < (int)uVar5 && ((7 < (int)uVar5 || (0x934126cf < uVar9)))))) {
    piVar4 = __errno();
    *piVar4 = 0x16;
    return 0x16;
  }
  uVar11 = __alldiv(uVar9,uVar5,0x1e13380,0);
  uVar9 = (uint)uVar11;
  _Tm = (tm *)((int)uVar9 + 0x46);
  ptVar1 = (tm *)((int)uVar9 + 0x45);
  lVar12 = __allmul(uVar9,(int)uVar9 >> 0x1f,0xfffffe93,-1);
  lVar12 = lVar12 - (((int)(uVar9 + 0x171) / 400 - (int)ptVar1 / 100) + -0x11 +
                    ((int)((int)&ptVar1->tm_sec + ((int)ptVar1 >> 0x1f & 3U)) >> 2));
  lVar12 = __allmul((uint)lVar12,(int)((ulonglong)lVar12 >> 0x20),0x15180,0);
  lVar12 = lVar12 + lVar13;
  iVar8 = (int)lVar12;
  if ((lVar12 < 0x100000000) && (lVar12 < 0)) {
    lVar12 = lVar12 + 0x1e13380;
    uVar5 = (uint)ptVar1 & 0x80000003;
    bVar10 = uVar5 == 0;
    if ((int)uVar5 < 0) {
      bVar10 = (uVar5 - 1 | 0xfffffffc) == 0xffffffff;
    }
    _Tm = ptVar1;
    if (((!bVar10) || ((int)ptVar1 % 100 == 0)) && ((int)(uVar9 + 0x7b1) % 400 != 0))
    goto LAB_004771cc;
    lVar12 = CONCAT44((int)((ulonglong)lVar12 >> 0x20) + (uint)(0xfffeae7f < (uint)lVar12),
                      iVar8 + 0x1e28500);
  }
  else {
    uVar5 = (uint)_Tm & 0x80000003;
    bVar10 = uVar5 == 0;
    if ((int)uVar5 < 0) {
      bVar10 = (uVar5 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (((!bVar10) || ((int)_Tm % 100 == 0)) && ((int)(uVar9 + 0x7b2) % 400 != 0))
    goto LAB_004771cc;
  }
  bVar2 = true;
LAB_004771cc:
  local_10 = (uint)((ulonglong)lVar12 >> 0x20);
  ptVar3->tm_year = (int)_Tm;
  uVar11 = __alldiv((uint)lVar12,local_10,0x15180,0);
  uVar9 = (uint)uVar11;
  ptVar3->tm_yday = uVar9;
  lVar13 = __allmul(uVar9,(int)uVar9 >> 0x1f,0xfffeae80,-1);
  lVar13 = lVar13 + lVar12;
  puVar7 = (undefined4 *)&DAT_004ae29c;
  if (!bVar2) {
    puVar7 = &DAT_004ae2d0;
  }
  iVar6 = 1;
  iVar8 = puVar7[1];
  while (iVar8 < ptVar3->tm_yday) {
    iVar6 = iVar6 + 1;
    iVar8 = puVar7[iVar6];
  }
  ptVar3->tm_mon = iVar6 + -1;
  ptVar3->tm_mday = ptVar3->tm_yday - puVar7[iVar6 + -1];
  uVar11 = __alldiv(*(uint *)_Time,*(uint *)((int)_Time + 4),0x15180,0);
  ptVar3->tm_wday = ((int)uVar11 + 4) % 7;
  uVar11 = __alldiv((uint)lVar13,(uint)((ulonglong)lVar13 >> 0x20),0xe10,0);
  uVar9 = (uint)uVar11;
  ptVar3->tm_hour = uVar9;
  lVar12 = __allmul(uVar9,(int)uVar9 >> 0x1f,0xfffff1f0,-1);
  uVar9 = (uint)(lVar13 + lVar12);
  uVar11 = __alldiv(uVar9,(uint)((ulonglong)(lVar13 + lVar12) >> 0x20),0x3c,0);
  ptVar3->tm_min = (int)uVar11;
  ptVar3->tm_isdst = 0;
  ptVar3->tm_sec = uVar9 + (int)uVar11 * -0x3c;
  return 0;
}


