// Keys to the Consonant-Vowel voicebank format of UTAU, an older standard primarily relevant to simple Japanese synth

enum CVKey{
  A,   //あ
  BA,  //ば
  BE,  //べ
  BI,  //び
  BO,  //ぼ
  BU,  //ぶ
  BYA, //びゃ
  BYO, //びぉ
  BYU, //びぅ
  CHA, //ちゃ
  CHE, //ちぇ
  CHI, //ち
  CHO, //ちぉ
  CHU, //ちぅ
  DA,  //だ
  DE,  //で
  DI,  //ぢ
  DO,  //ど
  DU,  //づ...?
  E,   //え
  FA,  //ふゃ...?
  FE,  //ふぇ...?
  FI,  //ふぃ...?
  FO,  //ふぉ...?
  FU,  //ふ
  GA,  //が
  GE,  //げ
  GI,  //ぎ
  GO,  //ご
  GU,  //ぐ
  GYA, //ぎゃ
  GYO, //ぎぉ
  GYU, //ぎぅ
  HA,  //は
  HE,  //へ
  HI,  //ひ
  HO,  //ほ
  //HU,  //ふ
  HYA, //ひゃ
  HYO, //ひぉ
  HYU, //ひぅ
  I,   //い
  JA,  //ざ
  JE,  //ぜ
  JI,  //じ
  JO,  //ぞ
  JU,  //ず...?
  KA,  //か
  KE,  //け
  KI,  //き
  KO,  //こ
  KU,  //く
  KYA, //きゃ
  KYO, //きぉ
  KYU, //きぅ
  MA,  //ま
  ME,  //め
  MI,  //み
  MO,  //も
  MU,  //む
  MYA, //みゃ
  MYO, //みぉ
  MYU, //みぅ
  N,   //ん
  NA,  //な
  NE,  //ね
  NI,  //に
  NO,  //の
  NU,  //ぬ
  NYA, //にゃ
  NYO, //にぉ
  NYU, //にぅ
  O,   //お
  PA,  //ぱ
  PE,  //ぺ
  PI,  //ぴ
  PO,  //ぽ
  PU,  //ぷ
  PYA, //ぴゃ
  PYO, //ぴぉ
  PYU, //ぴぅ
  RA,  //ら
  RE,  //れ
  RI,  //り
  RO,  //ろ
  RU,  //る
  RYA, //りゃ
  RYO, //りぉ
  RYU, //りぅ
  SA,  //さ
  SE,  //せ
  SI,
  SO,  //そ
  SU,  //す
  SHA, //しゃ
  SHE, //しぇ
  SHI, //し
  SHO, //しぉ
  SHU, //しぅ
  TA,  //た
  TE,  //て
  TI,  //...ち?
  TO,  //と
  TU,  //とぅ
  TSU, //つ
  U,   //う
  WA,  //わ
  WE,  //ゑ...?
  WI,  //ゐ
  WO,  //を
  //WU,  //ゔ...?
  YA,  //や
  YE,  //やぇ...?
  //YI,
  YO,  //よ
  YU,  //ゆ
  ZA,  //ざ
  ZE,  //ぜ
  ZI,  //じ...?
  ZO,  //ぞ
  ZU   //ず
}

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
