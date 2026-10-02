/* undefined4 __fastcall FUN_00467170(undefined4 param_1, int * param_2, float param_3) @ 00467170  6855 bytes */
#include "th12.h"

typedef struct local_120__u { undefined4 _; undefined1 _4_4_; undefined1 _0_4_; } local_120__u;
typedef struct local_118__u { undefined4 _; undefined1 _4_4_; } local_118__u;
typedef struct local_110__u { undefined4 _; undefined1 _0_4_; undefined1 _4_4_; } local_110__u;
undefined4 __fastcall FUN_00467170(undefined4 param_1,int *param_2,float param_3)

{
  local_120__u *local_120__u_alias;
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  float *in_EAX;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  float fVar14;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  float extraout_ECX_02;
  float extraout_ECX_03;
  float extraout_ECX_04;
  float extraout_ECX_05;
  float extraout_ECX_06;
  float extraout_ECX_07;
  float extraout_ECX_08;
  float extraout_ECX_09;
  float extraout_ECX_10;
  float extraout_ECX_11;
  float extraout_ECX_12;
  float extraout_ECX_13;
  float extraout_ECX_14;
  float extraout_ECX_15;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  undefined4 extraout_ECX_18;
  undefined4 extraout_ECX_19;
  undefined4 extraout_ECX_20;
  undefined4 extraout_ECX_21;
  int extraout_ECX_22;
  undefined extraout_DL;
  undefined4 extraout_EDX;
  uint uVar15;
  uint extraout_EDX_00;
  int iVar16;
  char *_Str;
  float10 fVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  double local_120;
  undefined8 local_118;
  double local_110;
  float local_108;
  int local_104;
  float local_100;
  float local_fc;
  float local_f8;
  int local_f4;
  float local_f0;
  float local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  float local_d4;
  int local_d0;
  float local_cc;
  int local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  int local_b0;
  float local_ac;
  int local_a8;
  float local_a4;
  int local_a0;
  float local_9c;
  int local_98;
  int local_94;
  int local_90;
  float local_8c;
  int local_88;
  int local_84;
  float local_80;
  float local_7c;
  float local_78;
  uint local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  int local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  int local_50;
  float local_4c;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  int local_20;
  float local_1c;
  int local_18;
  int local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((int *)in_EAX[1] == (int *)0x0) {
    return 0xffffffff;
  }
  if ((float)*(int *)in_EAX[1] <= *in_EAX) {
    do {
      uVar27 = CONCAT44(param_2,local_5c);
      uVar26 = CONCAT44(param_2,local_d8);
      uVar25 = CONCAT44(param_2,local_50);
      uVar24 = CONCAT44(param_2,local_30);
      uVar23 = CONCAT44(param_2,local_58);
      uVar22 = CONCAT44(param_2,local_20);
      uVar21 = CONCAT44(param_2,local_60);
      uVar20 = CONCAT44(param_2,local_c8);
      uVar19 = CONCAT44(param_2,local_18);
      uVar18 = CONCAT44(param_2,local_d0);
      uVar28 = CONCAT44(param_2,local_24);
      fVar4 = in_EAX[1];
      if ((*(byte *)((int)in_EAX + 0x407) & *(byte *)((int)fVar4 + 10)) == 0)
      goto switchD_004671c6_caseD_0;
      sVar2 = *(short *)((int)fVar4 + 4);
      if (0x59 < (uint)(int)sVar2) {
switchD_004671c6_caseD_2:
        iVar12 = (*(code *)**(undefined4 **)in_EAX[0x405])();
        if (iVar12 == -1) {
          return 0;
        }
        goto switchD_004671c6_caseD_0;
      }
      fVar14 = (float)(uint)(&switchD_004671c6_switchdataD_00468d30)[sVar2];
      switch(sVar2) {
      case 0:
        break;
      case 1:
switchD_004671c6_caseD_1:
        in_EAX[1] = 0.0;
        return 0xffffffff;
      default:
        goto switchD_004671c6_caseD_2;
      case 10:
        FUN_00469700();
        if (in_EAX[0x402] == 0.0) goto switchD_004671c6_caseD_1;
        fVar4 = in_EAX[0x402];
        fVar14 = (float)((int)fVar4 + -4);
        if (-1 < (int)fVar14) {
          in_EAX[0x402] = fVar14;
          in_EAX[1] = *(float *)((int)in_EAX + (int)fVar4 + 4);
        }
        fVar4 = in_EAX[0x402];
        fVar14 = (float)((int)fVar4 + -4);
        if (-1 < (int)fVar14) {
          in_EAX[0x402] = fVar14;
          *in_EAX = *(float *)((int)in_EAX + (int)fVar4 + 4);
        }
        fVar4 = in_EAX[0x402];
        fVar14 = (float)((int)fVar4 + -4);
        if (-1 < (int)fVar14) {
          in_EAX[0x402] = fVar14;
          local_10 = *(float *)((int)in_EAX + (int)fVar4 + 4);
        }
        in_EAX[0x402] = local_10;
        if (in_EAX[1] == 0.0) {
          return 0xffffffff;
        }
        break;
      case 0xb:
        iVar12 = FUN_00466f00((float *)0x0);
        if (iVar12 != 0) {
          return 0xffffffff;
        }
        goto LAB_00468bf6;
      case 0xc:
switchD_004671c6_caseD_c:
        fVar4 = in_EAX[1];
        *in_EAX = (float)*(int *)((int)fVar4 + 0x14);
        in_EAX[1] = (float)(*(int *)((int)fVar4 + 0x10) + (int)fVar4);
        goto LAB_00468bf6;
      case 0xd:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_2c = *(int *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(local_2c,param_2);
            local_2c = (int)uVar28;
          }
        }
        if (local_2c == 0) goto switchD_004671c6_caseD_c;
        break;
      case 0xe:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_14 = *(int *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)fVar4 + (int)in_EAX) == 'f') {
            uVar28 = FUN_004931e0(fVar14,local_14);
            local_14 = (int)uVar28;
          }
        }
        if (local_14 != 0) goto switchD_004671c6_caseD_c;
        break;
      case 0xf:
        FUN_00469110(0xffffffff,(float *)0x0);
        break;
      case 0x10:
        iVar12 = *(int *)((int)fVar4 + 0x10 + (*(int *)((int)fVar4 + 0x10) + 4U & 0xfffffffc));
        if ((*(byte *)((int)fVar4 + 8) & 2) != 0) {
          uVar28 = FUN_00468f70(in_EAX,iVar12);
          iVar12 = (int)uVar28;
        }
        FUN_00469110(iVar12,(float *)0x1);
        break;
      case 0x11:
        uVar28 = FUN_00468e20(fVar14,(int)in_EAX,0);
        piVar5 = FUN_004691b0((int)uVar28);
        if (piVar5 != (int *)0x0) {
          *(undefined4 *)(*piVar5 + 4) = 0;
        }
        break;
      case 0x12:
        uVar28 = FUN_00468e20(fVar14,(int)in_EAX,0);
        piVar5 = FUN_004691b0((int)uVar28);
        if (piVar5 != (int *)0x0) {
          *(uint *)(*piVar5 + 0x1020) = *(uint *)(*piVar5 + 0x1020) | 1;
        }
        break;
      case 0x13:
        uVar28 = FUN_00468e20(fVar14,(int)in_EAX,0);
        piVar5 = FUN_004691b0((int)uVar28);
        if (piVar5 != (int *)0x0) {
          *(uint *)(*piVar5 + 0x1020) = *(uint *)(*piVar5 + 0x1020) & 0xfffffffe;
        }
        break;
      case 0x14:
        uVar28 = FUN_00468e20(fVar14,(int)in_EAX,0);
        piVar5 = FUN_004691b0((int)uVar28);
        if (piVar5 != (int *)0x0) {
          iVar12 = *piVar5;
          uVar28 = FUN_00468e20(extraout_ECX,(int)in_EAX,1);
          *(int *)((int)iVar12 + 0x1018) = (int)uVar28;
        }
        break;
      case 0x15:
        FUN_004691e0();
        break;
      case 0x1e:
        _Str = (char *)((int)fVar4 + 0x14);
        puVar8 = (undefined *)_malloc(0x400);
        local_118 = (double)CONCAT44(((local_118__u *)&local_118)->_4_4_,puVar8);
        *puVar8 = 0;
        FUN_00466ea0();
        if (_Str != (char *)0x0) {
          iVar16 = 1;
          local_104 = 0;
          iVar12 = 6;
          do {
            pcVar9 = _strchr(_Str,0x25);
            local_120 = (double)CONCAT44(((local_120__u *)&local_120)->_4_4_,pcVar9);
            if (pcVar9 == (char *)0x0) {
              FUN_00466ea0();
              break;
            }
            pcVar10 = _Str;
            do {
              cVar1 = *pcVar10;
              pcVar10[(int)local_118 - (int)_Str] = cVar1;
              pcVar10 = pcVar10 + 1;
            } while (cVar1 != '\0');
            pcVar9[(int)local_118 - (int)_Str] = '\0';
            iVar11 = FUN_00466ea0();
            cVar1 = *(char *)((int)iVar11 + 1);
            if (cVar1 == '%') {
              FUN_00466ea0();
            }
            else {
              bVar13 = (byte)iVar16;
              if (cVar1 == 'd') {
                fVar4 = in_EAX[1];
                iVar11 = *(int *)((int)fVar4 + 0x10);
                cVar1 = *(char *)(local_104 + iVar11 + 0x14 + (int)fVar4);
                if ((cVar1 == 'f') || (cVar1 == 'g')) {
                  ((local_110__u *)&local_110)->_0_4_ =
                       *(float *)((int)fVar4 +
                                 (((int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2) + iVar12) * 4);
                  fVar17 = (float10)((local_110__u *)&local_110)->_0_4_;
                  uVar15 = 1 << (bVar13 & 0x1f);
                  iVar11 = iVar16;
                  if ((uVar15 & *(ushort *)((int)fVar4 + 8)) != 0) {
                    fVar17 = FUN_00468fe0(iVar16,uVar15,((local_110__u *)&local_110)->_0_4_);
                    iVar11 = extraout_ECX_22;
                    uVar15 = extraout_EDX_00;
                  }
                  local_110 = (double)CONCAT44(((local_110__u *)&local_110)->_4_4_,(float)fVar17);
                  FUN_004931e0(iVar11,uVar15);
                }
                else if ((1 << (bVar13 & 0x1f) & (uint)*(ushort *)((int)fVar4 + 8)) != 0) {
                  FUN_00468f70(in_EAX,*(int *)((int)fVar4 +
                                              (((int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2) + iVar12
                                              ) * 4));
                }
                FUN_00466ea0();
                local_104 = local_104 + 8;
                iVar12 = iVar12 + 2;
                iVar16 = iVar16 + 1;
              }
              else if (cVar1 == 'f') {
                fVar4 = in_EAX[1];
                iVar11 = *(int *)((int)fVar4 + 0x10);
                cVar1 = *(char *)(local_104 + iVar11 + 0x14 + (int)fVar4);
                if ((cVar1 == 'f') || (cVar1 == 'g')) {
                  ((local_110__u *)&local_110)->_0_4_ =
                       *(float *)((int)fVar4 +
                                 (((int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2) + iVar12) * 4);
                  fVar17 = (float10)((local_110__u *)&local_110)->_0_4_;
                  uVar15 = 1 << (bVar13 & 0x1f);
                  if ((uVar15 & *(ushort *)((int)fVar4 + 8)) != 0) {
                    fVar17 = FUN_00468fe0(iVar16,uVar15,((local_110__u *)&local_110)->_0_4_);
                  }
                  local_110 = (double)CONCAT44(((local_110__u *)&local_110)->_4_4_,(float)fVar17);
                }
                else {
                  iVar11 = *(int *)((int)fVar4 +
                                   (((int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2) + iVar12) * 4);
                  if ((1 << (bVar13 & 0x1f) & (uint)*(ushort *)((int)fVar4 + 8)) != 0) {
                    uVar28 = FUN_00468f70(in_EAX,iVar11);
                    iVar11 = (int)uVar28;
                  }
                  local_110 = (double)CONCAT44(((local_110__u *)&local_110)->_4_4_,iVar11);
                }
                FUN_00466ea0();
                local_104 = local_104 + 8;
                iVar12 = iVar12 + 2;
                iVar16 = iVar16 + 1;
              }
            }
            _Str = (char *)((int)((local_120__u *)&local_120)->_0_4_ + 2);
          } while (_Str != (char *)0x0);
        }
        FUN_00466ea0();
        _free(SUB84(local_118,0));
        break;
      case 0x28:
        uVar28 = FUN_00468e20(fVar14,(int)in_EAX,0);
        FUN_004696c0((int)uVar28);
        break;
      case 0x29:
        FUN_00469700();
        break;
      case 0x2a:
        uVar28 = FUN_00468e20(fVar14,(int)in_EAX,0);
        local_120 = (double)CONCAT44(((local_120__u *)&local_120)->_4_4_,(int)uVar28);
        FUN_00469610(extraout_ECX_00,'i',(undefined4 *)&local_120);
        break;
      case 0x2b:
        puVar7 = (undefined4 *)FUN_00469080();
        fVar4 = in_EAX[0x402];
        fVar14 = (float)((int)fVar4 + -4);
        if (-1 < (int)fVar14) {
          in_EAX[0x402] = fVar14;
          uVar3 = *(undefined4 *)((int)in_EAX + (int)fVar4 + 4);
          *puVar7 = uVar3;
          in_EAX[0x402] = (float)((int)in_EAX[0x402] + -4);
          if (*(char *)((int)in_EAX + (int)in_EAX[0x402] + 8) == 'f') {
            uVar28 = FUN_004931e0(uVar3,extraout_EDX);
            *puVar7 = (int)uVar28;
          }
        }
        break;
      case 0x2c:
        fVar17 = FUN_00468ec0(0.0);
        local_120 = (double)CONCAT44(((local_120__u *)&local_120)->_4_4_,(float)fVar17);
        FUN_00469610(extraout_ECX_01,'f',(undefined4 *)&local_120);
        break;
      case 0x2d:
        pfVar6 = (float *)FUN_004690b0(0,(int)in_EAX);
        fVar4 = in_EAX[0x402];
        fVar14 = (float)((int)fVar4 + -4);
        if (-1 < (int)fVar14) {
          in_EAX[0x402] = fVar14;
          *pfVar6 = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)in_EAX[0x402] + -4);
          cVar1 = *(char *)((int)in_EAX + (int)in_EAX[0x402] + 8);
          if ((cVar1 != 'f') && (cVar1 == 'i')) {
            *pfVar6 = (float)(int)*pfVar6;
          }
        }
        break;
      case 0x32:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_24 = *(undefined4 *)((int)in_EAX + (int)fVar4 + 4);
          uVar28 = CONCAT44(local_24,local_24);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(fVar14,local_24);
            fVar14 = extraout_ECX_02;
          }
        }
        local_24 = (int)uVar28;
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          fVar14 = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          local_f0 = fVar14;
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(fVar14,(int)(uVar28 >> 0x20));
            local_f0 = (float)uVar28;
            fVar14 = extraout_ECX_03;
          }
        }
        local_f0 = (float)((int)local_f0 + local_24);
        FUN_00469610(fVar14,'i',&local_f0);
        break;
      case 0x33:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_68 = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if ((*(char *)((int)in_EAX + (int)fVar4) != 'f') &&
             (*(char *)((int)in_EAX + (int)fVar4) == 'i')) {
            local_68 = (float)(int)local_68;
          }
        }
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_ec = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if ((*(char *)((int)in_EAX + (int)fVar4) != 'f') &&
             (*(char *)((int)in_EAX + (int)fVar4) == 'i')) {
            local_ec = (float)(int)local_ec;
          }
        }
        local_ec = local_ec + local_68;
        FUN_00469610(&local_ec,'f',&local_ec);
        break;
      case 0x34:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          fVar14 = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          local_1c = fVar14;
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(fVar14,param_2);
            local_1c = (float)uVar28;
            fVar14 = extraout_ECX_04;
          }
        }
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_f4 = *(int *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(fVar14,local_f4);
            local_f4 = (int)uVar28;
          }
        }
        local_f4 = local_f4 - (int)local_1c;
        FUN_00469610(&local_f4,'i',&local_f4);
        break;
      case 0x35:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_c0 = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if ((*(char *)((int)in_EAX + (int)fVar4) != 'f') &&
             (*(char *)((int)in_EAX + (int)fVar4) == 'i')) {
            local_c0 = (float)(int)local_c0;
          }
        }
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_f8 = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if ((*(char *)((int)in_EAX + (int)fVar4) != 'f') &&
             (*(char *)((int)in_EAX + (int)fVar4) == 'i')) {
            local_f8 = (float)(int)local_f8;
          }
        }
        local_f8 = local_f8 - local_c0;
        FUN_00469610(&local_f8,'f',&local_f8);
        break;
      case 0x36:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_d0 = *(undefined4 *)((int)in_EAX + (int)fVar4 + 4);
          uVar18 = CONCAT44(local_d0,local_d0);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar18 = FUN_004931e0(fVar14,local_d0);
          }
        }
        local_d0 = (int)uVar18;
        fVar4 = in_EAX[0x402];
        fVar14 = (float)((int)fVar4 + -4);
        if (-1 < (int)fVar14) {
          in_EAX[0x402] = fVar14;
          local_e4 = *(int *)((int)in_EAX + (int)fVar4 + 4);
          fVar14 = (float)((int)fVar4 + -8);
          in_EAX[0x402] = fVar14;
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(fVar14,(int)(uVar18 >> 0x20));
            local_e4 = (int)uVar28;
            fVar14 = extraout_ECX_05;
          }
        }
        local_e4 = local_e4 * local_d0;
        FUN_00469610(fVar14,'i',&local_e4);
        break;
      case 0x37:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_38 = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if ((*(char *)((int)in_EAX + (int)fVar4) != 'f') &&
             (*(char *)((int)in_EAX + (int)fVar4) == 'i')) {
            local_38 = (float)(int)local_38;
          }
        }
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_fc = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if ((*(char *)((int)in_EAX + (int)fVar4) != 'f') &&
             (*(char *)((int)in_EAX + (int)fVar4) == 'i')) {
            local_fc = (float)(int)local_fc;
          }
        }
        local_fc = local_fc * local_38;
        FUN_00469610(&local_fc,'f',&local_fc);
        break;
      case 0x38:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_18 = *(undefined4 *)((int)in_EAX + (int)fVar4 + 4);
          uVar19 = CONCAT44(param_2,local_18);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar19 = FUN_004931e0(local_18,param_2);
          }
        }
        local_18 = (int)uVar19;
        fVar4 = in_EAX[0x402];
        fVar14 = (float)((int)fVar4 + -4);
        if (-1 < (int)fVar14) {
          in_EAX[0x402] = fVar14;
          local_e0 = *(int *)((int)in_EAX + (int)fVar4 + 4);
          fVar14 = (float)((int)fVar4 + -8);
          in_EAX[0x402] = fVar14;
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(fVar14,(int)(uVar19 >> 0x20));
            local_e0 = (int)uVar28;
            fVar14 = extraout_ECX_06;
          }
        }
        local_e0 = local_e0 / local_18;
        FUN_00469610(fVar14,'i',&local_e0);
        break;
      case 0x39:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_b8 = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if ((*(char *)((int)in_EAX + (int)fVar4) != 'f') &&
             (*(char *)((int)in_EAX + (int)fVar4) == 'i')) {
            local_b8 = (float)(int)local_b8;
          }
        }
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_100 = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if ((*(char *)((int)in_EAX + (int)fVar4) != 'f') &&
             (*(char *)((int)in_EAX + (int)fVar4) == 'i')) {
            local_100 = (float)(int)local_100;
          }
        }
        local_100 = local_100 / local_b8;
        FUN_00469610(&local_100,'f',&local_100);
        break;
      case 0x3a:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_c8 = *(undefined4 *)((int)in_EAX + (int)fVar4 + 4);
          uVar20 = CONCAT44(param_2,local_c8);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar20 = FUN_004931e0(local_c8,param_2);
          }
        }
        local_c8 = (int)uVar20;
        fVar4 = in_EAX[0x402];
        fVar14 = (float)((int)fVar4 + -4);
        if (-1 < (int)fVar14) {
          in_EAX[0x402] = fVar14;
          local_e8 = *(int *)((int)in_EAX + (int)fVar4 + 4);
          fVar14 = (float)((int)fVar4 + -8);
          in_EAX[0x402] = fVar14;
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(fVar14,(int)(uVar20 >> 0x20));
            local_e8 = (int)uVar28;
            fVar14 = extraout_ECX_07;
          }
        }
        local_e8 = local_e8 % local_c8;
        FUN_00469610(fVar14,'i',&local_e8);
        break;
      case 0x3b:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_60 = *(undefined4 *)((int)in_EAX + (int)fVar4 + 4);
          uVar21 = CONCAT44(local_60,local_60);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar21 = FUN_004931e0(fVar14,local_60);
          }
        }
        local_60 = (int)uVar21;
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_b0 = *(int *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(local_b0,(int)(uVar21 >> 0x20));
            local_b0 = (int)uVar28;
          }
        }
        uVar15 = (uint)(local_b0 == local_60);
        goto LAB_00467b02;
      case 0x3c:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_28 = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if ((*(char *)((int)in_EAX + (int)fVar4) != 'f') &&
             (*(char *)((int)in_EAX + (int)fVar4) == 'i')) {
            local_28 = (float)(int)local_28;
          }
        }
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_80 = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if ((*(char *)((int)in_EAX + (int)fVar4) != 'f') &&
             (*(char *)((int)in_EAX + (int)fVar4) == 'i')) {
            local_80 = (float)(int)local_80;
          }
        }
        local_118 = (double)CONCAT44(((local_118__u *)&local_118)->_4_4_,1);
        if ((NANP(local_28) || NANP(local_80)) == (local_28 == local_80)) {
          local_118 = (double)((ulonglong)((local_118__u *)&local_118)->_4_4_ << 0x20);
        }
LAB_00467f0f:
        FUN_00469610(in_EAX + 2,'i',(undefined4 *)&local_118);
        break;
      case 0x3d:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_20 = *(undefined4 *)((int)in_EAX + (int)fVar4 + 4);
          uVar22 = CONCAT44(local_20,local_20);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar22 = FUN_004931e0(fVar14,local_20);
          }
        }
        local_20 = (int)uVar22;
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_a8 = *(int *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(local_a8,(int)(uVar22 >> 0x20));
            local_a8 = (int)uVar28;
          }
        }
        uVar15 = (uint)(local_a8 != local_20);
        goto LAB_00467b02;
      case 0x3e:
        fVar4 = in_EAX[0x402];
        pfVar6 = in_EAX + 2;
        fVar14 = (float)((int)fVar4 + -4);
        if (-1 < (int)fVar14) {
          in_EAX[0x402] = fVar14;
          local_40 = *(float *)((int)pfVar6 + (int)fVar14);
          fVar4 = (float)((int)fVar4 + -8);
          in_EAX[0x402] = fVar4;
          cVar1 = *(char *)((int)pfVar6 + (int)fVar4);
          if ((cVar1 != 'f') && (cVar1 == 'i')) {
            local_40 = (float)(int)local_40;
          }
        }
        fVar4 = in_EAX[0x402];
        fVar14 = (float)((int)fVar4 + -4);
        if (-1 < (int)fVar14) {
          in_EAX[0x402] = fVar14;
          local_78 = *(float *)((int)pfVar6 + (int)fVar14);
          fVar4 = (float)((int)fVar4 + -8);
          in_EAX[0x402] = fVar4;
          cVar1 = *(char *)((int)pfVar6 + (int)fVar4);
          if ((cVar1 != 'f') && (cVar1 == 'i')) {
            local_78 = (float)(int)local_78;
          }
        }
        local_118 = (double)CONCAT44(((local_118__u *)&local_118)->_4_4_,1);
        if ((NANP(local_40) || NANP(local_78)) == (local_40 == local_78)) goto LAB_00467f0f;
        local_118 = (double)((ulonglong)((local_118__u *)&local_118)->_4_4_ << 0x20);
        FUN_00469610(pfVar6,'i',(undefined4 *)&local_118);
        break;
      case 0x3f:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_58 = *(undefined4 *)((int)in_EAX + (int)fVar4 + 4);
          uVar23 = CONCAT44(local_58,local_58);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar23 = FUN_004931e0(fVar14,local_58);
          }
        }
        local_58 = (int)uVar23;
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_a0 = *(int *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(local_a0,(int)(uVar23 >> 0x20));
            local_a0 = (int)uVar28;
          }
        }
        uVar15 = (uint)(local_a0 < local_58);
        goto LAB_00467b02;
      case 0x40:
        fVar4 = in_EAX[0x402];
        pfVar6 = in_EAX + 2;
        fVar14 = (float)((int)fVar4 + -4);
        if (-1 < (int)fVar14) {
          in_EAX[0x402] = fVar14;
          local_d4 = *(float *)((int)pfVar6 + (int)fVar14);
          fVar4 = (float)((int)fVar4 + -8);
          in_EAX[0x402] = fVar4;
          cVar1 = *(char *)((int)pfVar6 + (int)fVar4);
          if ((cVar1 != 'f') && (cVar1 == 'i')) {
            local_d4 = (float)(int)local_d4;
          }
        }
        fVar4 = in_EAX[0x402];
        fVar14 = (float)((int)fVar4 + -4);
        if (-1 < (int)fVar14) {
          in_EAX[0x402] = fVar14;
          local_70 = *(float *)((int)fVar14 + (int)pfVar6);
          fVar4 = (float)((int)fVar4 + -8);
          in_EAX[0x402] = fVar4;
          cVar1 = *(char *)((int)fVar4 + (int)pfVar6);
          if ((cVar1 != 'f') && (cVar1 == 'i')) {
            local_70 = (float)(int)local_70;
          }
        }
        local_118 = (double)CONCAT44(((local_118__u *)&local_118)->_4_4_,1);
        if (local_70 < local_d4) goto LAB_00467f0f;
        local_118 = (double)((ulonglong)((local_118__u *)&local_118)->_4_4_ << 0x20);
        FUN_00469610(pfVar6,'i',(undefined4 *)&local_118);
        break;
      case 0x41:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_30 = *(undefined4 *)((int)in_EAX + (int)fVar4 + 4);
          uVar24 = CONCAT44(local_30,local_30);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar24 = FUN_004931e0(fVar14,local_30);
          }
        }
        local_30 = (int)uVar24;
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_98 = *(int *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(local_98,(int)(uVar24 >> 0x20));
            local_98 = (int)uVar28;
          }
        }
        uVar15 = (uint)(local_98 <= local_30);
        goto LAB_00467b02;
      case 0x42:
        fVar4 = in_EAX[0x402];
        pfVar6 = in_EAX + 2;
        fVar14 = (float)((int)fVar4 + -4);
        if (-1 < (int)fVar14) {
          in_EAX[0x402] = fVar14;
          local_c4 = *(float *)((int)fVar14 + (int)pfVar6);
          fVar4 = (float)((int)fVar4 + -8);
          in_EAX[0x402] = fVar4;
          cVar1 = *(char *)((int)fVar4 + (int)pfVar6);
          if ((cVar1 != 'f') && (cVar1 == 'i')) {
            local_c4 = (float)(int)local_c4;
          }
        }
        fVar4 = in_EAX[0x402];
        fVar14 = (float)((int)fVar4 + -4);
        if (-1 < (int)fVar14) {
          in_EAX[0x402] = fVar14;
          local_cc = *(float *)((int)fVar14 + (int)pfVar6);
          fVar4 = (float)((int)fVar4 + -8);
          in_EAX[0x402] = fVar4;
          cVar1 = *(char *)((int)fVar4 + (int)pfVar6);
          if ((cVar1 != 'f') && (cVar1 == 'i')) {
            local_cc = (float)(int)local_cc;
          }
        }
        local_118 = (double)CONCAT44(((local_118__u *)&local_118)->_4_4_,1);
        if (local_cc <= local_c4) goto LAB_00467f0f;
        local_118 = (double)((ulonglong)((local_118__u *)&local_118)->_4_4_ << 0x20);
        FUN_00469610(pfVar6,'i',(undefined4 *)&local_118);
        break;
      case 0x43:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_50 = *(undefined4 *)((int)in_EAX + (int)fVar4 + 4);
          uVar25 = CONCAT44(local_50,local_50);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar25 = FUN_004931e0(fVar14,local_50);
          }
        }
        local_50 = (int)uVar25;
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_90 = *(int *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(local_90,(int)(uVar25 >> 0x20));
            local_90 = (int)uVar28;
          }
        }
        uVar15 = (uint)(local_50 < local_90);
        goto LAB_00467b02;
      case 0x44:
        fVar4 = in_EAX[0x402];
        pfVar6 = in_EAX + 2;
        fVar14 = (float)((int)fVar4 + -4);
        if (-1 < (int)fVar14) {
          in_EAX[0x402] = fVar14;
          local_b4 = *(float *)((int)fVar14 + (int)pfVar6);
          fVar4 = (float)((int)fVar4 + -8);
          in_EAX[0x402] = fVar4;
          cVar1 = *(char *)((int)fVar4 + (int)pfVar6);
          if ((cVar1 != 'f') && (cVar1 == 'i')) {
            local_b4 = (float)(int)local_b4;
          }
        }
        fVar4 = in_EAX[0x402];
        fVar14 = (float)((int)fVar4 + -4);
        if (-1 < (int)fVar14) {
          in_EAX[0x402] = fVar14;
          local_bc = *(float *)((int)fVar14 + (int)pfVar6);
          fVar4 = (float)((int)fVar4 + -8);
          in_EAX[0x402] = fVar4;
          cVar1 = *(char *)((int)fVar4 + (int)pfVar6);
          if ((cVar1 != 'f') && (cVar1 == 'i')) {
            local_bc = (float)(int)local_bc;
          }
        }
        local_118 = (double)CONCAT44(((local_118__u *)&local_118)->_4_4_,1);
        if (local_b4 < local_bc != (NANP(local_b4) || NANP(local_bc))) goto LAB_00467f0f;
        local_118 = (double)((ulonglong)((local_118__u *)&local_118)->_4_4_ << 0x20);
        FUN_00469610(pfVar6,'i',(undefined4 *)&local_118);
        break;
      case 0x45:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_d8 = *(undefined4 *)((int)in_EAX + (int)fVar4 + 4);
          uVar26 = CONCAT44(local_d8,local_d8);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar26 = FUN_004931e0(fVar14,local_d8);
          }
        }
        local_d8 = (int)uVar26;
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_88 = *(int *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(local_88,(int)(uVar26 >> 0x20));
            local_88 = (int)uVar28;
          }
        }
        uVar15 = (uint)(local_d8 <= local_88);
LAB_00467b02:
        local_120 = (double)CONCAT44(((local_120__u *)&local_120)->_4_4_,uVar15);
        FUN_00469610(&local_120,'i',(undefined4 *)&local_120);
        break;
      case 0x46:
        fVar4 = in_EAX[0x402];
        pfVar6 = in_EAX + 2;
        fVar14 = (float)((int)fVar4 + -4);
        if (-1 < (int)fVar14) {
          in_EAX[0x402] = fVar14;
          local_a4 = *(float *)((int)fVar14 + (int)pfVar6);
          fVar4 = (float)((int)fVar4 + -8);
          in_EAX[0x402] = fVar4;
          cVar1 = *(char *)((int)fVar4 + (int)pfVar6);
          if ((cVar1 != 'f') && (cVar1 == 'i')) {
            local_a4 = (float)(int)local_a4;
          }
        }
        fVar4 = in_EAX[0x402];
        fVar14 = (float)((int)fVar4 + -4);
        if (-1 < (int)fVar14) {
          in_EAX[0x402] = fVar14;
          local_ac = *(float *)((int)fVar14 + (int)pfVar6);
          fVar4 = (float)((int)fVar4 + -8);
          in_EAX[0x402] = fVar4;
          cVar1 = *(char *)((int)fVar4 + (int)pfVar6);
          if ((cVar1 != 'f') && (cVar1 == 'i')) {
            local_ac = (float)(int)local_ac;
          }
        }
        local_118 = (double)CONCAT44(((local_118__u *)&local_118)->_4_4_,1);
        if (local_a4 < local_ac != (local_a4 == local_ac)) goto LAB_00467f0f;
        local_118 = (double)((ulonglong)((local_118__u *)&local_118)->_4_4_ << 0x20);
        FUN_00469610(pfVar6,'i',(undefined4 *)&local_118);
        break;
      case 0x47:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_48 = *(int *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(fVar14,local_48);
            local_48 = (int)uVar28;
          }
        }
        local_120 = (double)CONCAT44(((local_120__u *)&local_120)->_4_4_,(uint)(local_48 == 0));
        FUN_00469610(&local_120,'i',(undefined4 *)&local_120);
        break;
      case 0x48:
        fVar4 = in_EAX[0x402];
        pfVar6 = in_EAX + 2;
        fVar14 = (float)((int)fVar4 + -4);
        if (-1 < (int)fVar14) {
          in_EAX[0x402] = fVar14;
          local_9c = *(float *)((int)fVar14 + (int)pfVar6);
          fVar4 = (float)((int)fVar4 + -8);
          in_EAX[0x402] = fVar4;
          cVar1 = *(char *)((int)fVar4 + (int)pfVar6);
          if ((cVar1 != 'f') && (cVar1 == 'i')) {
            local_9c = (float)(int)local_9c;
          }
        }
        local_118 = (double)CONCAT44(((local_118__u *)&local_118)->_4_4_,1);
        if (NANP(local_9c) != (local_9c == 0.0)) goto LAB_00467f0f;
        local_118 = (double)((ulonglong)((local_118__u *)&local_118)->_4_4_ << 0x20);
        FUN_00469610(pfVar6,'i',(undefined4 *)&local_118);
        break;
      case 0x49:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          fVar14 = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          local_8c = fVar14;
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(fVar14,param_2);
            local_8c = (float)uVar28;
            fVar14 = extraout_ECX_08;
          }
        }
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_94 = *(int *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(fVar14,local_94);
            local_94 = (int)uVar28;
            fVar14 = extraout_ECX_09;
          }
        }
        if ((local_94 != 0) ||
           (local_118 = (double)((ulonglong)local_118 & 0xffffffff00000000), local_8c != 0.0)) {
          local_118 = (double)CONCAT44(((local_118__u *)&local_118)->_4_4_,1);
        }
        FUN_00469610(fVar14,'i',(undefined4 *)&local_118);
        break;
      case 0x4a:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          fVar14 = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          local_7c = fVar14;
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(fVar14,param_2);
            local_7c = (float)uVar28;
            fVar14 = extraout_ECX_10;
          }
        }
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_84 = *(int *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(fVar14,local_84);
            local_84 = (int)uVar28;
            fVar14 = extraout_ECX_11;
          }
        }
        if (local_84 == 0) {
LAB_0046842f:
          local_118 = (double)((ulonglong)local_118 & 0xffffffff00000000);
        }
        else {
          local_118 = (double)CONCAT44(((local_118__u *)&local_118)->_4_4_,1);
          if (local_7c == 0.0) goto LAB_0046842f;
        }
        FUN_00469610(fVar14,'i',(undefined4 *)&local_118);
        break;
      case 0x4b:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          fVar14 = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          local_6c = fVar14;
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(fVar14,param_2);
            local_6c = (float)uVar28;
            fVar14 = extraout_ECX_12;
          }
        }
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_74 = *(uint *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(fVar14,local_74);
            local_74 = (uint)uVar28;
          }
        }
        local_120 = (double)CONCAT44(((local_120__u *)&local_120)->_4_4_,local_74 ^ (uint)local_6c);
        FUN_00469610(&local_120,'i',(undefined4 *)&local_120);
        break;
      case 0x4c:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_5c = *(undefined4 *)((int)in_EAX + (int)fVar4 + 4);
          uVar27 = CONCAT44(local_5c,local_5c);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar27 = FUN_004931e0(fVar14,local_5c);
            fVar14 = extraout_ECX_13;
          }
        }
        local_5c = (uint)uVar27;
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          fVar14 = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          local_64 = fVar14;
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(fVar14,(int)(uVar27 >> 0x20));
            local_64 = (float)uVar28;
            fVar14 = extraout_ECX_14;
          }
        }
        local_120 = (double)CONCAT44(((local_120__u *)&local_120)->_4_4_,(uint)local_64 | local_5c);
        FUN_00469610(fVar14,'i',(undefined4 *)&local_120);
        break;
      case 0x4d:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          fVar14 = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          local_4c = fVar14;
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(fVar14,param_2);
            local_4c = (float)uVar28;
            fVar14 = extraout_ECX_15;
          }
        }
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_54 = *(uint *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(fVar14,local_54);
            local_54 = (uint)uVar28;
          }
        }
        local_120 = (double)CONCAT44(((local_120__u *)&local_120)->_4_4_,local_54 & (uint)local_4c);
        FUN_00469610(&local_120,'i',(undefined4 *)&local_120);
        break;
      case 0x4e:
        uVar28 = FUN_00468e20(fVar14,(int)in_EAX,0);
        local_120 = (double)CONCAT44(((local_120__u *)&local_120)->_4_4_,(int)uVar28);
        piVar5 = (int *)FUN_00469080();
        *piVar5 = (int)uVar28 + -1;
        FUN_00469610(extraout_ECX_17,'i',(undefined4 *)&local_120);
        break;
      case 0x4f:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          fVar14 = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          local_44 = fVar14;
          if ((*(char *)((int)in_EAX + (int)fVar4) != 'f') &&
             (*(char *)((int)in_EAX + (int)fVar4) == 'i')) {
            local_44 = (float)(int)fVar14;
          }
        }
        fVar17 = FUN_00406680(fVar14,(char)param_2,local_44);
        local_120 = (double)CONCAT44(((local_120__u *)&local_120)->_4_4_,(float)fVar17);
        FUN_00469610(extraout_ECX_18,'f',(undefined4 *)&local_120);
        break;
      case 0x50:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          fVar14 = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          local_34 = fVar14;
          if ((*(char *)((int)in_EAX + (int)fVar4) != 'f') &&
             (*(char *)((int)in_EAX + (int)fVar4) == 'i')) {
            local_34 = (float)(int)fVar14;
          }
        }
        fVar17 = FUN_00406170(fVar14,(char)param_2,local_34);
        local_120 = (double)CONCAT44(((local_120__u *)&local_120)->_4_4_,(float)fVar17);
        FUN_00469610(extraout_ECX_20,'f',(undefined4 *)&local_120);
        break;
      case 0x51:
        fVar17 = FUN_00468ec0(4.2039e-45);
        fVar4 = (float)fVar17;
        fVar17 = FUN_00468ec0(2.8026e-45);
        fVar17 = FUN_004646e0((float)fVar17);
        FUN_00469270(&local_c,(float)fVar17,fVar4);
        puVar7 = (undefined4 *)FUN_004690b0(0,(int)in_EAX);
        *puVar7 = local_c;
        puVar7 = (undefined4 *)FUN_004690b0(1,(int)in_EAX);
        *puVar7 = local_8;
        break;
      case 0x52:
        fVar17 = FUN_00468ec0(0.0);
        fVar17 = FUN_004646e0((float)fVar17);
        local_120 = (double)CONCAT44(((local_120__u *)&local_120)->_4_4_,(float)fVar17);
        puVar7 = (undefined4 *)FUN_004690b0(0,(int)in_EAX);
  local_120__u_alias = (local_120__u *)&local_120;
        *puVar7 = local_120__u_alias->_0_4_;
        break;
      case 0x53:
        local_110 = (double)*in_EAX;
        uVar28 = FUN_00468e20(fVar14,(int)in_EAX,0);
        local_120 = (double)CONCAT44(((local_120__u *)&local_120)->_4_4_,(int)uVar28);
        *in_EAX = (float)local_110 - (float)(int)uVar28;
        break;
      case 0x54:
        fVar4 = in_EAX[0x402];
        fVar14 = (float)((int)fVar4 + -4);
        if (-1 < (int)fVar14) {
          in_EAX[0x402] = fVar14;
          local_dc = *(int *)((int)in_EAX + (int)fVar4 + 4);
          fVar14 = (float)((int)fVar4 + -8);
          in_EAX[0x402] = fVar14;
          if (*(char *)((int)in_EAX + (int)fVar4) == 'f') {
            uVar28 = FUN_004931e0(fVar14,param_2);
            local_dc = -(int)uVar28;
            FUN_00469610(extraout_ECX_16,'i',&local_dc);
            break;
          }
        }
        local_dc = -local_dc;
        FUN_00469610(fVar14,'i',&local_dc);
        break;
      case 0x55:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_108 = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if ((*(char *)((int)in_EAX + (int)fVar4) != 'f') &&
             (*(char *)((int)in_EAX + (int)fVar4) == 'i')) {
            local_108 = (float)(int)local_108;
          }
        }
        local_108 = (float)-(int)local_108;
        FUN_00469610(&local_108,'f',&local_108);
        break;
      case 0x56:
        fVar17 = FUN_00468ec0(1.4013e-45);
        local_110 = (double)CONCAT44(((local_110__u *)&local_110)->_4_4_,(float)fVar17);
        fVar17 = FUN_00468ec0(2.8026e-45);
        local_118 = (double)(float)fVar17;
        local_120 = (double)((local_110__u *)&local_110)->_0_4_;
        pfVar6 = (float *)FUN_004690b0(0,(int)in_EAX);
        *pfVar6 = (float)((float10)local_118 * (float10)local_118 +
                         (float10)local_120 * (float10)local_120);
        break;
      case 0x57:
        fVar17 = FUN_00468ec0(4.2039e-45);
        local_120 = (double)fVar17;
        fVar17 = FUN_00468ec0(5.60519e-45);
        local_110 = (double)fVar17;
        fVar17 = FUN_00468ec0(1.4013e-45);
        fVar4 = (float)((float10)local_120 - fVar17);
        ((local_120__u *)&local_120)->_0_4_ = fVar4;
        fVar17 = FUN_00468ec0(2.8026e-45);
        ((local_120__u *)&local_120)->_0_4_ = (float)((float10)local_110 - fVar17);
        fVar17 = FUN_004088c0(extraout_ECX_21,extraout_DL,((local_120__u *)&local_120)->_0_4_,fVar4);
        local_120 = (double)CONCAT44(((local_120__u *)&local_120)->_4_4_,(float)fVar17);
        puVar7 = (undefined4 *)FUN_004690b0(0,(int)in_EAX);
  local_120__u_alias = (local_120__u *)&local_120;
        *puVar7 = local_120__u_alias->_0_4_;
        break;
      case 0x58:
        fVar4 = in_EAX[0x402];
        if (-1 < (int)fVar4 + -4) {
          in_EAX[0x402] = (float)((int)fVar4 + -4);
          local_3c = *(float *)((int)in_EAX + (int)fVar4 + 4);
          in_EAX[0x402] = (float)((int)fVar4 + -8);
          if ((*(char *)((int)in_EAX + (int)fVar4) != 'f') &&
             (*(char *)((int)in_EAX + (int)fVar4) == 'i')) {
            local_3c = (float)(int)local_3c;
          }
        }
        fVar17 = FUN_00408860(local_3c);
        local_120 = (double)CONCAT44(((local_120__u *)&local_120)->_4_4_,(float)fVar17);
        FUN_00469610(extraout_ECX_19,'f',(undefined4 *)&local_120);
        break;
      case 0x59:
        fVar17 = FUN_00468ec0(1.4013e-45);
        fVar4 = (float)fVar17;
        fVar17 = FUN_00468ec0(2.8026e-45);
        fVar17 = FUN_00469200((float)fVar17,fVar4);
        local_120 = (double)CONCAT44(((local_120__u *)&local_120)->_4_4_,(float)fVar17);
        puVar7 = (undefined4 *)FUN_004690b0(0,(int)in_EAX);
  local_120__u_alias = (local_120__u *)&local_120;
        *puVar7 = local_120__u_alias->_0_4_;
      }
switchD_004671c6_caseD_0:
      in_EAX[1] = (float)((uint)*(ushort *)((int)in_EAX[1] + 6) + (int)in_EAX[1]);
LAB_00468bf6:
      param_2 = (int *)in_EAX[1];
    } while ((float)*param_2 <= *in_EAX);
  }
  *in_EAX = *in_EAX + param_3;
  return 0;
}


