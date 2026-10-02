/* void __cdecl __unlock_file2(int _Index, void * _File) @ 0047c1ab  47 bytes */

#include "th12.h"

/* Library Function - Single Match
    __unlock_file2
   
   Library: Visual Studio 2008 Release */

void __cdecl __unlock_file2(int _Index,void *_File)

{
  if (_Index < 0x14) {
    *(uint *)((int)_File + 0xc) = *(uint *)((int)_File + 0xc) & 0xffff7fff;
    FUN_0046eba8(_Index + 0x10);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return;
}


