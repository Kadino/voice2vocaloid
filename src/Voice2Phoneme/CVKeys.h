// SPDX-License-Identifier: Apache-2.0

// Keys to the Consonant-Vowel voicebank format of UTAU, an older standard that results in a more robotic sound

enum CVKey{
  A,   //あ
  BA,  //ば
  BE,  //べ
  BI,  //び
  BO,  //ぼ
  BU,  //ぶ
  BYA, //びゃ
  BYE, //びぇ
  BYO, //びぉ
  BYU, //びゅ
  CHA, //ちゃ
  CHE, //ちぇ
  CHI, //ち
  CHO, //ちぉ
  CHU, //ちゅ
  DA,  //だ
  DE,  //で
  DI,  //ぢ
  DO,  //ど
  DU,  //どぅ
  E,   //え
  FA,  //ふぁ
  FE,  //ふぇ
  FI,  //ふぃ
  FO,  //ふぉ
  FU,  //ふ
  GA,  //が
  GE,  //げ
  GI,  //ぎ
  GO,  //ご
  GU,  //ぐ
  GYA, //ぎゃ
  GYE, //ぎぇ
  GYO, //ぎぉ
  GYU, //ぎゅ
  HA,  //は
  HE,  //へ
  HI,  //ひ
  HO,  //ほ
  HU,  //ふ duplicate of FU
  HYA, //ひゃ
  HYO, //ひぉ
  HYU, //ひゅ
  I,   //い
  JA,  //ざ
  JE,  //ぜ
  JI,  //じ
  JO,  //ぞ
  JU,  //ずゅ
  KA,  //か
  KE,  //け
  KI,  //き
  KO,  //こ
  KU,  //く
  KYA, //きゃ
  KYE, //きぇ
  KYO, //きぉ
  KYU, //きゅ
  MA,  //ま
  ME,  //め
  MI,  //み
  MO,  //も
  MU,  //む
  MYA, //みゃ
  MYE, //みぇ
  MYO, //みぉ
  MYU, //みゅ
  N,   //ん
  NA,  //な
  NE,  //ね
  NI,  //に
  NO,  //の
  NU,  //ぬ
  NYA, //にゃ
  NYE, //にぇ
  NYO, //にぉ
  NYU, //にゅ
  O,   //お
  PA,  //ぱ
  PE,  //ぺ
  PI,  //ぴ
  PO,  //ぽ
  PU,  //ぷ
  PYA, //ぴゃ
  PYE, //ぴぇ
  PYO, //ぴぉ
  PYU, //ぴゅ
  RA,  //ら
  RE,  //れ
  RI,  //り
  RO,  //ろ
  RU,  //る
  RYA, //りゃ
  RYE, //りぇ
  RYO, //りぉ
  RYU, //りゅ
  SA,  //さ
  SE,  //せ
  SI,  //すぃ
  SO,  //そ
  SU,  //す
  SHA, //しゃ
  SHE, //しぇ
  SHI, //し
  SHO, //しぉ
  SHU, //しゅ
  TA,  //た
  TE,  //て
  TI,  //てぃ
  TO,  //と
  TU,  //とぅ
  TSU, //つ
  U,   //う
  WA,  //わ
  WE,  //うぇ (ゑ)
  WI,  //うぃ (ゐ)
  WO,  //を
  WU,  //をぅ (ゔ) DNE in modern JP
  YA,  //や
  YE,  //いぇ
  YI,  //い  DNE in JP
  YO,  //よ
  YU,  //ゆ
  ZA,  //ざ
  ZE,  //ぜ
  ZI,  //ずぃ
  ZO,  //ぞ
  ZU   //ず
}

//TODO priority-sorted arrays of fallback keys necessary?
//TODO mapping out vowel and/or consonant grouping necessary? May need a proper trie and not just arrays. All sounds like future optimization!
/*
using CV_VowelGroup = std::pair<CVKey, std::array<CVKey>>;

std::array<CV_VowelGroup> CV_VowelGroups{
    std::pair<CVKey.A, std::array{
      CVKey.BA, CVKey.BYA, CVKey.CHA, CVKey.DA, CVKey.FA, CVKey.GA, CVKey.GYA, CVKey.HA, CVKey.HYA, CVKey.JA, CVKey.KA, CVKey.KYA, CVKey.MA, CVKey.MYA,
      CVKey.NA, CVKey.NYA, CVKey.PA, CVKey.PYA, CVKey.RA, CVKey.RYA, CVKey.SA, CVKey.SHA, CVKey.TA, CVKey.WA, CVKey.YA, CVKey.ZA
  },
}
*/
