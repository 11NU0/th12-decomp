/* void __cdecl __lock_file2(int _Index, void * _File) @ 0047c13d  50 bytes */

#include "th12.h"

/* Library Function - Single Match
    __lock_file2
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl __lock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    __lock(_Index + 0x10);
    *(uint *)((int)_File + 0xc) = *(uint *)((int)_File + 0xc) | 0x8000;
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}


