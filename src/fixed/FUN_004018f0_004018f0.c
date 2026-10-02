/* undefined __stdcall FUN_004018f0(float param_1, byte * param_2) @ 004018f0  1787 bytes */
#include "th12.h"

void __stdcall FUN_004018f0(float param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte *pbVar7;
  
  fVar6 = param_1;
  pbVar7 = param_2;
  do {
    bVar3 = *pbVar7;
    pbVar7 = pbVar7 + 1;
  } while (bVar3 != 0);
  *(uint *)((int)param_1 + 0x490) = *(uint *)((int)param_1 + 0x490) & 0xffafffff | 0x280001;
  *(undefined4 *)((int)param_1 + 0x438) = *(undefined4 *)((int)param_2 + 0x100);
  *(undefined4 *)((int)param_1 + 0x43c) = *(undefined4 *)((int)param_2 + 0x104);
  *(undefined4 *)((int)param_1 + 0x440) = *(undefined4 *)((int)param_2 + 0x108);
  uVar1 = *(undefined4 *)((int)param_2 + 0x114);
  uVar2 = *(undefined4 *)((int)param_2 + 0x110);
  *(uint *)((int)param_1 + 0x490) = *(uint *)((int)param_1 + 0x490) | 8;
  *(undefined4 *)((int)param_1 + 0x54) = uVar2;
  *(undefined4 *)((int)param_1 + 0x58) = uVar1;
  switch(*(undefined4 *)((int)param_2 + 0x120)) {
  case 1:
    *(uint *)((int)param_1 + 0x494) = *(uint *)((int)param_1 + 0x494) & 0xfffffffd;
    param_1 = *(float *)((int)param_2 + 0x110) * 7.0;
    fVar4 = 9.0;
    break;
  case 2:
    *(uint *)((int)param_1 + 0x494) = *(uint *)((int)param_1 + 0x494) & 0xfffffffd;
    goto LAB_004019b5;
  case 3:
    *(uint *)((int)param_1 + 0x494) = *(uint *)((int)param_1 + 0x494) & 0xfffffffd;
    goto LAB_004019d0;
  case 4:
    *(uint *)((int)param_1 + 0x494) = *(uint *)((int)param_1 + 0x494) | 2;
LAB_004019d0:
    param_1 = *(float *)((int)param_2 + 0x110) * 12.0;
    fVar4 = 16.0;
    break;
  case 5:
    *(uint *)((int)param_1 + 0x494) = *(uint *)((int)param_1 + 0x494) | 2;
LAB_004019b5:
    param_1 = *(float *)((int)param_2 + 0x110) * 7.0;
    fVar4 = 10.0;
    break;
  default:
    if (NANP(*(float *)((int)param_2 + 0x110)) == (*(float *)((int)param_2 + 0x110) == 1.0)) {
      *(uint *)((int)param_1 + 0x494) = *(uint *)((int)param_1 + 0x494) | 2;
    }
    else {
      *(uint *)((int)param_1 + 0x494) = *(uint *)((int)param_1 + 0x494) & 0xfffffffd;
    }
    param_1 = (float)*(int *)((int)param_1 + 0x18fac) * *(float *)((int)param_2 + 0x110);
    fVar4 = 14.0;
  }
  if (*(int *)((int)param_2 + 0x130) == 0) {
    if (*(int *)((int)param_2 + 0x120) == 2) {
      bVar3 = *param_2;
      pbVar7 = param_2;
      while (bVar3 != 0) {
        fVar5 = param_1;
        if (*pbVar7 == 0x2e) {
          fVar5 = *(float *)((int)param_2 + 0x110) * 4.0;
        }
        pbVar7 = pbVar7 + 1;
        *(float *)((int)fVar6 + 0x438) = *(float *)((int)fVar6 + 0x438) - fVar5 * 0.5;
        bVar3 = *pbVar7;
      }
    }
    else if (*(int *)((int)param_2 + 0x120) - 3U < 2) {
      bVar3 = *param_2;
      pbVar7 = param_2;
      while (bVar3 != 0) {
        fVar5 = param_1;
        if (*pbVar7 == 0x2c) {
          fVar5 = *(float *)((int)param_2 + 0x110) * 4.0;
        }
        pbVar7 = pbVar7 + 1;
        *(float *)((int)fVar6 + 0x438) = *(float *)((int)fVar6 + 0x438) - fVar5 * 0.5;
        bVar3 = *pbVar7;
      }
    }
    else {
      *(float *)((int)fVar6 + 0x438) =
           *(float *)((int)fVar6 + 0x438) -
           (float)((int)pbVar7 - (int)(param_2 + 1)) * param_1 * 0.5;
    }
  }
  else if (*(int *)((int)param_2 + 0x130) == 2) {
    switch(*(undefined4 *)((int)param_2 + 0x120)) {
    case 2:
    case 5:
      bVar3 = *param_2;
      pbVar7 = param_2;
      while (bVar3 != 0) {
        fVar5 = param_1;
        if (*pbVar7 == 0x2e) {
          fVar5 = *(float *)((int)param_2 + 0x110) * 4.0;
        }
        pbVar7 = pbVar7 + 1;
        *(float *)((int)fVar6 + 0x438) = *(float *)((int)fVar6 + 0x438) - fVar5;
        bVar3 = *pbVar7;
      }
      break;
    case 3:
    case 4:
      bVar3 = *param_2;
      pbVar7 = param_2;
      while (bVar3 != 0) {
        fVar5 = param_1;
        if (*pbVar7 == 0x2c) {
          fVar5 = *(float *)((int)param_2 + 0x110) * 4.0;
        }
        pbVar7 = pbVar7 + 1;
        *(float *)((int)fVar6 + 0x438) = *(float *)((int)fVar6 + 0x438) - fVar5;
        bVar3 = *pbVar7;
      }
      break;
    default:
      *(float *)((int)fVar6 + 0x438) =
           *(float *)((int)fVar6 + 0x438) - (float)((int)pbVar7 - (int)(param_2 + 1)) * param_1;
    }
  }
  if (*(int *)((int)param_2 + 0x134) == 0) {
    fVar5 = *(float *)((int)fVar6 + 0x43c) - fVar4 * 0.5;
  }
  else {
    if (*(int *)((int)param_2 + 0x134) != 2) goto LAB_00401bac;
    fVar5 = *(float *)((int)fVar6 + 0x43c) - fVar4;
  }
  *(float *)((int)fVar6 + 0x43c) = fVar5;
LAB_00401bac:
  bVar3 = *param_2;
  pbVar7 = param_2;
  fVar5 = param_1;
  while (bVar3 != 0) {
    bVar3 = *pbVar7;
    if (bVar3 == 10) {
      *(float *)((int)fVar6 + 0x43c) =
           *(float *)((int)param_2 + 0x114) * fVar4 + *(float *)((int)fVar6 + 0x43c);
      *(undefined4 *)((int)fVar6 + 0x438) = *(undefined4 *)((int)param_2 + 0x100);
    }
    else if (bVar3 == 0x20) {
      *(float *)((int)fVar6 + 0x438) = *(float *)((int)fVar6 + 0x438) + fVar5;
    }
    else {
      switch(*(undefined4 *)((int)param_2 + 0x120)) {
      case 0:
        FUN_00402390(*(int *)(*(int *)((int)fVar6 + 0x18fb4) + 0x118) + (bVar3 - 0x20) * 0x48);
        break;
      case 1:
        FUN_00402390(*(int *)(*(int *)((int)fVar6 + 0x18fb4) + 0x118) + (bVar3 + 0x42) * 0x48);
        break;
      case 2:
      case 5:
        param_1 = *(float *)((int)param_2 + 0x110) * 7.0;
        if (bVar3 == 0x2f) {
          FUN_00402390(*(int *)(*(int *)((int)fVar6 + 0x18fb4) + 0x118) + 0x42a8);
        }
        else if (bVar3 == 0x3a) {
          FUN_00402390(*(int *)(*(int *)((int)fVar6 + 0x18fb4) + 0x118) + 0x42f0);
        }
        else if (bVar3 == 0x2d) {
          FUN_00402390(*(int *)(*(int *)((int)fVar6 + 0x18fb4) + 0x118) + 0x4338);
        }
        else if (bVar3 == 0x2a) {
          FUN_00402390(*(int *)(*(int *)((int)fVar6 + 0x18fb4) + 0x118) + 0x4380);
        }
        else if (bVar3 == 0x25) {
          FUN_00402390(*(int *)(*(int *)((int)fVar6 + 0x18fb4) + 0x118) + 0x43c8);
        }
        else if (bVar3 == 0x24) {
          FUN_00402390(*(int *)(*(int *)((int)fVar6 + 0x18fb4) + 0x118) + 0x49b0);
        }
        else if (bVar3 == 0x2e) {
          FUN_00402390(*(int *)(*(int *)((int)fVar6 + 0x18fb4) + 0x118) + 0x4410);
          param_1 = *(float *)((int)param_2 + 0x110) * 4.0;
        }
        else {
          FUN_00402390(*(int *)(*(int *)((int)fVar6 + 0x18fb4) + 0x118) + (bVar3 + 0xb3) * 0x48);
        }
        break;
      case 3:
      case 4:
        param_1 = *(float *)((int)param_2 + 0x110) * 12.0;
        *(undefined4 *)((int)fVar6 + 0x43c) = *(undefined4 *)((int)param_2 + 0x104);
        bVar3 = *pbVar7;
        if (bVar3 == 0x2f) {
          FUN_00402390(*(int *)(*(int *)((int)fVar6 + 0x18fb4) + 0x118) + 0x4728);
        }
        else if (bVar3 == 0x2e) {
          FUN_00402390(*(int *)(*(int *)((int)fVar6 + 0x18fb4) + 0x118) + 0x4770);
        }
        else if (bVar3 == 0x73) {
          FUN_00402390(*(int *)(*(int *)((int)fVar6 + 0x18fb4) + 0x118) + 0x47b8);
        }
        else if (bVar3 == 0x2a) {
          FUN_00402390(*(int *)(*(int *)((int)fVar6 + 0x18fb4) + 0x118) + 0x4800);
        }
        else if (bVar3 == 0x2c) {
          FUN_00402390(*(int *)(*(int *)((int)fVar6 + 0x18fb4) + 0x118) + 0x4848);
          param_1 = *(float *)((int)param_2 + 0x110) * 4.0;
          *(float *)((int)fVar6 + 0x43c) = *(float *)((int)param_2 + 0x104) + 3.0;
        }
        else {
          FUN_00402390(*(int *)(*(int *)((int)fVar6 + 0x18fb4) + 0x118) + (bVar3 + 0xc3) * 0x48);
        }
      }
      uVar1 = *(undefined4 *)(*(int *)((int)fVar6 + 0x408) + 0x34);
      uVar2 = *(undefined4 *)(*(int *)((int)fVar6 + 0x408) + 0x38);
      *(uint *)((int)fVar6 + 0x490) = *(uint *)((int)fVar6 + 0x490) | 8;
      *(undefined4 *)((int)fVar6 + 0x6c) = uVar2;
      *(undefined4 *)((int)fVar6 + 0x70) = uVar1;
      if (*(int *)((int)param_2 + 0x124) != 0) {
        *(uint *)((int)fVar6 + 0x3d0) = *(uint *)((int)param_2 + 0x10c) & 0xff000000;
        uVar1 = *(undefined4 *)((int)param_2 + 0x10c);
        *(float *)((int)fVar6 + 0x438) = *(float *)((int)fVar6 + 0x438) + 2.0;
        *(float *)((int)fVar6 + 0x43c) = *(float *)((int)fVar6 + 0x43c) + 2.0;
        *(byte *)((int)fVar6 + 0x3d3) = (byte)((uint)uVar1 >> 0x19);
        FUN_0045a570((float *)&DAT_004d47e8,(float *)&DAT_004d4804);
        FUN_00459e50(DAT_004ce8cc,1);
        *(float *)((int)fVar6 + 0x438) = *(float *)((int)fVar6 + 0x438) - 2.0;
        *(float *)((int)fVar6 + 0x43c) = *(float *)((int)fVar6 + 0x43c) - 2.0;
      }
      *(undefined4 *)((int)fVar6 + 0x3d0) = *(undefined4 *)((int)param_2 + 0x10c);
      FUN_0045a570((float *)&DAT_004d47e8,(float *)&DAT_004d4804);
      FUN_00459e50(DAT_004ce8cc,1);
      *(float *)((int)fVar6 + 0x438) = param_1 + *(float *)((int)fVar6 + 0x438);
      fVar5 = param_1;
    }
    pbVar7 = pbVar7 + 1;
    bVar3 = *pbVar7;
  }
  return;
}


