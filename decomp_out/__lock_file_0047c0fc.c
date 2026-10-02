/* void __cdecl __lock_file(FILE * _File) @ 0047c0fc  65 bytes */
#include "th12.h"

/* Library Function - Single Match
    __lock_file
   
   Library: Visual Studio 2008 Release */

void __cdecl __lock_file(FILE *_File)

{
  if ((_File < &PTR_DAT_004adbf0) || ((FILE *)&DAT_004ade50 < _File)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  }
  else {
    __lock(((int)&_File[-0x256e0]._file >> 5) + 0x10);
    _File->_flag = _File->_flag | 0x8000;
  }
  return;
}


