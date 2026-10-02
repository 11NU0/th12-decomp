/* int __cdecl __ungetc_nolock(int _Ch, FILE * _File) @ 0048c004  241 bytes */
#include "th12.h"

/* Library Function - Single Match
    __ungetc_nolock
   
   Library: Visual Studio 2008 Release */

int __cdecl __ungetc_nolock(int _Ch,FILE *_File)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  
  if ((*(byte *)&_File->_flag & 0x40) != 0) {
LAB_0048c08d:
    if (_Ch != -1) {
      uVar2 = _File->_flag;
      if (((uVar2 & 1) != 0) || (((char)uVar2 < '\0' && ((uVar2 & 2) == 0)))) {
        if (_File->_base == (char *)0x0) {
          __getbuf(_File);
        }
        if (_File->_ptr == _File->_base) {
          if (_File->_cnt != 0) {
            return -1;
          }
          _File->_ptr = _File->_ptr + 1;
        }
        _File->_ptr = _File->_ptr + -1;
        pcVar1 = _File->_ptr;
        if ((*(byte *)&_File->_flag & 0x40) == 0) {
          *pcVar1 = (char)_Ch;
        }
        else if (*pcVar1 != (char)_Ch) {
          _File->_ptr = pcVar1 + 1;
          return -1;
        }
        _File->_cnt = _File->_cnt + 1;
        _File->_flag = _File->_flag & 0xffffffefU | 1;
        return _Ch & 0xff;
      }
    }
    return -1;
  }
  uVar2 = __fileno(_File);
  if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
    puVar4 = &DAT_004adbb0;
  }
  else {
    puVar4 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_004d6320)[(int)uVar2 >> 5]);
  }
  if ((puVar4[0x24] & 0x7f) == 0) {
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar4 = &DAT_004adbb0;
    }
    else {
      puVar4 = (undefined *)((uVar2 & 0x1f) * 0x40 + (&DAT_004d6320)[(int)uVar2 >> 5]);
    }
    if ((puVar4[0x24] & 0x80) == 0) goto LAB_0048c08d;
  }
  piVar3 = __errno();
  *piVar3 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return -1;
}


