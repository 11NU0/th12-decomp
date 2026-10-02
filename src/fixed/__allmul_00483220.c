/* longlong __stdcall __allmul(uint param_1, int param_2, uint param_3, int param_4) @ 00483220  52 bytes */
#include "th12.h"

/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio 2008 Release */

longlong __stdcall __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


