/* int __cdecl __vsnprintf_s_l(char * _DstBuf, size_t _DstSize, size_t _MaxCount, char * _Format, _locale_t _Locale, va_list _ArgList) @ 004725d8  263 bytes */

#include "th12.h"

/* Library Function - Single Match
    __vsnprintf_s_l
   
   Library: Visual Studio 2008 Release */

int __cdecl
__vsnprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,char *_Format,_locale_t _Locale,
               va_list _ArgList)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (_Format == (char *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return -1;
  }
  if (_MaxCount == 0) {
    if (_DstBuf == (char *)0x0) {
      if (_DstSize == 0) {
        return 0;
      }
    }
    else {
LAB_00472624:
      if (_DstSize != 0) {
        piVar2 = __errno();
        if (_MaxCount < _DstSize) {
          iVar1 = *piVar2;
          iVar3 = __vsnprintf_helper(__output_s_l,_DstBuf,_MaxCount + 1,(int)_Format,_Locale,
                                     _ArgList);
          if (iVar3 == -2) {
            piVar2 = __errno();
            if (*piVar2 != 0x22) {
              return -1;
            }
            piVar2 = __errno();
            *piVar2 = iVar1;
            return -1;
          }
LAB_004726b4:
          if (-1 < iVar3) {
            return iVar3;
          }
        }
        else {
          iVar1 = *piVar2;
          iVar3 = __vsnprintf_helper(__output_s_l,_DstBuf,_DstSize,(int)_Format,_Locale,_ArgList);
          _DstBuf[_DstSize - 1] = '\0';
          if (iVar3 != -2) goto LAB_004726b4;
          if (_MaxCount == 0xffffffff) {
            piVar2 = __errno();
            if (*piVar2 != 0x22) {
              return -1;
            }
            piVar2 = __errno();
            *piVar2 = iVar1;
            return -1;
          }
        }
        *_DstBuf = '\0';
        if (iVar3 != -2) {
          return -1;
        }
        piVar2 = __errno();
        *piVar2 = 0x22;
        goto LAB_004726ca;
      }
    }
  }
  else if (_DstBuf != (char *)0x0) goto LAB_00472624;
  piVar2 = __errno();
  *piVar2 = 0x16;
LAB_004726ca:
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}


