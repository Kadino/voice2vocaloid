// SPDX-License-Identifier: Apache-2.0

// Keys mapping to the pattern offsets for Consonant-Vowel Vowel-Consonant voicebank format of UTAU, a standard which results in a more natural sound

//TODO does the standard need to account for JP Mora? Should these enums clarify mora and not sound-groups?
enum CVVCKeys {
  A_AI_AU_AE, //NOTE AO DNE
  I_BA_BU_BE_BO_BA,
  BYA_BI_BYU_BYE_BYO_BYA,
  CHA_CHI_CHU_CHE_CHO_CHA,
  DA_DI_DU_DE_DO_DA,
  E_EO_EN_EA, //NOTE EI DNE
  FA_FI_FU_FE_FO_FA,
  I_GA_GU_GE_GO_GA,
  GYA_GI_GYU_GYE_GYO_GYA,
  I_HA_HU_HE_HO_HA, //NOTE HU exists
  HYA_HI_HYU_HYE_HYO_HYA,
  I_IU_IE_IO, //NOTE IA DNE
  JA_JI_JU_JE_JO_JA,
  I_KA_KU_KE_KO_KA,
  KYA_KI_KYU_KYE_KYO_KYA,
  I_MA_MU_ME_MO_MA,
  MYA_MI_MYU_MYE_MYO_MYA,
  N_NA_NI_NU,
  I_NA_NU_NE_NO_NA,
  NYA_NI_NYU_NYE_NYO_NYA,
  O_ON_OA_OI, //NOTE OE, OU DNE
  I_PA_PU_PE_PO_PA,
  PYA_PI_PYU_PYE_PYO_PYA,  
  I_RA_RU_RE_RO_RA,
  RYA_RI_RYU_RYE_RYO_RYA,
  SA_SI_SU_SE_SO_SA,
  SHA_SHI_SHU_SHE_SHO_SHA,
  TA_TI_TU_TE_TO_TA,
  TSA_TSI_TSU_TSE_TSO_TSA,
  U_UE_UO_UN, //NOTE UA, UI DNE
  U_WA_WI_WE_WO_WA, //NOTE WU DNE
  I_YA_YU_YE_YO_YA, //NOTE YI DNE
  ZA_ZI_ZU_ZE_ZO_ZA
}

// TODO need mapping offset of CV keys into CVVC?
