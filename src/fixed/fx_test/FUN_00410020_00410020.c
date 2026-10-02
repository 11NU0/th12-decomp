/* undefined __stdcall FUN_00410020(float param_1, float param_2, float param_3, float param_4) @ 00410020  325 bytes */

#include "th12.h"

void __stdcall FUN_00410020(float param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int *in_EAX;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float local_c;
  float local_8;
  
  iVar2 = *in_EAX;
  if (iVar2 != 0) {
    pfVar6 = (float *)in_EAX[5];
    local_c = param_1 + 192.0 + 32.0;
    fVar3 = param_2 + 16.0;
    iVar4 = in_EAX[1];
    iVar1 = iVar4 + -1;
    pfVar5 = (float *)in_EAX[4];
    param_2 = 0.0;
    if (0 < iVar2) {
      do {
        iVar7 = 0;
        local_8 = fVar3;
        if (0 < iVar4) {
          do {
            *pfVar6 = local_c;
            pfVar6[1] = local_8;
            pfVar6[2] = 0.0;
            *pfVar5 = local_c;
            pfVar5[1] = local_8;
            pfVar5[2] = 0.0;
            pfVar5[5] = *pfVar6 / 640.0;
            pfVar5[6] = pfVar6[1] / 480.0;
            if (pfVar5[5] < 0.0) {
              pfVar5[5] = 0.0;
            }
            if (pfVar5[6] < 0.0) {
              pfVar5[6] = 0.0;
            }
            pfVar5[4] = -NAN;
            pfVar5[3] = 1.0;
            iVar4 = in_EAX[1];
            iVar7 = iVar7 + 1;
            pfVar6 = pfVar6 + 3;
            pfVar5 = pfVar5 + 7;
            local_8 = local_8 + param_4 / (float)iVar1;
          } while (iVar7 < iVar4);
        }
        param_2 = (float)((int)param_2 + 1);
        local_c = local_c + param_3 / (float)(iVar2 + -1);
      } while ((int)param_2 < *in_EAX);
    }
    FUN_004101f0();
  }
  return;
}


