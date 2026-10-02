/* longlong __fastcall FUN_00455630(undefined4 param_1, short * param_2, uint param_3) @ 00455630  12538 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

typedef struct local_dc__u { undefined4 _; undefined1 _0_1_; } local_dc__u;
typedef struct local_cc__u { undefined4 _; undefined1 _3_1_; } local_cc__u;
typedef struct local_c4__u { undefined4 _; undefined1 _0_1_; } local_c4__u;
typedef struct local_c0__u { undefined4 _; undefined1 _0_1_; } local_c0__u;
typedef struct local_b0__u { undefined4 _; undefined1 _3_1_; } local_b0__u;
longlong __fastcall FUN_00455630(undefined4 param_1,short *param_2,uint param_3)

{
  local_dc__u *local_dc__u_alias;
  local_cc__u *local_cc__u_alias;
  local_c4__u *local_c4__u_alias;
  local_c0__u *local_c0__u_alias;
  local_b0__u *local_b0__u_alias;
  short sVar1;
  undefined2 *puVar2;
  float fVar3;
  undefined uVar4;
  undefined uVar5;
  byte bVar6;
  undefined uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  void *pvVar11;
  int *piVar12;
  undefined4 *puVar13;
  float *pfVar14;
  uint uVar15;
  ushort uVar16;
  uint uVar17;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  uint extraout_ECX_06;
  uint extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  uint extraout_ECX_14;
  uint extraout_ECX_15;
  uint extraout_ECX_16;
  uint extraout_ECX_17;
  uint extraout_ECX_18;
  uint extraout_ECX_19;
  uint extraout_ECX_20;
  uint extraout_ECX_21;
  uint extraout_ECX_22;
  uint extraout_ECX_23;
  uint extraout_ECX_24;
  uint extraout_ECX_25;
  uint extraout_ECX_26;
  uint extraout_ECX_27;
  undefined4 extraout_ECX_28;
  undefined4 extraout_ECX_29;
  uint extraout_ECX_30;
  uint extraout_ECX_31;
  uint extraout_ECX_32;
  uint extraout_ECX_33;
  undefined4 extraout_ECX_34;
  undefined4 extraout_ECX_35;
  undefined4 uVar18;
  uint extraout_ECX_36;
  uint extraout_ECX_37;
  uint extraout_ECX_38;
  uint extraout_ECX_39;
  uint extraout_ECX_40;
  uint extraout_ECX_41;
  uint extraout_ECX_42;
  uint extraout_ECX_43;
  uint extraout_ECX_44;
  uint extraout_ECX_45;
  uint extraout_ECX_46;
  uint extraout_ECX_47;
  uint extraout_ECX_48;
  uint extraout_ECX_49;
  uint extraout_ECX_50;
  uint extraout_ECX_51;
  uint extraout_ECX_52;
  uint extraout_ECX_53;
  uint extraout_ECX_54;
  uint extraout_ECX_55;
  uint extraout_ECX_56;
  uint extraout_ECX_57;
  int extraout_ECX_58;
  int extraout_ECX_59;
  uint extraout_ECX_60;
  uint extraout_ECX_61;
  uint extraout_ECX_62;
  uint extraout_ECX_63;
  uint extraout_ECX_64;
  uint extraout_ECX_65;
  undefined4 extraout_ECX_66;
  uint extraout_ECX_67;
  uint extraout_ECX_68;
  uint extraout_ECX_69;
  uint extraout_ECX_70;
  uint extraout_ECX_71;
  uint extraout_ECX_72;
  uint extraout_ECX_73;
  uint extraout_ECX_74;
  uint extraout_ECX_75;
  uint extraout_ECX_76;
  uint extraout_ECX_77;
  undefined4 extraout_ECX_78;
  uint extraout_ECX_79;
  uint extraout_ECX_80;
  uint extraout_ECX_81;
  uint extraout_ECX_82;
  uint extraout_ECX_83;
  uint extraout_ECX_84;
  uint extraout_ECX_85;
  uint extraout_ECX_86;
  uint extraout_ECX_87;
  uint extraout_ECX_88;
  undefined4 extraout_ECX_89;
  undefined4 extraout_ECX_90;
  uint extraout_ECX_91;
  uint extraout_ECX_92;
  uint extraout_ECX_93;
  uint extraout_ECX_94;
  undefined4 extraout_ECX_95;
  undefined4 extraout_ECX_96;
  int iVar19;
  short *extraout_EDX;
  short *extraout_EDX_00;
  short *extraout_EDX_01;
  short *extraout_EDX_02;
  short *extraout_EDX_03;
  short *extraout_EDX_04;
  short *extraout_EDX_05;
  short *extraout_EDX_06;
  short *extraout_EDX_07;
  short *extraout_EDX_08;
  short *extraout_EDX_09;
  short *extraout_EDX_10;
  short *extraout_EDX_11;
  short *extraout_EDX_12;
  short *extraout_EDX_13;
  short *extraout_EDX_14;
  short *extraout_EDX_15;
  short *extraout_EDX_16;
  short *extraout_EDX_17;
  short *extraout_EDX_18;
  short *extraout_EDX_19;
  short *extraout_EDX_20;
  short *extraout_EDX_21;
  short *extraout_EDX_22;
  short *extraout_EDX_23;
  short *extraout_EDX_24;
  short *extraout_EDX_25;
  short *extraout_EDX_26;
  short *extraout_EDX_27;
  short *extraout_EDX_28;
  short *extraout_EDX_29;
  short *extraout_EDX_30;
  short *extraout_EDX_31;
  short *extraout_EDX_32;
  short *extraout_EDX_33;
  short *extraout_EDX_34;
  short *extraout_EDX_35;
  short *extraout_EDX_36;
  short *extraout_EDX_37;
  short *extraout_EDX_38;
  short *extraout_EDX_39;
  short *extraout_EDX_40;
  short *extraout_EDX_41;
  short *extraout_EDX_42;
  short *extraout_EDX_43;
  short *extraout_EDX_44;
  short *extraout_EDX_45;
  short *extraout_EDX_46;
  short *extraout_EDX_47;
  short *extraout_EDX_48;
  short *extraout_EDX_49;
  short *extraout_EDX_50;
  short *extraout_EDX_51;
  short *extraout_EDX_52;
  short *extraout_EDX_53;
  short *extraout_EDX_54;
  short *extraout_EDX_55;
  short *extraout_EDX_56;
  short *extraout_EDX_57;
  short *extraout_EDX_58;
  short *extraout_EDX_59;
  short *extraout_EDX_60;
  short *extraout_EDX_61;
  short *extraout_EDX_62;
  short *extraout_EDX_63;
  short *extraout_EDX_64;
  short *extraout_EDX_65;
  short *extraout_EDX_66;
  short *extraout_EDX_67;
  short *extraout_EDX_68;
  short *extraout_EDX_69;
  undefined4 extraout_EDX_70;
  undefined4 extraout_EDX_71;
  short *extraout_EDX_72;
  short *extraout_EDX_73;
  short *extraout_EDX_74;
  short *extraout_EDX_75;
  short *extraout_EDX_76;
  short *extraout_EDX_77;
  undefined4 extraout_EDX_78;
  undefined4 extraout_EDX_79;
  short *extraout_EDX_80;
  short *extraout_EDX_81;
  short *extraout_EDX_82;
  short *extraout_EDX_83;
  short *extraout_EDX_84;
  short *extraout_EDX_85;
  short *extraout_EDX_86;
  short *extraout_EDX_87;
  short *extraout_EDX_88;
  short *extraout_EDX_89;
  short *extraout_EDX_90;
  short *extraout_EDX_91;
  short *extraout_EDX_92;
  short *extraout_EDX_93;
  short *extraout_EDX_94;
  short *extraout_EDX_95;
  short *extraout_EDX_96;
  short *extraout_EDX_97;
  short *extraout_EDX_98;
  short *extraout_EDX_99;
  short *extraout_EDX_x00100;
  short *extraout_EDX_x00101;
  short *extraout_EDX_x00102;
  short *extraout_EDX_x00103;
  short *extraout_EDX_x00104;
  short *extraout_EDX_x00105;
  short *extraout_EDX_x00106;
  short *extraout_EDX_x00107;
  short *extraout_EDX_x00108;
  short *extraout_EDX_x00109;
  short *extraout_EDX_x00110;
  short *extraout_EDX_x00111;
  short *extraout_EDX_x00112;
  short *extraout_EDX_x00113;
  short *extraout_EDX_x00114;
  short *extraout_EDX_x00115;
  short *extraout_EDX_x00116;
  short *extraout_EDX_x00117;
  short *extraout_EDX_x00118;
  short *extraout_EDX_x00119;
  short *extraout_EDX_x00120;
  short *extraout_EDX_x00121;
  short *extraout_EDX_x00122;
  short *extraout_EDX_x00123;
  short *extraout_EDX_x00124;
  short *extraout_EDX_x00125;
  short *extraout_EDX_x00126;
  short *extraout_EDX_x00127;
  short *extraout_EDX_x00128;
  short *extraout_EDX_x00129;
  short *extraout_EDX_x00130;
  short *extraout_EDX_x00131;
  short *extraout_EDX_x00132;
  short *extraout_EDX_x00133;
  short *extraout_EDX_x00134;
  short *extraout_EDX_x00135;
  short *extraout_EDX_x00136;
  short *extraout_EDX_x00137;
  short *extraout_EDX_x00138;
  short *extraout_EDX_x00139;
  short *extraout_EDX_x00140;
  short *extraout_EDX_x00141;
  short *extraout_EDX_x00142;
  short *extraout_EDX_x00143;
  short *extraout_EDX_x00144;
  short *extraout_EDX_x00145;
  short *extraout_EDX_x00146;
  short *extraout_EDX_x00147;
  short *extraout_EDX_x00148;
  short *extraout_EDX_x00149;
  short *extraout_EDX_x00150;
  short *extraout_EDX_x00151;
  short *extraout_EDX_x00152;
  short *extraout_EDX_x00153;
  short *extraout_EDX_x00154;
  short *extraout_EDX_x00155;
  short *extraout_EDX_x00156;
  short *extraout_EDX_x00157;
  short *extraout_EDX_x00158;
  short *extraout_EDX_x00159;
  short *extraout_EDX_x00160;
  short *extraout_EDX_x00161;
  short *extraout_EDX_x00162;
  short *extraout_EDX_x00163;
  short *extraout_EDX_x00164;
  short *extraout_EDX_x00165;
  short *extraout_EDX_x00166;
  short *extraout_EDX_x00167;
  short *extraout_EDX_x00168;
  short *extraout_EDX_x00169;
  short *extraout_EDX_x00170;
  short *extraout_EDX_x00171;
  short *extraout_EDX_x00172;
  short *extraout_EDX_x00173;
  short *extraout_EDX_x00174;
  short *extraout_EDX_x00175;
  undefined4 extraout_EDX_x00176;
  undefined4 extraout_EDX_x00177;
  float *pfVar20;
  short *psVar21;
  float fVar22;
  float *pfVar23;
  bool bVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  ulonglong uVar28;
  undefined8 uVar29;
  short *local_dc;
  int local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined4 local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  byte local_9c;
  undefined local_9b;
  undefined local_9a;
  byte local_98;
  undefined local_97;
  undefined local_96;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  short *local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  short *local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c [2];
  
  if (*(int *)(param_3 + 0x3f0) != 0) {
    if ((*(uint *)(param_3 + 0x47c) & 0x40000) == 0) {
      local_7c = DAT_004b2ed0;
      if ((int)*(uint *)(param_3 + 0x47c) < 0) {
        DAT_004b2ed0 = 1.0;
      }
      uVar16 = *(ushort *)(param_3 + 0x3c4);
      uVar17 = (uint)uVar16;
      if (uVar16 != 0) goto LAB_00455730;
LAB_00455686:
      puVar2 = *(undefined2 **)(param_3 + 0x3f0);
      if ((int)(short)puVar2[2] <= *(int *)(param_3 + 0x6c)) {
        switch(*puVar2) {
        case 3:
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) | 1;
          if (*(int *)(param_3 + 0x4ac) == 0) {
            iVar19 = *(int *)(puVar2 + 4);
            if ((*(byte *)(puVar2 + 3) & 1) != 0) {
              iVar19 = FUN_004553f0(param_3);
            }
          }
          else {
            if ((*(byte *)(puVar2 + 3) & 1) != 0) {
              FUN_004553f0(param_3);
            }
            iVar19 = (**(code **)(param_3 + 0x4ac))();
          }
          if (iVar19 < 0) {
            iVar8 = *(int *)(DAT_004b43b8 + 0x18fb4);
            iVar19 = 0x108;
          }
          else {
            iVar8 = *(int *)(param_3 + 0x3f8);
          }
          FUN_00454b80(iVar19,iVar8);
          *(undefined4 *)(param_3 + 0x3e0) = *(undefined4 *)(param_3 + 0x6c);
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_37;
          goto LAB_00455686;
        case 4:
          FUN_004067e0(*(int *)(puVar2 + 6));
          param_2 = (short *)(*(int *)(param_3 + 0x3ec) + *(int *)(puVar2 + 4));
          *(short **)(param_3 + 0x3f0) = param_2;
          uVar17 = extraout_ECX;
          goto LAB_00455686;
        case 5:
          piVar12 = (int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            piVar12 = FUN_00455580(uVar17,param_3);
            param_2 = extraout_EDX;
          }
          *piVar12 = *piVar12 + -1;
          iVar19 = *(int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
            param_2 = extraout_EDX_00;
          }
          if (0 < iVar19) {
            FUN_004067e0(*(int *)(puVar2 + 8));
            uVar17 = *(int *)(param_3 + 0x3ec) + *(int *)(puVar2 + 6);
            *(uint *)(param_3 + 0x3f0) = uVar17;
            param_2 = extraout_EDX_01;
            goto LAB_00455686;
          }
          break;
        case 6:
          if ((*(byte *)(puVar2 + 3) & 2) == 0) {
            psVar21 = *(short **)(puVar2 + 6);
          }
          else {
            psVar21 = (short *)FUN_004553f0(param_3);
            uVar17 = extraout_ECX_44;
            param_2 = extraout_EDX_x00112;
          }
          pfVar14 = (float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) == 0) goto LAB_00457969;
          pfVar14 = (float *)FUN_00455580(uVar17,param_3);
          *pfVar14 = (float)psVar21;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_x00113;
          goto LAB_00455686;
        case 7:
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            uVar17 = extraout_ECX_45;
            param_2 = extraout_EDX_x00114;
          }
          pfVar14 = (float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            pfVar14 = (float *)FUN_004554d0(uVar17,param_2);
            param_2 = extraout_EDX_x00115;
          }
          *pfVar14 = (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 8:
          if ((*(byte *)(puVar2 + 3) & 2) == 0) {
            iVar19 = *(int *)(puVar2 + 6);
          }
          else {
            iVar19 = FUN_004553f0(param_3);
            uVar17 = extraout_ECX_67;
            param_2 = extraout_EDX_x00138;
          }
          piVar12 = (int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            piVar12 = FUN_00455580(uVar17,param_3);
            param_2 = extraout_EDX_x00139;
          }
          *piVar12 = *piVar12 + iVar19;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 9:
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            uVar17 = extraout_ECX_68;
            param_2 = extraout_EDX_x00140;
          }
          pfVar14 = (float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            pfVar14 = (float *)FUN_004554d0(uVar17,param_2);
            param_2 = extraout_EDX_x00141;
          }
          *pfVar14 = (float)fVar25 + *pfVar14;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 10:
          if ((*(byte *)(puVar2 + 3) & 2) == 0) {
            iVar19 = *(int *)(puVar2 + 6);
          }
          else {
            iVar19 = FUN_004553f0(param_3);
            uVar17 = extraout_ECX_69;
            param_2 = extraout_EDX_x00142;
          }
          piVar12 = (int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            piVar12 = FUN_00455580(uVar17,param_3);
            param_2 = extraout_EDX_x00143;
          }
          *piVar12 = *piVar12 - iVar19;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0xb:
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            uVar17 = extraout_ECX_70;
            param_2 = extraout_EDX_x00144;
          }
          pfVar14 = (float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            pfVar14 = (float *)FUN_004554d0(uVar17,param_2);
            param_2 = extraout_EDX_x00145;
          }
          *pfVar14 = *pfVar14 - (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0xc:
          if ((*(byte *)(puVar2 + 3) & 2) == 0) {
            iVar19 = *(int *)(puVar2 + 6);
          }
          else {
            iVar19 = FUN_004553f0(param_3);
            uVar17 = extraout_ECX_71;
            param_2 = extraout_EDX_x00146;
          }
          piVar12 = (int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            piVar12 = FUN_00455580(uVar17,param_3);
            param_2 = extraout_EDX_x00147;
          }
          *piVar12 = *piVar12 * iVar19;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0xd:
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            uVar17 = extraout_ECX_72;
            param_2 = extraout_EDX_x00148;
          }
          pfVar14 = (float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            pfVar14 = (float *)FUN_004554d0(uVar17,param_2);
            param_2 = extraout_EDX_x00149;
          }
          *pfVar14 = (float)fVar25 * *pfVar14;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0xe:
          if ((*(byte *)(puVar2 + 3) & 2) == 0) {
            iVar19 = *(int *)(puVar2 + 6);
          }
          else {
            iVar19 = FUN_004553f0(param_3);
            uVar17 = extraout_ECX_73;
          }
          piVar12 = (int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            piVar12 = FUN_00455580(uVar17,param_3);
          }
          param_2 = (short *)(*piVar12 % iVar19);
          *piVar12 = *piVar12 / iVar19;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0xf:
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            uVar17 = extraout_ECX_74;
            param_2 = extraout_EDX_x00150;
          }
          pfVar14 = (float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            pfVar14 = (float *)FUN_004554d0(uVar17,param_2);
            param_2 = extraout_EDX_x00151;
          }
          *pfVar14 = *pfVar14 / (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x10:
          if ((*(byte *)(puVar2 + 3) & 2) == 0) {
            iVar19 = *(int *)(puVar2 + 6);
          }
          else {
            iVar19 = FUN_004553f0(param_3);
            uVar17 = extraout_ECX_75;
          }
          pfVar14 = (float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            pfVar14 = (float *)FUN_00455580(uVar17,param_3);
          }
          param_2 = (short *)((int)*pfVar14 % iVar19);
          *pfVar14 = (float)param_2;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x11:
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            FUN_004551b0(uVar17,param_2,*(undefined4 *)(puVar2 + 6));
            uVar17 = extraout_ECX_76;
            param_2 = extraout_EDX_x00152;
          }
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            FUN_004551b0(uVar17,param_2,*(undefined4 *)(puVar2 + 4));
            uVar17 = extraout_ECX_77;
          }
          fVar25 = (float10)FUN_004933ca(uVar17);
          local_dc = (short *)(float)fVar25;
          uVar9 = extraout_ECX_78;
          param_2 = extraout_EDX_x00153;
          if ((*(byte *)(puVar2 + 3) & 1) != 0) goto LAB_00457b66;
          *(short **)(puVar2 + 4) = local_dc;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x12:
          if ((*(byte *)(puVar2 + 3) & 2) == 0) {
            param_2 = *(short **)(puVar2 + 6);
            local_dc = param_2;
          }
          else {
            local_dc = (short *)FUN_004553f0(param_3);
            uVar17 = extraout_ECX_46;
            param_2 = extraout_EDX_x00116;
          }
          if ((*(byte *)(puVar2 + 3) & 4) == 0) {
            iVar19 = *(int *)(puVar2 + 8);
          }
          else {
            iVar19 = FUN_004553f0(param_3);
            uVar17 = extraout_ECX_47;
            param_2 = extraout_EDX_x00117;
          }
          piVar12 = (int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            piVar12 = FUN_00455580(uVar17,param_3);
            param_2 = extraout_EDX_x00118;
          }
          *piVar12 = iVar19 + (int)local_dc;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x13:
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            uVar17 = extraout_ECX_48;
            param_2 = extraout_EDX_x00119;
          }
          fVar27 = (float10)*(float *)(puVar2 + 8);
          if ((*(byte *)(puVar2 + 3) & 4) != 0) {
            fVar27 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 8));
            uVar17 = extraout_ECX_49;
            param_2 = extraout_EDX_x00120;
          }
          pfVar14 = (float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            pfVar14 = (float *)FUN_004554d0(uVar17,param_2);
            param_2 = extraout_EDX_x00121;
          }
          *pfVar14 = (float)fVar27 + (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x14:
          if ((*(byte *)(puVar2 + 3) & 2) == 0) {
            iVar19 = *(int *)(puVar2 + 6);
          }
          else {
            iVar19 = FUN_004553f0(param_3);
            uVar17 = extraout_ECX_50;
          }
          if ((*(byte *)(puVar2 + 3) & 4) == 0) {
            param_2 = *(short **)(puVar2 + 8);
            local_dc = param_2;
          }
          else {
            local_dc = (short *)FUN_004553f0(param_3);
            uVar17 = extraout_ECX_51;
            param_2 = extraout_EDX_x00122;
          }
          piVar12 = (int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            piVar12 = FUN_00455580(uVar17,param_3);
            param_2 = extraout_EDX_x00123;
          }
          *piVar12 = iVar19 - (int)local_dc;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x15:
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            uVar17 = extraout_ECX_52;
            param_2 = extraout_EDX_x00124;
          }
          fVar27 = (float10)*(float *)(puVar2 + 8);
          if ((*(byte *)(puVar2 + 3) & 4) != 0) {
            fVar27 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 8));
            uVar17 = extraout_ECX_53;
            param_2 = extraout_EDX_x00125;
          }
          pfVar14 = (float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            pfVar14 = (float *)FUN_004554d0(uVar17,param_2);
            param_2 = extraout_EDX_x00126;
          }
          *pfVar14 = (float)fVar25 - (float)fVar27;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x16:
          iVar19 = *(int *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            iVar19 = FUN_004553f0(param_3);
            uVar17 = extraout_ECX_54;
            param_2 = extraout_EDX_x00127;
          }
          if ((*(byte *)(puVar2 + 3) & 4) == 0) {
            iVar8 = *(int *)(puVar2 + 8);
          }
          else {
            iVar8 = FUN_004553f0(param_3);
            uVar17 = extraout_ECX_55;
            param_2 = extraout_EDX_x00128;
          }
          piVar12 = (int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            piVar12 = FUN_00455580(uVar17,param_3);
            param_2 = extraout_EDX_x00129;
          }
          *piVar12 = iVar8 * iVar19;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x17:
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            uVar17 = extraout_ECX_56;
            param_2 = extraout_EDX_x00130;
          }
          fVar27 = (float10)*(float *)(puVar2 + 8);
          if ((*(byte *)(puVar2 + 3) & 4) != 0) {
            fVar27 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 8));
            uVar17 = extraout_ECX_57;
            param_2 = extraout_EDX_x00131;
          }
          pfVar14 = (float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            pfVar14 = (float *)FUN_004554d0(uVar17,param_2);
            param_2 = extraout_EDX_x00132;
          }
          *pfVar14 = (float)fVar27 * (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x18:
          if ((*(byte *)(puVar2 + 3) & 2) == 0) {
            iVar19 = *(int *)(puVar2 + 6);
            local_dc = (short *)iVar19;
          }
          else {
            local_dc = (short *)FUN_004553f0(param_3);
            iVar19 = extraout_ECX_58;
          }
          if ((*(byte *)(puVar2 + 3) & 4) == 0) {
            iVar8 = *(int *)(puVar2 + 8);
          }
          else {
            iVar8 = FUN_004553f0(param_3);
            iVar19 = extraout_ECX_59;
          }
          piVar12 = (int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            piVar12 = FUN_00455580(iVar19,param_3);
          }
          param_2 = (short *)((int)local_dc % iVar8);
          *piVar12 = (int)local_dc / iVar8;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x19:
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            uVar17 = extraout_ECX_60;
            param_2 = extraout_EDX_x00133;
          }
          fVar27 = (float10)*(float *)(puVar2 + 8);
          if ((*(byte *)(puVar2 + 3) & 4) != 0) {
            fVar27 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 8));
            uVar17 = extraout_ECX_61;
            param_2 = extraout_EDX_x00134;
          }
          pfVar14 = (float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            pfVar14 = (float *)FUN_004554d0(uVar17,param_2);
            param_2 = extraout_EDX_x00135;
          }
          *pfVar14 = (float)fVar25 / (float)fVar27;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x1a:
          if ((*(byte *)(puVar2 + 3) & 2) == 0) {
            local_dc = *(short **)(puVar2 + 6);
          }
          else {
            local_dc = (short *)FUN_004553f0(param_3);
            uVar17 = extraout_ECX_62;
          }
          if ((*(byte *)(puVar2 + 3) & 4) == 0) {
            iVar19 = *(int *)(puVar2 + 8);
          }
          else {
            iVar19 = FUN_004553f0(param_3);
            uVar17 = extraout_ECX_63;
          }
          pfVar14 = (float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            pfVar14 = (float *)FUN_00455580(uVar17,param_3);
          }
          param_2 = (short *)((int)local_dc % iVar19);
          *pfVar14 = (float)param_2;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x1b:
          if ((*(byte *)(puVar2 + 3) & 4) != 0) {
            FUN_004551b0(uVar17,param_2,*(undefined4 *)(puVar2 + 8));
            uVar17 = extraout_ECX_64;
            param_2 = extraout_EDX_x00136;
          }
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            FUN_004551b0(uVar17,param_2,*(undefined4 *)(puVar2 + 6));
            uVar17 = extraout_ECX_65;
          }
          fVar25 = (float10)FUN_004933ca(uVar17);
          local_dc = (short *)(float)fVar25;
          uVar9 = extraout_ECX_66;
          param_2 = extraout_EDX_x00137;
          goto LAB_00457b57;
        case 0x1c:
          if ((*(byte *)(puVar2 + 3) & 1) == 0) {
            iVar19 = *(int *)(puVar2 + 4);
          }
          else {
            iVar19 = FUN_004553f0(param_3);
            param_2 = extraout_EDX_03;
          }
          iVar8 = *(int *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            iVar8 = FUN_004553f0(param_3);
            param_2 = extraout_EDX_04;
          }
          if (iVar19 != iVar8) break;
          goto LAB_00455b09;
        case 0x1d:
          fVar25 = (float10)*(float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 4));
            uVar17 = extraout_ECX_01;
            param_2 = extraout_EDX_05;
          }
          fVar27 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar27 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            param_2 = extraout_EDX_06;
          }
          bVar24 = (NAN((float)fVar27) || NAN((float)fVar25)) == ((float)fVar27 == (float)fVar25);
          goto LAB_00455b03;
        case 0x1e:
          if ((*(byte *)(puVar2 + 3) & 1) == 0) {
            iVar19 = *(int *)(puVar2 + 4);
          }
          else {
            iVar19 = FUN_004553f0(param_3);
            param_2 = extraout_EDX_07;
          }
          iVar8 = *(int *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            iVar8 = FUN_004553f0(param_3);
            param_2 = extraout_EDX_08;
          }
          if (iVar19 != iVar8) goto LAB_00455b09;
          break;
        case 0x1f:
          fVar25 = (float10)*(float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 4));
            uVar17 = extraout_ECX_02;
            param_2 = extraout_EDX_09;
          }
          fVar27 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar27 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            param_2 = extraout_EDX_10;
          }
          if ((NAN((float)fVar27) || NAN((float)fVar25)) == ((float)fVar27 == (float)fVar25))
          goto LAB_00455b09;
          break;
        case 0x20:
          if ((*(byte *)(puVar2 + 3) & 1) == 0) {
            iVar19 = *(int *)(puVar2 + 4);
          }
          else {
            iVar19 = FUN_004553f0(param_3);
            param_2 = extraout_EDX_11;
          }
          iVar8 = *(int *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            iVar8 = FUN_004553f0(param_3);
            param_2 = extraout_EDX_12;
          }
          if (iVar19 < iVar8) goto LAB_00455b09;
          break;
        case 0x21:
          fVar25 = (float10)*(float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 4));
            uVar17 = extraout_ECX_03;
            param_2 = extraout_EDX_13;
          }
          fVar27 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar27 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            param_2 = extraout_EDX_14;
          }
          if ((float)fVar25 < (float)fVar27) goto LAB_00455b09;
          break;
        case 0x22:
          if ((*(byte *)(puVar2 + 3) & 1) == 0) {
            iVar19 = *(int *)(puVar2 + 4);
          }
          else {
            iVar19 = FUN_004553f0(param_3);
            param_2 = extraout_EDX_15;
          }
          iVar8 = *(int *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            iVar8 = FUN_004553f0(param_3);
            param_2 = extraout_EDX_16;
          }
          if (iVar19 <= iVar8) goto LAB_00455b09;
          break;
        case 0x23:
          fVar25 = (float10)*(float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 4));
            uVar17 = extraout_ECX_04;
            param_2 = extraout_EDX_17;
          }
          fVar27 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar27 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            param_2 = extraout_EDX_18;
          }
          if ((float)fVar25 <= (float)fVar27) goto LAB_00455b09;
          break;
        case 0x24:
          if ((*(byte *)(puVar2 + 3) & 1) == 0) {
            iVar19 = *(int *)(puVar2 + 4);
          }
          else {
            iVar19 = FUN_004553f0(param_3);
            param_2 = extraout_EDX_19;
          }
          iVar8 = *(int *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            iVar8 = FUN_004553f0(param_3);
            param_2 = extraout_EDX_20;
          }
          if (iVar8 < iVar19) goto LAB_00455b09;
          break;
        case 0x25:
          fVar25 = (float10)*(float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 4));
            uVar17 = extraout_ECX_05;
            param_2 = extraout_EDX_21;
          }
          fVar27 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar27 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            param_2 = extraout_EDX_22;
          }
          bVar24 = (float)fVar27 < (float)fVar25 == (NAN((float)fVar27) || NAN((float)fVar25));
          goto LAB_00455b03;
        case 0x26:
          if ((*(byte *)(puVar2 + 3) & 1) == 0) {
            iVar19 = *(int *)(puVar2 + 4);
          }
          else {
            iVar19 = FUN_004553f0(param_3);
            param_2 = extraout_EDX_23;
          }
          iVar8 = *(int *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            iVar8 = FUN_004553f0(param_3);
            param_2 = extraout_EDX_24;
          }
          if (iVar8 <= iVar19) goto LAB_00455b09;
          break;
        case 0x27:
          fVar25 = (float10)*(float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 4));
            uVar17 = extraout_ECX_06;
            param_2 = extraout_EDX_25;
          }
          fVar27 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar27 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            param_2 = extraout_EDX_26;
          }
          bVar24 = (float)fVar27 < (float)fVar25 == ((float)fVar27 == (float)fVar25);
LAB_00455b03:
          if (!bVar24) {
LAB_00455b09:
            FUN_004067e0(*(int *)(puVar2 + 10));
            param_2 = (short *)(*(int *)(param_3 + 0x3ec) + *(int *)(puVar2 + 8));
            *(short **)(param_3 + 0x3f0) = param_2;
            uVar17 = extraout_ECX_07;
            goto LAB_00455686;
          }
          break;
        case 0x28:
          if ((*(byte *)(param_3 + 0x480) & 1) == 0) {
            if ((*(byte *)(puVar2 + 3) & 2) == 0) {
              uVar15 = *(uint *)(puVar2 + 6);
            }
            else {
              uVar15 = FUN_004553f0(param_3);
              uVar17 = extraout_ECX_81;
              param_2 = extraout_EDX_x00155;
            }
            if (uVar15 == 0) goto LAB_00457957;
            uVar17 = FUN_00464440();
            param_2 = (short *)(uVar17 % uVar15);
            uVar17 = extraout_ECX_82;
            psVar21 = param_2;
          }
          else {
            if ((*(byte *)(puVar2 + 3) & 2) == 0) {
              uVar15 = *(uint *)(puVar2 + 6);
            }
            else {
              uVar15 = FUN_004553f0(param_3);
              uVar17 = extraout_ECX_79;
              param_2 = extraout_EDX_x00154;
            }
            if (uVar15 == 0) {
LAB_00457957:
              psVar21 = (short *)0x0;
            }
            else {
              uVar17 = FUN_00464440();
              param_2 = (short *)(uVar17 % uVar15);
              uVar17 = extraout_ECX_80;
              psVar21 = param_2;
            }
          }
          pfVar14 = (float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            pfVar14 = (float *)FUN_00455580(uVar17,param_3);
            param_2 = extraout_EDX_x00156;
          }
LAB_00457969:
          *pfVar14 = (float)psVar21;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x29:
          fVar22 = *(float *)(puVar2 + 6);
          fVar25 = (float10)fVar22;
          if ((*(byte *)(param_3 + 0x480) & 1) == 0) {
            if ((*(byte *)(puVar2 + 3) & 2) != 0) {
              fVar25 = FUN_004551b0(uVar17,param_2,fVar22);
            }
          }
          else if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,fVar22);
          }
          fVar25 = FUN_0040d660((float)fVar25);
          pfVar14 = (float *)(puVar2 + 4);
          param_2 = extraout_EDX_x00157;
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            pfVar14 = (float *)FUN_004554d0(puVar2,extraout_EDX_x00157);
            param_2 = extraout_EDX_x00158;
          }
          *pfVar14 = (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x2a:
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            uVar17 = extraout_ECX_83;
            param_2 = extraout_EDX_x00159;
          }
          pfVar14 = (float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            pfVar14 = (float *)FUN_004554d0(uVar17,param_2);
            uVar17 = extraout_ECX_84;
            param_2 = extraout_EDX_x00160;
          }
          fVar25 = FUN_00406680(uVar17,(char)param_2,(float)fVar25);
          *pfVar14 = (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_x00161;
          goto LAB_00455686;
        case 0x2b:
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            uVar17 = extraout_ECX_85;
            param_2 = extraout_EDX_x00162;
          }
          pfVar14 = (float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            pfVar14 = (float *)FUN_004554d0(uVar17,param_2);
            uVar17 = extraout_ECX_86;
            param_2 = extraout_EDX_x00163;
          }
          fVar25 = FUN_00406170(uVar17,(char)param_2,(float)fVar25);
          *pfVar14 = (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_x00164;
          goto LAB_00455686;
        case 0x2c:
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            uVar17 = extraout_ECX_87;
            param_2 = extraout_EDX_x00165;
          }
          pfVar14 = (float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            pfVar14 = (float *)FUN_004554d0(uVar17,param_2);
            uVar17 = extraout_ECX_88;
            param_2 = extraout_EDX_x00166;
          }
          fVar25 = FUN_004317d0(uVar17,(char)param_2,(float)fVar25);
          *pfVar14 = (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_x00167;
          goto LAB_00455686;
        case 0x2d:
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            FUN_004551b0(uVar17,param_2,*(undefined4 *)(puVar2 + 6));
          }
          fVar25 = (float10)FUN_00493440();
          local_dc = (short *)(float)fVar25;
          uVar9 = extraout_ECX_89;
          param_2 = extraout_EDX_x00168;
          goto LAB_00457b57;
        case 0x2e:
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            FUN_004551b0(uVar17,param_2,*(undefined4 *)(puVar2 + 6));
          }
          fVar25 = (float10)FUN_00493590();
          local_dc = (short *)(float)fVar25;
          uVar9 = extraout_ECX_90;
          param_2 = extraout_EDX_x00169;
LAB_00457b57:
          pfVar14 = (float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
LAB_00457b66:
            pfVar14 = (float *)FUN_004554d0(uVar9,param_2);
            param_2 = extraout_EDX_x00170;
          }
          *pfVar14 = (float)local_dc;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x2f:
          fVar25 = (float10)*(float *)(puVar2 + 4);
          pfVar14 = (float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 4));
            uVar17 = extraout_ECX_91;
            param_2 = extraout_EDX_x00171;
          }
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            pfVar14 = (float *)FUN_004554d0(uVar17,param_2);
          }
          fVar25 = FUN_00464640((float)fVar25,0.0);
          *pfVar14 = (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_x00172;
          goto LAB_00455686;
        case 0x30:
          fVar22 = *(float *)(puVar2 + 8);
          fVar25 = (float10)fVar22;
          if ((*(uint *)(param_3 + 0x47c) & 0x200) == 0) {
            psVar21 = param_2;
            if ((*(byte *)(puVar2 + 3) & 4) != 0) {
              fVar25 = FUN_004551b0(uVar17,param_2,fVar22);
              uVar17 = extraout_ECX_21;
              psVar21 = extraout_EDX_60;
            }
            fVar27 = (float10)*(float *)(puVar2 + 6);
            if ((*(byte *)(puVar2 + 3) & 2) != 0) {
              fVar27 = FUN_004551b0(uVar17,psVar21,*(float *)(puVar2 + 6));
              uVar17 = extraout_ECX_22;
              psVar21 = extraout_EDX_61;
            }
            param_2 = (short *)(float)fVar27;
            fVar27 = (float10)*(float *)(puVar2 + 4);
            if ((*(byte *)(puVar2 + 3) & 1) != 0) {
              fVar27 = FUN_004551b0(uVar17,psVar21,*(float *)(puVar2 + 4));
            }
            local_78 = (float)fVar27;
            *(float *)(param_3 + 0x424) = local_78;
            *(short **)(param_3 + 0x428) = param_2;
            *(float *)(param_3 + 0x42c) = (float)fVar25;
            uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
            *(uint *)(param_3 + 0x3f0) = uVar17;
            local_74 = param_2;
            local_70 = (float)fVar25;
          }
          else {
            psVar21 = param_2;
            if ((*(byte *)(puVar2 + 3) & 4) != 0) {
              fVar25 = FUN_004551b0(uVar17,param_2,fVar22);
              uVar17 = extraout_ECX_23;
              psVar21 = extraout_EDX_62;
            }
            fVar27 = (float10)*(float *)(puVar2 + 6);
            if ((*(byte *)(puVar2 + 3) & 2) != 0) {
              fVar27 = FUN_004551b0(uVar17,psVar21,*(float *)(puVar2 + 6));
              uVar17 = extraout_ECX_24;
              psVar21 = extraout_EDX_63;
            }
            param_2 = (short *)(float)fVar27;
            fVar27 = (float10)*(float *)(puVar2 + 4);
            if ((*(byte *)(puVar2 + 3) & 1) != 0) {
              fVar27 = FUN_004551b0(uVar17,psVar21,*(float *)(puVar2 + 4));
            }
            local_60 = (float)fVar27;
            *(float *)(param_3 + 0x43c) = local_60;
            *(short **)(param_3 + 0x440) = param_2;
            *(float *)(param_3 + 0x444) = (float)fVar25;
            uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
            *(uint *)(param_3 + 0x3f0) = uVar17;
            local_5c = param_2;
            local_58 = (float)fVar25;
          }
          goto LAB_00455686;
        case 0x31:
          fVar25 = (float10)*(float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 4));
            uVar17 = extraout_ECX_16;
            param_2 = extraout_EDX_51;
          }
          *(float *)(param_3 + 0x24) = (float)fVar25;
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            uVar17 = extraout_ECX_17;
            param_2 = extraout_EDX_52;
          }
          *(float *)(param_3 + 0x28) = (float)fVar25;
          fVar25 = (float10)*(float *)(puVar2 + 8);
          if ((*(byte *)(puVar2 + 3) & 4) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 8));
            param_2 = extraout_EDX_53;
          }
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) | 4;
          *(float *)(param_3 + 0x2c) = (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x32:
          fVar25 = (float10)*(float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 4));
            uVar17 = extraout_ECX_14;
            param_2 = extraout_EDX_39;
          }
          *(float *)(param_3 + 0x40) = (float)fVar25;
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            param_2 = extraout_EDX_40;
          }
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) | 8;
          *(float *)(param_3 + 0x44) = (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x33:
          uVar4 = (undefined)*(undefined4 *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
            uVar4 = (undefined)iVar19;
            param_2 = extraout_EDX_43;
          }
          *(undefined *)(param_3 + 0x3bf) = uVar4;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x34:
          uVar4 = (undefined)*(undefined4 *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
            uVar4 = (undefined)iVar19;
            param_2 = extraout_EDX_44;
          }
          *(undefined *)(param_3 + 0x3be) = uVar4;
          uVar4 = (undefined)*(undefined4 *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            iVar19 = FUN_004553f0(param_3);
            uVar4 = (undefined)iVar19;
            param_2 = extraout_EDX_45;
          }
          *(undefined *)(param_3 + 0x3bd) = uVar4;
          uVar4 = (undefined)*(undefined4 *)(puVar2 + 8);
          if ((*(byte *)(puVar2 + 3) & 4) != 0) {
            iVar19 = FUN_004553f0(param_3);
            uVar4 = (undefined)iVar19;
            param_2 = extraout_EDX_46;
          }
          *(undefined *)(param_3 + 0x3bc) = uVar4;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x35:
          fVar25 = (float10)*(float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 4));
            uVar17 = extraout_ECX_18;
            param_2 = extraout_EDX_54;
          }
          *(float *)(param_3 + 0x30) = (float)fVar25;
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            uVar17 = extraout_ECX_19;
            param_2 = extraout_EDX_55;
          }
          *(float *)(param_3 + 0x34) = (float)fVar25;
          fVar25 = (float10)*(float *)(puVar2 + 8);
          if ((*(byte *)(puVar2 + 3) & 4) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 8));
            param_2 = extraout_EDX_56;
          }
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) | 4;
          *(float *)(param_3 + 0x38) = (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x36:
          fVar25 = (float10)*(float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 4));
            uVar17 = extraout_ECX_20;
            param_2 = extraout_EDX_57;
          }
          *(float *)(param_3 + 0x48) = (float)fVar25;
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            param_2 = extraout_EDX_58;
          }
          *(float *)(param_3 + 0x4c) = (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x37:
          pvVar11 = *(void **)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            pvVar11 = (void *)FUN_004553f0(param_3);
          }
          FUN_004599b0(pvVar11,0,*(byte *)(param_3 + 0x3bf),*(byte *)(puVar2 + 4));
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_59;
          goto LAB_00455686;
        case 0x38:
          iVar19 = *(int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
          }
          *(int *)(param_3 + 0xe0) = iVar19;
          *(undefined4 *)(param_3 + 0xb4) = DAT_004ce8d0;
          *(undefined4 *)(param_3 + 0xb8) = DAT_004ce8d4;
          *(undefined4 *)(param_3 + 0xbc) = DAT_004ce8d8;
          *(undefined4 *)(param_3 + 0xc0) = DAT_004ce8d0;
          *(undefined4 *)(param_3 + 0xc4) = DAT_004ce8d4;
          *(undefined4 *)(param_3 + 200) = DAT_004ce8d8;
          *(undefined4 *)(param_3 + 0xe4) = *(undefined4 *)(puVar2 + 6);
          if ((*(uint *)(param_3 + 0x47c) & 0x200) == 0) {
            uVar9 = *(undefined4 *)(param_3 + 0x424);
            uVar10 = *(undefined4 *)(param_3 + 0x428);
            uVar18 = *(undefined4 *)(param_3 + 0x42c);
          }
          else {
            uVar9 = *(undefined4 *)(param_3 + 0x43c);
            uVar10 = *(undefined4 *)(param_3 + 0x440);
            uVar18 = *(undefined4 *)(param_3 + 0x444);
          }
          *(undefined4 *)(param_3 + 0x9c) = uVar9;
          *(undefined4 *)(param_3 + 0xa0) = uVar10;
          *(undefined4 *)(param_3 + 0xa4) = uVar18;
          fVar25 = (float10)*(float *)(puVar2 + 0xc);
          if ((*(byte *)(puVar2 + 3) & 0x10) != 0) {
            fVar25 = FUN_004551b0(uVar10,uVar18,*(float *)(puVar2 + 0xc));
            uVar10 = extraout_ECX_28;
            uVar18 = extraout_EDX_70;
          }
          fVar27 = (float10)*(float *)(puVar2 + 10);
          if ((*(byte *)(puVar2 + 3) & 8) != 0) {
            fVar27 = FUN_004551b0(uVar10,uVar18,*(float *)(puVar2 + 10));
            uVar10 = extraout_ECX_29;
            uVar18 = extraout_EDX_71;
          }
          fVar26 = (float10)*(float *)(puVar2 + 8);
          if ((*(byte *)(puVar2 + 3) & 4) != 0) {
            fVar26 = FUN_004551b0(uVar10,uVar18,*(float *)(puVar2 + 8));
          }
          local_6c = (float)fVar26;
          *(float *)(param_3 + 0xa8) = local_6c;
          *(float *)(param_3 + 0xac) = (float)fVar27;
          *(float *)(param_3 + 0xb0) = (float)fVar25;
          local_68 = (float)fVar27;
          local_64 = (float)fVar25;
          FUN_00406340();
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_72;
          goto LAB_00455686;
        case 0x39:
          local_9c = *(byte *)(param_3 + 0x3bc);
          local_9b = *(undefined *)(param_3 + 0x3bd);
          local_9a = *(undefined *)(param_3 + 0x3be);
          if ((*(byte *)(puVar2 + 3) & 0x10) == 0) {
  local_dc__u_alias = (local_dc__u *)&local_dc;
            local_dc__u_alias->_0_1_ = (byte)*(undefined4 *)(puVar2 + 0xc);
          }
          else {
            iVar19 = FUN_004553f0(param_3);
  local_dc__u_alias = (local_dc__u *)&local_dc;
            local_dc__u_alias->_0_1_ = (byte)iVar19;
          }
          if ((*(byte *)(puVar2 + 3) & 8) == 0) {
            uVar4 = (undefined)*(undefined4 *)(puVar2 + 10);
          }
          else {
            iVar19 = FUN_004553f0(param_3);
            uVar4 = (undefined)iVar19;
          }
          uVar5 = (undefined)*(undefined4 *)(puVar2 + 8);
          if ((*(byte *)(puVar2 + 3) & 4) != 0) {
            iVar19 = FUN_004553f0(param_3);
            uVar5 = (undefined)iVar19;
          }
          iVar19 = *(int *)(puVar2 + 4);
          local_98 = (byte)local_dc;
          local_97 = uVar4;
          local_96 = uVar5;
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
          }
          FUN_00459830(&local_98,&local_9c,iVar19,*(byte *)(puVar2 + 6));
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_81;
          goto LAB_00455686;
        case 0x3a:
          if ((*(byte *)(puVar2 + 3) & 4) == 0) {
            bVar6 = (byte)*(undefined4 *)(puVar2 + 8);
          }
          else {
            iVar19 = FUN_004553f0(param_3);
            bVar6 = (byte)iVar19;
          }
          pvVar11 = *(void **)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            pvVar11 = (void *)FUN_004553f0(param_3);
          }
          FUN_004599b0(pvVar11,*(byte *)(puVar2 + 6),*(byte *)(param_3 + 0x3bf),bVar6);
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_82;
          goto LAB_00455686;
        case 0x3b:
          fVar25 = (float10)*(float *)(puVar2 + 0xc);
          if ((*(byte *)(puVar2 + 3) & 0x10) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 0xc));
            uVar17 = extraout_ECX_36;
            param_2 = extraout_EDX_87;
          }
          fVar27 = (float10)*(float *)(puVar2 + 10);
          if ((*(byte *)(puVar2 + 3) & 8) != 0) {
            fVar27 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 10));
            uVar17 = extraout_ECX_37;
            param_2 = extraout_EDX_88;
          }
          fVar26 = (float10)*(float *)(puVar2 + 8);
          if ((*(byte *)(puVar2 + 3) & 4) != 0) {
            fVar26 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 8));
          }
          local_c8 = (float)fVar26;
          iVar19 = *(int *)(puVar2 + 4);
          local_c4 = (float)fVar27;
          local_c0 = (float)fVar25;
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
          }
          *(int *)(param_3 + 0x1a4) = iVar19;
          *(undefined4 *)(param_3 + 0x178) = DAT_004ce8d0;
          *(undefined4 *)(param_3 + 0x17c) = DAT_004ce8d4;
          *(undefined4 *)(param_3 + 0x180) = DAT_004ce8d8;
          *(undefined4 *)(param_3 + 0x184) = DAT_004ce8d0;
          *(undefined4 *)(param_3 + 0x188) = DAT_004ce8d4;
          *(undefined4 *)(param_3 + 0x18c) = DAT_004ce8d8;
          *(undefined4 *)(param_3 + 0x1a8) = *(undefined4 *)(puVar2 + 6);
          *(undefined4 *)(param_3 + 0x160) = *(undefined4 *)(param_3 + 0x24);
          *(undefined4 *)(param_3 + 0x164) = *(undefined4 *)(param_3 + 0x28);
          *(float *)(param_3 + 0x16c) = local_c8;
          *(undefined4 *)(param_3 + 0x168) = *(undefined4 *)(param_3 + 0x2c);
          *(float *)(param_3 + 0x170) = local_c4;
          *(float *)(param_3 + 0x174) = local_c0;
          FUN_00406340();
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) | 4;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_89;
          goto LAB_00455686;
        case 0x3c:
          fVar25 = (float10)*(float *)(puVar2 + 10);
          if ((*(byte *)(puVar2 + 3) & 8) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 10));
            uVar17 = extraout_ECX_38;
            param_2 = extraout_EDX_90;
          }
          fVar27 = (float10)*(float *)(puVar2 + 8);
          if ((*(byte *)(puVar2 + 3) & 4) != 0) {
            fVar27 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 8));
          }
          local_54 = (float)fVar27;
          iVar19 = *(int *)(puVar2 + 4);
          local_50 = (float)fVar25;
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
          }
          FUN_00425790(&local_54,(undefined4 *)(param_3 + 0x40),iVar19,*(byte *)(puVar2 + 6));
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) | 8;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_91;
          goto LAB_00455686;
        case 0x3d:
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) ^ 0x400 | 8;
          *(float *)(param_3 + 0x40) = *(float *)(param_3 + 0x40) * -1.0;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x3e:
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) ^ 0x800 | 8;
          *(float *)(param_3 + 0x44) = *(float *)(param_3 + 0x44) * -1.0;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x3f:
          goto switchD_004556aa_caseD_3f;
        case 0x41:
          param_2 = (short *)(((uint)(ushort)puVar2[4] << 0x13 ^ *(uint *)(param_3 + 0x47c)) &
                             0x180000);
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) ^ (uint)param_2;
          *(uint *)(param_3 + 0x47c) =
               ((uint)(ushort)puVar2[5] << 0x15 ^ *(uint *)(param_3 + 0x47c)) & 0x600000 ^
               *(uint *)(param_3 + 0x47c);
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x42:
          *(uint *)(param_3 + 0x47c) =
               *(uint *)(param_3 + 0x47c) ^
               (*(int *)(puVar2 + 4) << 5 ^ *(uint *)(param_3 + 0x47c)) & 0xe0;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x43:
          *(uint *)(param_3 + 0x47c) =
               *(uint *)(param_3 + 0x47c) ^
               (*(int *)(puVar2 + 4) << 0x17 ^ *(uint *)(param_3 + 0x47c)) & 0xf800000;
          if ((*(uint *)(param_3 + 0x47c) & 0xf800000) == 0x5000000) {
            FUN_0045d9a0();
            uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
            *(uint *)(param_3 + 0x3f0) = uVar17;
            param_2 = extraout_EDX_96;
            goto LAB_00455686;
          }
          break;
        case 0x44:
          *(uint *)(param_3 + 0x20) = (uint)*(byte *)(puVar2 + 4);
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x45:
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) & 0xfffffffe;
switchD_004556aa_caseD_3f:
          uVar16 = *(ushort *)(param_3 + 0x3c4);
          uVar17 = (uint)uVar16;
          if (uVar16 == 0) {
            *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) | 0x2000;
          }
          else {
LAB_00455730:
            param_2 = (short *)0x0;
            for (psVar21 = *(short **)(param_3 + 0x3ec);
                ((sVar1 = *psVar21, sVar1 != 0x40 || ((int)(short)uVar16 != *(int *)(psVar21 + 4)))
                && (sVar1 != -1)); psVar21 = (short *)((int)psVar21 + (uint)(ushort)psVar21[1])) {
              if ((sVar1 == 0x40) && (*(int *)(psVar21 + 4) == -1)) {
                param_2 = psVar21;
              }
            }
            *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) & 0xffffdfff;
            uVar17 = 0;
            *(undefined2 *)(param_3 + 0x3c4) = 0;
            if ((*psVar21 == 0x40) || (psVar21 = param_2, param_2 != (short *)0x0)) {
              *(undefined4 *)(param_3 + 0x3c8) = *(undefined4 *)(param_3 + 0x68);
              *(undefined4 *)(param_3 + 0x3cc) = *(undefined4 *)(param_3 + 0x6c);
              *(undefined4 *)(param_3 + 0x3d0) = *(undefined4 *)(param_3 + 0x70);
              *(undefined4 *)(param_3 + 0x3d4) = *(undefined4 *)(param_3 + 0x74);
              *(undefined4 *)(param_3 + 0x3d8) = *(undefined4 *)(param_3 + 0x78);
              *(undefined4 *)(param_3 + 0x3dc) = *(undefined4 *)(param_3 + 0x3f0);
              FUN_004067e0((int)psVar21[2]);
              uVar16 = psVar21[1];
              *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) | 1;
              *(uint *)(param_3 + 0x3f0) = (uint)uVar16 + (int)psVar21;
              uVar17 = extraout_ECX_00;
              param_2 = extraout_EDX_02;
              goto LAB_00455686;
            }
          }
          FUN_00464a20(uVar17,param_2,-1.0);
          uVar17 = extraout_ECX_26;
          param_2 = extraout_EDX_66;
          goto LAB_00456471;
        case 0x46:
          fVar25 = (float10)*(float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 4));
            param_2 = extraout_EDX_68;
          }
          *(float *)(param_3 + 0x2f4) = (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x47:
          fVar25 = (float10)*(float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 4));
            param_2 = extraout_EDX_69;
          }
          *(float *)(param_3 + 0x2f8) = (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x48:
          *(uint *)(param_3 + 0x47c) =
               *(uint *)(param_3 + 0x47c) ^ (*(uint *)(puVar2 + 4) ^ *(uint *)(param_3 + 0x47c)) & 1
          ;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x49:
          param_2 = (short *)((*(int *)(puVar2 + 4) << 0xc ^ *(uint *)(param_3 + 0x47c)) & 0x1000);
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) ^ (uint)param_2;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x4a:
          *(uint *)(param_3 + 0x47c) =
               *(uint *)(param_3 + 0x47c) ^
               (*(int *)(puVar2 + 4) << 0xe ^ *(uint *)(param_3 + 0x47c)) & 0x4000;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x4b:
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            FUN_004553f0(param_3);
            uVar17 = extraout_ECX_25;
            param_2 = extraout_EDX_64;
          }
          FUN_0043adb0(uVar17,param_2);
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_65;
          goto LAB_00455686;
        case 0x4c:
          uVar4 = (undefined)*(undefined4 *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
            uVar4 = (undefined)iVar19;
            param_2 = extraout_EDX_48;
          }
          *(undefined *)(param_3 + 0x3c2) = uVar4;
          uVar4 = (undefined)*(undefined4 *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            iVar19 = FUN_004553f0(param_3);
            uVar4 = (undefined)iVar19;
            param_2 = extraout_EDX_49;
          }
          *(undefined *)(param_3 + 0x3c1) = uVar4;
          uVar4 = (undefined)*(undefined4 *)(puVar2 + 8);
          if ((*(byte *)(puVar2 + 3) & 4) != 0) {
            iVar19 = FUN_004553f0(param_3);
            uVar4 = (undefined)iVar19;
            param_2 = extraout_EDX_50;
          }
          *(undefined *)(param_3 + 0x3c0) = uVar4;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x4d:
          uVar4 = (undefined)*(undefined4 *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
            uVar4 = (undefined)iVar19;
            param_2 = extraout_EDX_47;
          }
          *(undefined *)(param_3 + 0x3c3) = uVar4;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x4e:
          uVar4 = (undefined)*(undefined4 *)(puVar2 + 0xc);
  local_cc__u_alias = (local_cc__u *)&local_cc;
          local_cc = (float)CONCAT13(local_cc__u_alias->_3_1_,*(undefined3 *)(param_3 + 0x3c0));
          if ((*(byte *)(puVar2 + 3) & 0x10) != 0) {
            iVar19 = FUN_004553f0(param_3);
            uVar4 = (undefined)iVar19;
          }
          if ((*(byte *)(puVar2 + 3) & 8) == 0) {
            uVar5 = (undefined)*(undefined4 *)(puVar2 + 10);
          }
          else {
            iVar19 = FUN_004553f0(param_3);
            uVar5 = (undefined)iVar19;
          }
          uVar7 = (undefined)*(undefined4 *)(puVar2 + 8);
          if ((*(byte *)(puVar2 + 3) & 4) != 0) {
            iVar19 = FUN_004553f0(param_3);
            uVar7 = (undefined)iVar19;
          }
          iVar19 = *(int *)(puVar2 + 4);
  local_b0__u_alias = (local_b0__u *)&local_b0;
          local_b0 = (float)CONCAT22(CONCAT11(local_b0__u_alias->_3_1_,uVar7),CONCAT11(uVar5,uVar4));
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
          }
          FUN_00459640((byte *)&local_b0,(byte *)&local_cc,iVar19,*(byte *)(puVar2 + 6));
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_83;
          goto LAB_00455686;
        case 0x4f:
          if ((*(byte *)(puVar2 + 3) & 4) == 0) {
            bVar6 = (byte)*(undefined4 *)(puVar2 + 8);
          }
          else {
            iVar19 = FUN_004553f0(param_3);
            bVar6 = (byte)iVar19;
            param_2 = extraout_EDX_84;
          }
          iVar19 = *(int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
            param_2 = extraout_EDX_85;
          }
          FUN_004595c0(iVar19,CONCAT31((int3)((uint)param_2 >> 8),*(undefined *)(puVar2 + 6)),
                       *(byte *)(param_3 + 0x3c3),bVar6);
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_86;
          goto LAB_00455686;
        case 0x50:
          *(uint *)(param_3 + 0x47c) =
               *(uint *)(param_3 + 0x47c) ^
               ((uint)*(byte *)(puVar2 + 4) << 0x10 ^ *(uint *)(param_3 + 0x47c)) & 0x10000;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x51:
          *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(param_3 + 0x3c8);
          uVar17 = *(uint *)(param_3 + 0x3d4);
          *(undefined4 *)(param_3 + 0x6c) = *(undefined4 *)(param_3 + 0x3cc);
          param_2 = *(short **)(param_3 + 0x3d8);
          *(undefined4 *)(param_3 + 0x70) = *(undefined4 *)(param_3 + 0x3d0);
          *(uint *)(param_3 + 0x74) = uVar17;
          *(short **)(param_3 + 0x78) = param_2;
          *(undefined4 *)(param_3 + 0x3f0) = *(undefined4 *)(param_3 + 0x3dc);
          goto LAB_00455686;
        case 0x52:
          param_2 = (short *)(((uint)*(byte *)(puVar2 + 4) << 0x1d ^ *(uint *)(param_3 + 0x47c)) &
                             0x20000000);
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) ^ (uint)param_2;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x53:
          param_2 = *(short **)(param_3 + 0x430);
          uVar9 = *(undefined4 *)(param_3 + 0x438);
          uVar10 = *(undefined4 *)(param_3 + 0x434);
          *(undefined4 *)(param_3 + 0x430) = 0;
          *(short **)(param_3 + 0x424) = param_2;
          *(undefined4 *)(param_3 + 0x434) = 0;
          *(undefined4 *)(param_3 + 0x428) = uVar10;
          *(undefined4 *)(param_3 + 0x438) = 0;
          *(undefined4 *)(param_3 + 0x42c) = uVar9;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x54:
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) & 0xf4ffffff | 0x4800000;
          iVar19 = *(int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
          }
          pvVar11 = _malloc(iVar19 * 0x38);
          *(void **)(param_3 + 0x478) = pvVar11;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_97;
          goto LAB_00455686;
        case 0x55:
          param_2 = (short *)(((uint)*(byte *)(puVar2 + 4) << 0x1e ^ *(uint *)(param_3 + 0x47c)) &
                             0x40000000);
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) ^ (uint)param_2;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x56:
          iVar19 = *(int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
            param_2 = extraout_EDX_27;
          }
          *(uint *)(param_3 + 0x47c) = iVar19 << 0x1f | *(uint *)(param_3 + 0x47c) & 0x7fffffff;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x57:
          uVar17 = ((uint)*(byte *)(puVar2 + 4) ^ *(uint *)(param_3 + 0x480)) & 1;
          goto LAB_00457c8b;
        case 0x58:
          iVar19 = *(int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
          }
          FUN_00461720(local_c,iVar19,param_3);
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_28;
          goto LAB_00455686;
        case 0x59:
          *(uint *)(param_3 + 0x480) =
               *(uint *)(param_3 + 0x480) ^
               (*(int *)(puVar2 + 4) * 2 ^ *(uint *)(param_3 + 0x480)) & 2;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x5a:
          iVar19 = *(int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
          }
          FUN_00461720(&local_1c,iVar19,param_3);
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_32;
          goto LAB_00455686;
        case 0x5b:
          iVar19 = *(int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
          }
          FUN_00461720(&local_14,iVar19,param_3);
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_31;
          goto LAB_00455686;
        case 0x5c:
          iVar19 = *(int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
          }
          FUN_00461720(&local_10,iVar19,param_3);
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_33;
          goto LAB_00455686;
        case 0x5d:
          fVar25 = (float10)*(float *)(puVar2 + 8);
          if ((*(byte *)(puVar2 + 3) & 4) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 8));
          }
          iVar19 = *(int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
          }
          *(int *)(param_3 + 0x2c0) = iVar19;
          *(undefined4 *)(param_3 + 0x2a4) = 0;
          *(undefined4 *)(param_3 + 0x2a8) = 0;
          uVar9 = *(undefined4 *)(puVar2 + 6);
          *(undefined4 *)(param_3 + 0x29c) = *(undefined4 *)(param_3 + 0x2f4);
          *(undefined4 *)(param_3 + 0x2c4) = uVar9;
          *(float *)(param_3 + 0x2a0) = (float)fVar25;
          FUN_004592b0();
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_94;
          goto LAB_00455686;
        case 0x5e:
          fVar25 = (float10)*(float *)(puVar2 + 8);
          if ((*(byte *)(puVar2 + 3) & 4) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 8));
          }
          iVar19 = *(int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
          }
          *(int *)(param_3 + 0x2ec) = iVar19;
          *(undefined4 *)(param_3 + 0x2d0) = 0;
          *(undefined4 *)(param_3 + 0x2d4) = 0;
          *(undefined4 *)(param_3 + 0x2f0) = *(undefined4 *)(puVar2 + 6);
          *(undefined4 *)(param_3 + 0x2c8) = *(undefined4 *)(param_3 + 0x2f8);
          *(float *)(param_3 + 0x2cc) = (float)fVar25;
          FUN_004592b0();
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_95;
          goto LAB_00455686;
        case 0x5f:
          iVar19 = *(int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
          }
          FUN_00461840(&local_18,iVar19);
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_36;
          goto LAB_00455686;
        case 0x60:
          iVar19 = *(int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
          }
          FUN_00461720(&local_ac,iVar19,param_3);
          uVar29 = FUN_00461c50(extraout_ECX_08);
          param_2 = (short *)((ulonglong)uVar29 >> 0x20);
          fVar25 = (float10)*(float *)(puVar2 + 6);
          uVar9 = extraout_ECX_09;
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(extraout_ECX_09,param_2,*(float *)(puVar2 + 6));
            uVar9 = extraout_ECX_10;
            param_2 = extraout_EDX_29;
          }
          *(float *)((int)uVar29 + 0x43c) = (float)fVar25;
          fVar25 = (float10)*(float *)(puVar2 + 8);
          if ((*(byte *)(puVar2 + 3) & 4) != 0) {
            fVar25 = FUN_004551b0(uVar9,param_2,*(float *)(puVar2 + 8));
            param_2 = extraout_EDX_30;
          }
          *(float *)((int)uVar29 + 0x440) = (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x61:
          iVar19 = *(int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
          }
          FUN_00461840(&local_d0,iVar19);
          uVar29 = FUN_00461c50(extraout_ECX_11);
          param_2 = (short *)((ulonglong)uVar29 >> 0x20);
          fVar25 = (float10)*(float *)(puVar2 + 6);
          uVar9 = extraout_ECX_12;
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(extraout_ECX_12,param_2,*(float *)(puVar2 + 6));
            uVar9 = extraout_ECX_13;
            param_2 = extraout_EDX_34;
          }
          *(float *)((int)uVar29 + 0x43c) = (float)fVar25;
          fVar25 = (float10)*(float *)(puVar2 + 8);
          if ((*(byte *)(puVar2 + 3) & 4) != 0) {
            fVar25 = FUN_004551b0(uVar9,param_2,*(float *)(puVar2 + 8));
            param_2 = extraout_EDX_35;
          }
          *(float *)((int)uVar29 + 0x440) = (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x62:
          FUN_0045cdf0(&local_4c);
          FUN_004555f0((float *)(param_3 + 0x7c));
          FUN_004555f0((float *)(param_3 + 0x84));
          FUN_004555f0((float *)(param_3 + 0x8c));
          FUN_004555f0((float *)(param_3 + 0x94));
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_99;
          goto LAB_00455686;
        case 99:
          iVar19 = *(int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
            param_2 = extraout_EDX_x00100;
          }
          uVar17 = (iVar19 << 4 ^ *(uint *)(param_3 + 0x480)) & 0x10;
LAB_00457c8b:
          *(uint *)(param_3 + 0x480) = *(uint *)(param_3 + 0x480) ^ uVar17;
          break;
        case 100:
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            uVar17 = extraout_ECX_30;
            param_2 = extraout_EDX_73;
          }
          local_94 = (float)fVar25;
          fVar25 = (float10)*(float *)(puVar2 + 8);
          if ((*(byte *)(puVar2 + 3) & 4) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 8));
            uVar17 = extraout_ECX_31;
            param_2 = extraout_EDX_74;
          }
          local_90 = (float)fVar25;
          fVar25 = (float10)*(float *)(puVar2 + 10);
          if ((*(byte *)(puVar2 + 3) & 8) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 10));
            uVar17 = extraout_ECX_32;
            param_2 = extraout_EDX_75;
          }
          local_8c = (float)fVar25;
          fVar25 = (float10)*(float *)(puVar2 + 0x12);
          if ((*(byte *)(puVar2 + 3) & 0x80) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 0x12));
            uVar17 = extraout_ECX_33;
            param_2 = extraout_EDX_76;
          }
          local_88 = (float)fVar25;
          fVar25 = (float10)*(float *)(puVar2 + 0x14);
          if ((puVar2[3] & 0x100) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 0x14));
            param_2 = extraout_EDX_77;
          }
          local_84 = (float)fVar25;
          fVar25 = (float10)*(float *)(puVar2 + 0x16);
          if ((puVar2[3] & 0x200) != 0) {
            fVar25 = FUN_004551b0(0x200,param_2,*(float *)(puVar2 + 0x16));
          }
          local_80 = (float)fVar25;
          iVar19 = *(int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
          }
          *(int *)(param_3 + 0xe0) = iVar19;
          *(float *)(param_3 + 0xb4) = local_94;
          *(float *)(param_3 + 0xb8) = local_90;
          *(float *)(param_3 + 0xbc) = local_8c;
          *(float *)(param_3 + 0xc0) = local_88;
          *(float *)(param_3 + 0xc4) = local_84;
          *(undefined4 *)(param_3 + 0xe4) = 8;
          *(float *)(param_3 + 200) = local_80;
          if ((*(uint *)(param_3 + 0x47c) & 0x200) == 0) {
            uVar9 = *(undefined4 *)(param_3 + 0x424);
            uVar10 = *(undefined4 *)(param_3 + 0x428);
            uVar18 = *(undefined4 *)(param_3 + 0x42c);
          }
          else {
            uVar9 = *(undefined4 *)(param_3 + 0x43c);
            uVar10 = *(undefined4 *)(param_3 + 0x440);
            uVar18 = *(undefined4 *)(param_3 + 0x444);
          }
          *(undefined4 *)(param_3 + 0x9c) = uVar9;
          *(undefined4 *)(param_3 + 0xa0) = uVar10;
          *(undefined4 *)(param_3 + 0xa4) = uVar18;
          fVar25 = (float10)*(float *)(puVar2 + 0x10);
          if ((*(byte *)(puVar2 + 3) & 0x40) != 0) {
            fVar25 = FUN_004551b0(uVar18,uVar9,*(float *)(puVar2 + 0x10));
            uVar18 = extraout_ECX_34;
            uVar9 = extraout_EDX_78;
          }
          fVar27 = (float10)*(float *)(puVar2 + 0xe);
          if ((*(byte *)(puVar2 + 3) & 0x20) != 0) {
            fVar27 = FUN_004551b0(uVar18,uVar9,*(float *)(puVar2 + 0xe));
            uVar18 = extraout_ECX_35;
            uVar9 = extraout_EDX_79;
          }
          fVar26 = (float10)*(float *)(puVar2 + 0xc);
          if ((*(byte *)(puVar2 + 3) & 0x10) != 0) {
            fVar26 = FUN_004551b0(uVar18,uVar9,*(float *)(puVar2 + 0xc));
          }
          local_a8 = (float)fVar26;
          *(float *)(param_3 + 0xa8) = local_a8;
          *(float *)(param_3 + 0xac) = (float)fVar27;
          *(float *)(param_3 + 0xb0) = (float)fVar25;
          local_a4 = (float)fVar27;
          local_a0 = (float)fVar25;
          FUN_00406340();
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_80;
          goto LAB_00455686;
        case 0x65:
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) & 0xf6ffffff | 0x6800000;
          iVar19 = *(int *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
          }
          pvVar11 = _malloc(iVar19 * 0x38);
          *(void **)(param_3 + 0x478) = pvVar11;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_98;
          goto LAB_00455686;
        case 0x66:
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) | 1;
          if (*(int *)(param_3 + 0x4ac) == 0) {
            if ((*(byte *)(puVar2 + 3) & 1) == 0) {
              local_d8 = *(int *)(puVar2 + 4);
            }
            else {
              local_d8 = FUN_004553f0(param_3);
            }
            if ((*(byte *)(puVar2 + 3) & 2) == 0) {
              uVar17 = *(uint *)(puVar2 + 6);
            }
            else {
              uVar17 = FUN_004553f0(param_3);
            }
            uVar15 = FUN_00464440();
            local_d8 = uVar15 % uVar17 + local_d8;
          }
          else {
            if ((*(byte *)(puVar2 + 3) & 1) != 0) {
              FUN_004553f0(param_3);
            }
            if ((*(byte *)(puVar2 + 3) & 2) != 0) {
              FUN_004553f0(param_3);
            }
            FUN_00464440();
            local_d8 = (**(code **)(param_3 + 0x4ac))();
          }
          if (local_d8 < 0) {
            iVar19 = *(int *)(DAT_004b43b8 + 0x18fb4);
            local_d8 = 0x108;
          }
          else {
            iVar19 = *(int *)(param_3 + 0x3f8);
          }
          FUN_00454b80(local_d8,iVar19);
          *(undefined4 *)(param_3 + 0x3e0) = *(undefined4 *)(param_3 + 0x6c);
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_38;
          goto LAB_00455686;
        case 0x67:
          param_2 = (short *)(*(uint *)(param_3 + 0x47c) & 0xf77fffff | 0x7000000);
          *(short **)(param_3 + 0x47c) = param_2;
          fVar25 = (float10)*(float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 4));
            uVar17 = extraout_ECX_40;
            param_2 = extraout_EDX_x00101;
          }
          *(float *)(param_3 + 0x58) = (float)fVar25;
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            param_2 = extraout_EDX_x00102;
          }
          *(float *)(param_3 + 0x5c) = (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x68:
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) & 0xf7ffffff | 0x7800000;
          fVar25 = (float10)*(float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 4));
            param_2 = extraout_EDX_x00109;
          }
          goto LAB_004571bf;
        case 0x69:
          uVar17 = *(uint *)(param_3 + 0x47c) & 0xf87fffff | 0x8000000;
          *(uint *)(param_3 + 0x47c) = uVar17;
          fVar25 = (float10)*(float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 4));
            param_2 = extraout_EDX_x00110;
          }
LAB_004571bf:
          local_dc = (short *)(float)fVar25;
          *(short **)(param_3 + 0x58) = local_dc;
          iVar19 = *(int *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            iVar19 = FUN_004553f0(param_3);
            param_2 = extraout_EDX_x00111;
          }
          *(int *)(param_3 + 0x3fc) = iVar19;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x6a:
          fVar25 = (float10)*(float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 4));
            uVar17 = extraout_ECX_15;
            param_2 = extraout_EDX_41;
          }
          *(float *)(param_3 + 0x50) = (float)fVar25;
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            param_2 = extraout_EDX_42;
          }
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) | 0x10;
          *(float *)(param_3 + 0x54) = (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x6b:
          fVar25 = (float10)*(float *)(puVar2 + 10);
          if ((*(byte *)(puVar2 + 3) & 8) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 10));
            uVar17 = extraout_ECX_39;
            param_2 = extraout_EDX_92;
          }
          fVar27 = (float10)*(float *)(puVar2 + 8);
          if ((*(byte *)(puVar2 + 3) & 4) != 0) {
            fVar27 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 8));
          }
          local_bc = (float)fVar27;
          iVar19 = *(int *)(puVar2 + 4);
          local_b8 = (float)fVar25;
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            iVar19 = FUN_004553f0(param_3);
          }
          FUN_00459530(&local_bc,(undefined4 *)(param_3 + 0x50),iVar19,*(byte *)(puVar2 + 6));
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) | 0x10;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          param_2 = extraout_EDX_93;
          goto LAB_00455686;
        case 0x6c:
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) & 0xf97fffff | 0x9000000;
          fVar25 = (float10)*(float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 4));
            uVar17 = extraout_ECX_41;
            param_2 = extraout_EDX_x00103;
          }
          *(float *)(param_3 + 0x58) = (float)fVar25;
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            param_2 = extraout_EDX_x00104;
          }
          *(float *)(param_3 + 0x5c) = (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x6d:
          uVar17 = *(uint *)(param_3 + 0x47c) & 0xf9ffffff | 0x9800000;
          *(uint *)(param_3 + 0x47c) = uVar17;
          fVar25 = (float10)*(float *)(puVar2 + 4);
          if ((*(byte *)(puVar2 + 3) & 1) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 4));
            uVar17 = extraout_ECX_42;
            param_2 = extraout_EDX_x00105;
          }
          *(float *)(param_3 + 0x58) = (float)fVar25;
          fVar25 = (float10)*(float *)(puVar2 + 6);
          if ((*(byte *)(puVar2 + 3) & 2) != 0) {
            fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
            param_2 = extraout_EDX_x00106;
          }
          *(float *)(param_3 + 0x5c) = (float)fVar25;
          uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
          *(uint *)(param_3 + 0x3f0) = uVar17;
          goto LAB_00455686;
        case 0x6e:
          goto switchD_004556aa_caseD_6e;
        case 0xffff:
        case 1:
          *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) & 0xfffffffe;
        case 2:
          *(undefined4 *)(param_3 + 0x3f0) = 0;
          DAT_004b2ed0 = local_7c;
          goto LAB_00455b44;
        }
        uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
        *(uint *)(param_3 + 0x3f0) = uVar17;
        goto LAB_00455686;
      }
LAB_00456471:
      if (NAN(*(float *)(param_3 + 0x30)) == (*(float *)(param_3 + 0x30) == 0.0)) {
        local_d0 = *(float *)(param_3 + 0x30) * DAT_004b2ed0;
        fVar25 = FUN_00464640(*(float *)(param_3 + 0x24),local_d0);
        *(float *)(param_3 + 0x24) = (float)fVar25;
        *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) | 4;
        uVar17 = extraout_ECX_27;
        param_2 = extraout_EDX_67;
      }
      if (NAN(*(float *)(param_3 + 0x34)) == (*(float *)(param_3 + 0x34) == 0.0)) {
        local_d0 = *(float *)(param_3 + 0x34) * DAT_004b2ed0;
        fVar25 = FUN_00464640(*(float *)(param_3 + 0x28),local_d0);
        *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) | 4;
        *(float *)(param_3 + 0x28) = (float)fVar25;
        uVar17 = extraout_ECX_92;
        param_2 = extraout_EDX_x00173;
      }
      if (NAN(*(float *)(param_3 + 0x38)) == (*(float *)(param_3 + 0x38) == 0.0)) {
        local_d0 = *(float *)(param_3 + 0x38) * DAT_004b2ed0;
        fVar25 = FUN_00464640(*(float *)(param_3 + 0x2c),local_d0);
        *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) | 4;
        *(float *)(param_3 + 0x2c) = (float)fVar25;
        uVar17 = extraout_ECX_93;
        param_2 = extraout_EDX_x00174;
      }
      if (NAN(*(float *)(param_3 + 0x4c)) == (*(float *)(param_3 + 0x4c) == 0.0)) {
        fVar22 = *(float *)(param_3 + 0x4c) * DAT_004b2ed0;
        *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) | 8;
        *(float *)(param_3 + 0x44) = fVar22 + *(float *)(param_3 + 0x44);
      }
      if (NAN(*(float *)(param_3 + 0x48)) == (*(float *)(param_3 + 0x48) == 0.0)) {
        fVar22 = *(float *)(param_3 + 0x48) * DAT_004b2ed0;
        *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) | 0xc;
        *(float *)(param_3 + 0x40) = fVar22 + *(float *)(param_3 + 0x40);
      }
      fVar22 = *(float *)(param_3 + 0x2f4) * DAT_004b2ed0 + *(float *)(param_3 + 0x60);
      *(float *)(param_3 + 0x60) = fVar22;
      if (1.0 < fVar22 == (fVar22 == 1.0)) {
        if (fVar22 < 0.0 != NAN(fVar22)) {
          *(float *)(param_3 + 0x60) = fVar22 + 1.0;
        }
      }
      else {
        *(float *)(param_3 + 0x60) = fVar22 - 1.0;
      }
      local_d0 = *(float *)(param_3 + 0x2f8) * DAT_004b2ed0 + *(float *)(param_3 + 100);
      *(float *)(param_3 + 100) = local_d0;
      if (local_d0 < 1.0) {
        if (local_d0 < 0.0 != NAN(local_d0)) {
          *(float *)(param_3 + 100) = local_d0 + 1.0;
        }
      }
      else {
        *(float *)(param_3 + 100) = local_d0 - 1.0;
      }
      if ((*(uint *)(param_3 + 0x47c) & 0x4000) != 0) {
        *(float *)(param_3 + 0x430) = *(float *)(param_3 + 0x430) + _DAT_004cee0c;
        *(float *)(param_3 + 0x434) = *(float *)(param_3 + 0x434) + _DAT_004cee10;
        *(float *)(param_3 + 0x438) = *(float *)(param_3 + 0x438) + _DAT_004cee14;
      }
      if ((*(byte *)(param_3 + 0x480) & 0x10) != 0) {
        FUN_0045cdf0(&local_4c);
        *(float *)(param_3 + 0x7c) = local_4c / 640.0;
        local_48 = local_48 / 480.0;
        *(float *)(param_3 + 0x80) = local_48;
        if (local_4c / 640.0 < 0.0) {
          *(undefined4 *)(param_3 + 0x7c) = 0;
        }
        if (local_48 < 0.0 != NAN(local_48)) {
          *(undefined4 *)(param_3 + 0x80) = 0;
        }
        local_40 = local_40 / 640.0;
        *(float *)(param_3 + 0x84) = local_40;
        local_3c = local_3c / 480.0;
        *(float *)(param_3 + 0x88) = local_3c;
        if (local_40 < 0.0 != NAN(local_40)) {
          *(undefined4 *)(param_3 + 0x84) = 0;
        }
        if (local_3c < 0.0 != NAN(local_3c)) {
          *(undefined4 *)(param_3 + 0x88) = 0;
        }
        local_34 = local_34 / 640.0;
        *(float *)(param_3 + 0x8c) = local_34;
        local_30 = local_30 / 480.0;
        *(float *)(param_3 + 0x90) = local_30;
        if (local_34 < 0.0 != NAN(local_34)) {
          *(undefined4 *)(param_3 + 0x8c) = 0;
        }
        if (local_30 < 0.0 != NAN(local_30)) {
          *(undefined4 *)(param_3 + 0x90) = 0;
        }
        local_28 = local_28 / 640.0;
        *(float *)(param_3 + 0x94) = local_28;
        local_d0 = local_24 / 480.0;
        *(float *)(param_3 + 0x98) = local_d0;
        if (local_28 < 0.0 != NAN(local_28)) {
          *(undefined4 *)(param_3 + 0x94) = 0;
        }
        uVar17 = extraout_ECX_94;
        param_2 = extraout_EDX_x00175;
        if (local_d0 < 0.0) {
          *(undefined4 *)(param_3 + 0x98) = 0;
        }
      }
      if (*(int *)(param_3 + 0xe0) != 0) {
        if ((*(uint *)(param_3 + 0x47c) & 0x200) == 0) {
          puVar13 = (undefined4 *)FUN_00405900();
          *(undefined4 *)(param_3 + 0x424) = *puVar13;
          param_2 = (short *)puVar13[1];
          *(short **)(param_3 + 0x428) = param_2;
          *(undefined4 *)(param_3 + 0x42c) = puVar13[2];
          uVar17 = param_3;
        }
        else {
          puVar13 = (undefined4 *)FUN_00405900();
          *(undefined4 *)(param_3 + 0x43c) = *puVar13;
          param_2 = (short *)puVar13[1];
          *(short **)(param_3 + 0x440) = param_2;
          *(undefined4 *)(param_3 + 0x444) = puVar13[2];
          uVar17 = param_3;
        }
      }
      if (*(int *)(param_3 + 300) != 0) {
        FUN_004589e0(uVar17,param_2);
  local_c0__u_alias = (local_c0__u *)&local_c0;
        uVar17 = CONCAT31((int3)((uint)extraout_ECX_95 >> 8),local_c0__u_alias->_0_1_);
  local_c4__u_alias = (local_c4__u *)&local_c4;
        param_2 = (short *)CONCAT31((int3)((uint)extraout_EDX_x00176 >> 8),local_c4__u_alias->_0_1_);
  local_c0__u_alias = (local_c0__u *)&local_c0;
        *(undefined *)(param_3 + 0x3be) = local_c0__u_alias->_0_1_;
  local_c4__u_alias = (local_c4__u *)&local_c4;
        *(undefined *)(param_3 + 0x3bd) = local_c4__u_alias->_0_1_;
        *(undefined *)(param_3 + 0x3bc) = local_c8._0_1_;
      }
      if (*(int *)(param_3 + 0x158) != 0) {
        uVar28 = FUN_00458cf0(uVar17,param_2);
        param_2 = (short *)(uVar28 >> 0x20);
        *(char *)(param_3 + 0x3bf) = (char)uVar28;
        uVar17 = param_3;
      }
      if (*(int *)(param_3 + 0x1e0) != 0) {
        pfVar14 = (float *)FUN_00458e40();
        param_2 = (short *)*pfVar14;
        *(short **)(param_3 + 0x40) = param_2;
        fVar22 = pfVar14[1];
        *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) | 8;
        *(float *)(param_3 + 0x44) = fVar22;
        uVar17 = param_3;
      }
      if (*(int *)(param_3 + 0x21c) != 0) {
        pfVar14 = (float *)FUN_00458e40();
        param_2 = (short *)*pfVar14;
        *(short **)(param_3 + 0x50) = param_2;
        fVar22 = pfVar14[1];
        *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) | 0x10;
        *(float *)(param_3 + 0x54) = fVar22;
        uVar17 = param_3;
      }
      if (*(int *)(param_3 + 0x1a4) != 0) {
        puVar13 = (undefined4 *)FUN_00405900();
        *(undefined4 *)(param_3 + 0x24) = *puVar13;
        param_2 = (short *)puVar13[1];
        *(short **)(param_3 + 0x28) = param_2;
        uVar9 = puVar13[2];
        *(uint *)(param_3 + 0x47c) = *(uint *)(param_3 + 0x47c) | 4;
        *(undefined4 *)(param_3 + 0x2c) = uVar9;
        uVar17 = param_3;
      }
      if (*(int *)(param_3 + 0x268) != 0) {
        FUN_004589e0(uVar17,param_2);
  local_c0__u_alias = (local_c0__u *)&local_c0;
        uVar17 = CONCAT31((int3)((uint)extraout_ECX_96 >> 8),local_c0__u_alias->_0_1_);
  local_c4__u_alias = (local_c4__u *)&local_c4;
        param_2 = (short *)CONCAT31((int3)((uint)extraout_EDX_x00177 >> 8),local_c4__u_alias->_0_1_);
  local_c0__u_alias = (local_c0__u *)&local_c0;
        *(undefined *)(param_3 + 0x3c2) = local_c0__u_alias->_0_1_;
  local_c4__u_alias = (local_c4__u *)&local_c4;
        *(undefined *)(param_3 + 0x3c1) = local_c4__u_alias->_0_1_;
        *(undefined *)(param_3 + 0x3c0) = local_c8._0_1_;
      }
      if (*(int *)(param_3 + 0x294) != 0) {
        uVar28 = FUN_00458cf0(uVar17,param_2);
        *(char *)(param_3 + 0x3c3) = (char)uVar28;
      }
      if (*(int *)(param_3 + 0x2c0) != 0) {
        fVar25 = FUN_00459100();
        *(float *)(param_3 + 0x2f4) = (float)fVar25;
      }
      if (*(int *)(param_3 + 0x2ec) != 0) {
        fVar25 = FUN_00459100();
        *(float *)(param_3 + 0x2f8) = (float)fVar25;
      }
      uVar17 = *(uint *)(param_3 + 0x47c);
      uVar15 = uVar17 >> 0x17 & 0x1f;
      if (uVar15 == 9) {
        local_cc = *(float *)(param_3 + 0x2c);
        local_d8 = *(int *)(param_3 + 0x3fc) + -1;
        local_d0 = (float)local_d8;
        iVar19 = *(int *)(param_3 + 0x3c);
        pfVar14 = *(float **)(param_3 + 0x478);
        local_b0 = 6.2831855 / local_d0;
        local_d4 = 0.0;
        local_ac = (float)*(int *)(param_3 + 0x400) / local_d0;
        local_c8 = *(float *)(param_3 + 0x43c) + *(float *)(param_3 + 0x424);
        local_c4 = *(float *)(param_3 + 0x440) + *(float *)(param_3 + 0x428);
        local_c0 = *(float *)(param_3 + 0x444) + *(float *)(param_3 + 0x42c);
        local_bc = local_c8 + *(float *)(param_3 + 0x430);
        local_b8 = *(float *)(param_3 + 0x434) + local_c4;
        local_b4 = *(float *)(param_3 + 0x438) + local_c0;
        if (iVar19 != 0) {
          local_c8 = *(float *)(iVar19 + 0x43c) + *(float *)(iVar19 + 0x424);
          local_c4 = *(float *)(iVar19 + 0x428) + *(float *)(iVar19 + 0x440);
          local_c0 = *(float *)(iVar19 + 0x42c) + *(float *)(iVar19 + 0x444);
          local_a8 = local_c8 + *(float *)(iVar19 + 0x430);
          local_a4 = *(float *)(iVar19 + 0x434) + local_c4;
          local_a0 = *(float *)(iVar19 + 0x438) + local_c0;
          local_bc = local_a8 + local_bc;
          local_b8 = local_a4 + local_b8;
          local_b4 = local_a0 + local_b4;
        }
        if ((uVar17 & 0x10000) == 0) {
          fVar22 = *(float *)(param_3 + 0x3bc);
        }
        else {
          fVar22 = *(float *)(param_3 + 0x3c0);
        }
        if (0 < local_d8) {
          fVar3 = local_b4 + 0.0;
          pfVar20 = pfVar14;
          do {
            pfVar20[4] = fVar22;
            pfVar20[3] = 1.0;
            pfVar20[5] = *(float *)(param_3 + 0x7c) + *(float *)(param_3 + 0x60);
            pfVar20[6] = local_d4 + *(float *)(param_3 + 100);
            local_d0 = *(float *)(param_3 + 0x40) * 0.5 + *(float *)(param_3 + 0x44);
            FUN_004594b0(pfVar20,local_cc,local_d0);
            *pfVar20 = local_bc + *pfVar20;
            pfVar20[1] = pfVar20[1] + local_b8;
            pfVar20[2] = fVar3;
            pfVar20[0xb] = fVar22;
            pfVar20[10] = 1.0;
            pfVar20[0xc] = *(float *)(param_3 + 0x84) + *(float *)(param_3 + 0x60);
            pfVar20[0xd] = local_d4 + *(float *)(param_3 + 100);
            local_d0 = *(float *)(param_3 + 0x44) - *(float *)(param_3 + 0x40) * 0.5;
            FUN_004594b0(pfVar20 + 7,local_cc,local_d0);
            pfVar14 = pfVar20 + 0xe;
            pfVar20[7] = local_bc + pfVar20[7];
            pfVar20[8] = pfVar20[8] + local_b8;
            pfVar20[9] = fVar3;
            local_d4 = local_ac + local_d4;
            fVar25 = FUN_00464640(local_cc,local_b0);
            local_d8 = local_d8 + -1;
            local_cc = (float)fVar25;
            pfVar20 = pfVar14;
          } while (local_d8 != 0);
        }
        pfVar20 = *(float **)(param_3 + 0x478);
        pfVar23 = pfVar14;
        for (iVar19 = 7; iVar19 != 0; iVar19 = iVar19 + -1) {
          *pfVar23 = *pfVar20;
          pfVar20 = pfVar20 + 1;
          pfVar23 = pfVar23 + 1;
        }
        pfVar14[6] = local_d4 + *(float *)(param_3 + 100);
        pfVar20 = (float *)(*(int *)(param_3 + 0x478) + 0x1c);
        pfVar23 = pfVar14 + 7;
        for (iVar19 = 7; iVar19 != 0; iVar19 = iVar19 + -1) {
          *pfVar23 = *pfVar20;
          pfVar20 = pfVar20 + 1;
          pfVar23 = pfVar23 + 1;
        }
        pfVar14[0xd] = local_d4 + *(float *)(param_3 + 100);
      }
      else if (uVar15 == 0xd) {
        iVar19 = *(int *)(param_3 + 0x3fc);
        local_d0 = *(float *)(param_3 + 0x2c) - *(float *)(param_3 + 0x24) * 0.5;
        fVar25 = FUN_004646e0(local_d0);
        local_cc = (float)fVar25;
        local_d0 = (float)(iVar19 + -1);
        iVar19 = *(int *)(param_3 + 0x3c);
        local_b0 = *(float *)(param_3 + 0x24) / local_d0;
        local_d4 = 0.0;
        local_ac = (float)*(int *)(param_3 + 0x400) / local_d0;
        local_c8 = *(float *)(param_3 + 0x424) + *(float *)(param_3 + 0x43c);
        local_c4 = *(float *)(param_3 + 0x428) + *(float *)(param_3 + 0x440);
        local_c0 = *(float *)(param_3 + 0x42c) + *(float *)(param_3 + 0x444);
        local_bc = local_c8 + *(float *)(param_3 + 0x430);
        local_b8 = *(float *)(param_3 + 0x434) + local_c4;
        local_b4 = *(float *)(param_3 + 0x438) + local_c0;
        if (iVar19 != 0) {
          local_c8 = *(float *)(iVar19 + 0x43c) + *(float *)(iVar19 + 0x424);
          local_c4 = *(float *)(iVar19 + 0x428) + *(float *)(iVar19 + 0x440);
          local_c0 = *(float *)(iVar19 + 0x42c) + *(float *)(iVar19 + 0x444);
          local_a8 = local_c8 + *(float *)(iVar19 + 0x430);
          local_a4 = *(float *)(iVar19 + 0x434) + local_c4;
          local_a0 = *(float *)(iVar19 + 0x438) + local_c0;
          local_bc = local_bc + local_a8;
          local_b8 = local_a4 + local_b8;
          local_b4 = local_a0 + local_b4;
        }
        if ((uVar17 & 0x10000) == 0) {
          fVar22 = *(float *)(param_3 + 0x3bc);
        }
        else {
          fVar22 = *(float *)(param_3 + 0x3c0);
        }
        local_d8 = *(int *)(param_3 + 0x3fc);
        if (0 < local_d8) {
          fVar3 = local_b4 + 0.0;
          pfVar14 = *(float **)(param_3 + 0x478);
          do {
            pfVar14[4] = fVar22;
            pfVar14[3] = 1.0;
            pfVar14[5] = *(float *)(param_3 + 0x7c) + *(float *)(param_3 + 0x60);
            pfVar14[6] = local_d4 + *(float *)(param_3 + 100);
            local_d0 = *(float *)(param_3 + 0x40) * 0.5 + *(float *)(param_3 + 0x44);
            FUN_004594b0(pfVar14,local_cc,local_d0);
            *pfVar14 = local_bc + *pfVar14;
            pfVar14[1] = pfVar14[1] + local_b8;
            pfVar14[2] = fVar3;
            pfVar14[0xb] = fVar22;
            pfVar14[10] = 1.0;
            pfVar14[0xc] = *(float *)(param_3 + 0x84) + *(float *)(param_3 + 0x60);
            pfVar14[0xd] = local_d4 + *(float *)(param_3 + 100);
            local_d0 = *(float *)(param_3 + 0x44) - *(float *)(param_3 + 0x40) * 0.5;
            FUN_004594b0(pfVar14 + 7,local_cc,local_d0);
            pfVar14[7] = local_bc + pfVar14[7];
            pfVar14[8] = pfVar14[8] + local_b8;
            pfVar14[9] = fVar3;
            local_d4 = local_ac + local_d4;
            fVar25 = FUN_00464640(local_cc,local_b0);
            local_d8 = local_d8 + -1;
            local_cc = (float)fVar25;
            pfVar14 = pfVar14 + 0xe;
          } while (local_d8 != 0);
        }
      }
      if (*(code **)(param_3 + 0x4a8) != (code *)0x0) {
        uVar29 = (**(code **)(param_3 + 0x4a8))();
        param_2 = (short *)((ulonglong)uVar29 >> 0x20);
        if ((int)uVar29 != 0) goto LAB_00455b44;
      }
      iVar19 = *(int *)(param_3 + 0x6c);
      pfVar14 = *(float **)(param_3 + 0x74);
      *(int *)(param_3 + 0x68) = iVar19;
      if ((0.99 < *pfVar14) && (*pfVar14 < 1.01)) {
        *(uint *)(param_3 + 0x6c) = iVar19 + 1U;
        *(float *)(param_3 + 0x70) = *(float *)(param_3 + 0x70) + 1.0;
        DAT_004b2ed0 = local_7c;
        return (ulonglong)(iVar19 + 1U) << 0x20;
      }
      local_d0 = *pfVar14 + *(float *)(param_3 + 0x70);
      *(float *)(param_3 + 0x70) = local_d0;
      uVar28 = FUN_004931e0(pfVar14,iVar19);
      param_2 = (short *)(uVar28 >> 0x20);
      *(int *)(param_3 + 0x6c) = (int)uVar28;
      DAT_004b2ed0 = local_7c;
    }
    return ZEXT48(param_2) << 0x20;
  }
LAB_00455b44:
  return CONCAT44(param_2,1);
switchD_004556aa_caseD_6e:
  param_2 = (short *)(*(uint *)(param_3 + 0x47c) & 0xfa7fffff | 0xa000000);
  *(short **)(param_3 + 0x47c) = param_2;
  fVar25 = (float10)*(float *)(puVar2 + 4);
  if ((*(byte *)(puVar2 + 3) & 1) != 0) {
    fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 4));
    uVar17 = extraout_ECX_43;
    param_2 = extraout_EDX_x00107;
  }
  *(float *)(param_3 + 0x58) = (float)fVar25;
  fVar25 = (float10)*(float *)(puVar2 + 6);
  if ((*(byte *)(puVar2 + 3) & 2) != 0) {
    fVar25 = FUN_004551b0(uVar17,param_2,*(float *)(puVar2 + 6));
    param_2 = extraout_EDX_x00108;
  }
  *(float *)(param_3 + 0x5c) = (float)fVar25;
  uVar17 = (uint)(ushort)puVar2[1] + (int)puVar2;
  *(uint *)(param_3 + 0x3f0) = uVar17;
  goto LAB_00455686;
}


