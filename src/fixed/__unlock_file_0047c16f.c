/* void __cdecl __unlock_file(FILE * _File) @ 0047c16f  60 bytes */
#include "th12.h"

/* Library Function - Single Match
    __unlock_file
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void __cdecl __unlock_file(FILE *_File)

{
  if (((FILE *)0x4adbef < _File) && (_File < (FILE *)0x4ade51)) {
    _File->_flag = _File->_flag & 0xffff7fff;
    FUN_0046eba8(((int)&_File[-0x256e0]._file >> 5) + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


