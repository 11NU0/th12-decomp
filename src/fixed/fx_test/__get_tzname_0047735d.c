/* errno_t __cdecl __get_tzname(size_t * _ReturnValue, char * _Buffer, size_t _SizeInBytes, int _Index) @ 0047735d  164 bytes */

#include "th12.h"

/* Library Function - Single Match
    __get_tzname
   
   Library: Visual Studio 2008 Release */

errno_t __cdecl __get_tzname(size_t *_ReturnValue,char *_Buffer,size_t _SizeInBytes,int _Index)

{
  int *piVar1;
  size_t sVar2;
  errno_t eVar3;
  
  if (_Buffer == (char *)0x0) {
    if (_SizeInBytes != 0) goto LAB_004773ac;
  }
  else if (_SizeInBytes == 0) {
LAB_004773ac:
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return 0x16;
  }
  if (_Buffer != (char *)0x0) {
    *_Buffer = '\0';
  }
  if ((_ReturnValue == (size_t *)0x0) || ((_Index != 0 && (_Index != 1)))) {
    piVar1 = __errno();
    eVar3 = 0x16;
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    sVar2 = _strlen((&PTR_DAT_004adb88)[_Index]);
    *_ReturnValue = sVar2 + 1;
    if (_Buffer == (char *)0x0) {
      eVar3 = 0;
    }
    else if (_SizeInBytes < sVar2 + 1) {
      eVar3 = 0x22;
    }
    else {
      eVar3 = _strcpy_s(_Buffer,_SizeInBytes,(&PTR_DAT_004adb88)[_Index]);
    }
  }
  return eVar3;
}


