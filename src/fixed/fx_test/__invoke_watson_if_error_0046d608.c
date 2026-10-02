/* void __cdecl __invoke_watson_if_error(errno_t _ExpressionError, wchar_t * _Expression, wchar_t * _Function, wchar_t * _File, uint _Line, uintptr_t _Reserved) @ 0046d608  33 bytes */

#include "th12.h"

/* Library Function - Single Match
    __invoke_watson_if_error
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2019 Release */

void __cdecl
__invoke_watson_if_error
          (errno_t _ExpressionError,wchar_t *_Expression,wchar_t *_Function,wchar_t *_File,
          uint _Line,uintptr_t _Reserved)

{
  if (_ExpressionError != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson(_Expression,_Function,_File,_Line,_Reserved);
  }
  return;
}


