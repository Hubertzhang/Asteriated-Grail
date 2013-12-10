#include "cardlist.h"

CardList::CardList()
{
    cardList = new Card[150];
    initCardList();
}

void CardList::initCardList()
{
    cardList[0].cnature = ground;		cardList[0].ctype = attack;		cardList[0].cname = groundAttack;
    cardList[0].ckind = skill;		cardList[0].cskillone = 11;		cardList[0].cskilltwo = 32;
    cardList[1].cnature = ground;		cardList[1].ctype = attack;		cardList[1].cname = groundAttack;
    cardList[1].ckind = skill;		cardList[1].cskillone = 11;		cardList[1].cskilltwo = 32;
    cardList[2].cnature = ground;		cardList[2].ctype = attack;		cardList[2].cname = groundAttack;
    cardList[2].ckind = skill;		cardList[2].cskillone = 11;		cardList[2].cskilltwo = 32;
    cardList[3].cnature = ground;		cardList[3].ctype = attack;		cardList[3].cname = groundAttack;
    cardList[3].ckind = skill;		cardList[3].cskillone = 11;		cardList[3].cskilltwo = 32;
    cardList[4].cnature = ground;		cardList[4].ctype = attack;		cardList[4].cname = groundAttack;
    cardList[4].ckind = skill;		cardList[4].cskillone = 11;		cardList[4].cskilltwo = 32;
    cardList[5].cnature = ground;		cardList[5].ctype = attack;		cardList[5].cname = groundAttack;
    cardList[5].ckind = blood;		cardList[5].cskillone = 21;		cardList[5].cskilltwo = 231;
    cardList[6].cnature = ground;		cardList[6].ctype = attack;		cardList[6].cname = groundAttack;
    cardList[6].ckind = blood;		cardList[6].cskillone = 21;		cardList[6].cskilltwo = 231;
    cardList[7].cnature = ground;		cardList[7].ctype = attack;		cardList[7].cname = groundAttack;
    cardList[7].ckind = blood;		cardList[7].cskillone = 21;		cardList[7].cskilltwo = 231;
    cardList[8].cnature = ground;		cardList[8].ctype = attack;		cardList[8].cname = groundAttack;
    cardList[8].ckind = blood;		cardList[8].cskillone = 22;		cardList[8].cskilltwo = 231;
    cardList[9].cnature = ground;		cardList[9].ctype = attack;		cardList[9].cname = groundAttack;
    cardList[9].ckind = blood;		cardList[9].cskillone = 22;		cardList[9].cskilltwo = 231;
    cardList[10].cnature = ground;		cardList[10].ctype = attack;		cardList[10].cname = groundAttack;
    cardList[10].ckind = holy;		cardList[10].cskillone = 62;		cardList[10].cskilltwo = -1;
    cardList[11].cnature = ground;		cardList[11].ctype = attack;		cardList[11].cname = groundAttack;
    cardList[11].ckind = holy;		cardList[11].cskillone = 62;		cardList[11].cskilltwo = -1;
    cardList[12].cnature = ground;		cardList[12].ctype = attack;		cardList[12].cname = groundAttack;
    cardList[12].ckind = holy;		cardList[12].cskillone = 62;		cardList[12].cskilltwo = 71;
    cardList[13].cnature = ground;		cardList[13].ctype = attack;		cardList[13].cname = groundAttack;
    cardList[13].ckind = magical;		cardList[13].cskillone = 41;		cardList[13].cskilltwo = 221;
    cardList[14].cnature = ground;		cardList[14].ctype = attack;		cardList[14].cname = groundAttack;
    cardList[14].ckind = magical;		cardList[14].cskillone = 41;		cardList[14].cskilltwo = 222;
    cardList[15].cnature = ground;		cardList[15].ctype = attack;		cardList[15].cname = groundAttack;
    cardList[15].ckind = magical;		cardList[15].cskillone = 41;		cardList[15].cskilltwo = 222;
    cardList[16].cnature = ground;		cardList[16].ctype = attack;		cardList[16].cname = groundAttack;
    cardList[16].ckind = magical;		cardList[16].cskillone = 41;		cardList[16].cskilltwo = 231;
    cardList[17].cnature = ground;		cardList[17].ctype = attack;		cardList[17].cname = groundAttack;
    cardList[17].ckind = intone;		cardList[17].cskillone = 161;		cardList[17].cskilltwo = 111;
    cardList[18].cnature = ground;		cardList[18].ctype = attack;		cardList[18].cname = groundAttack;
    cardList[18].ckind = intone;		cardList[18].cskillone = 161;		cardList[18].cskilltwo = 111;
    cardList[19].cnature = ground;		cardList[19].ctype = attack;		cardList[19].cname = groundAttack;
    cardList[19].ckind = intone;		cardList[19].cskillone = 162;		cardList[19].cskilltwo = 111;
    cardList[20].cnature = ground;		cardList[20].ctype = attack;		cardList[20].cname = groundAttack;
    cardList[20].ckind = intone;		cardList[20].cskillone = 162;		cardList[20].cskilltwo = 111;
    cardList[21].cnature = ground;		cardList[21].ctype = magic;		cardList[21].cname = poison;
    cardList[21].ckind = intone;		cardList[21].cskillone = -1;		cardList[21].cskilltwo = -1;
    cardList[22].cnature = ground;		cardList[22].ctype = magic;		cardList[22].cname = weak;
    cardList[22].ckind = skill;		cardList[22].cskillone = -1;		cardList[22].cskilltwo = -1;
    cardList[23].cnature = ground;		cardList[23].ctype = magic;		cardList[23].cname = shield;
    cardList[23].ckind = holy;		cardList[23].cskillone = -1;		cardList[23].cskilltwo = -1;
    cardList[24].cnature = ground;		cardList[24].ctype = magic;		cardList[24].cname = shield;
    cardList[24].ckind = magical;		cardList[24].cskillone = -1;		cardList[24].cskilltwo = -1;
    cardList[25].cnature = ground;		cardList[25].ctype = magic;		cardList[25].cname = shield;
    cardList[25].ckind = magical;		cardList[25].cskillone = -1;		cardList[25].cskilltwo = -1;
    cardList[26].cnature = ground;		cardList[26].ctype = magic;		cardList[26].cname = shield;
    cardList[26].ckind = intone;		cardList[26].cskillone = -1;		cardList[26].cskilltwo = -1;
    cardList[27].cnature = water;		cardList[27].ctype = attack;		cardList[27].cname = waterAttack;
    cardList[27].ckind = skill;		cardList[27].cskillone = 12;		cardList[27].cskilltwo = 31;
    cardList[28].cnature = water;		cardList[28].ctype = attack;		cardList[28].cname = waterAttack;
    cardList[28].ckind = skill;		cardList[28].cskillone = 12;		cardList[28].cskilltwo = 31;
    cardList[29].cnature = water;		cardList[29].ctype = attack;		cardList[29].cname = waterAttack;
    cardList[29].ckind = skill;		cardList[29].cskillone = 12;		cardList[29].cskilltwo = 31;
    cardList[30].cnature = water;		cardList[30].ctype = attack;		cardList[30].cname = waterAttack;
    cardList[30].ckind = skill;		cardList[30].cskillone = 12;		cardList[30].cskilltwo = 31;
    cardList[31].cnature = water;		cardList[31].ctype = attack;		cardList[31].cname = waterAttack;
    cardList[31].ckind = blood;		cardList[31].cskillone = 21;		cardList[31].cskilltwo = 231;
    cardList[32].cnature = water;		cardList[32].ctype = attack;		cardList[32].cname = waterAttack;
    cardList[32].ckind = blood;		cardList[32].cskillone = 21;		cardList[32].cskilltwo = 231;
    cardList[33].cnature = water;		cardList[33].ctype = attack;		cardList[33].cname = waterAttack;
    cardList[33].ckind = blood;		cardList[33].cskillone = 21;		cardList[33].cskilltwo = 231;
    cardList[34].cnature = water;		cardList[34].ctype = attack;		cardList[34].cname = waterAttack;
    cardList[34].ckind = blood;		cardList[34].cskillone = 21;		cardList[34].cskilltwo = 231;
    cardList[35].cnature = water;		cardList[35].ctype = attack;		cardList[35].cname = waterAttack;
    cardList[35].ckind = holy;		cardList[35].cskillone = 62;		cardList[35].cskilltwo = 71;
    cardList[36].cnature = water;		cardList[36].ctype = attack;		cardList[36].cname = waterAttack;
    cardList[36].ckind = holy;		cardList[36].cskillone = 62;		cardList[36].cskilltwo = 71;
    cardList[37].cnature = water;		cardList[37].ctype = attack;		cardList[37].cname = waterAttack;
    cardList[37].ckind = holy;		cardList[37].cskillone = 62;		cardList[37].cskilltwo = 71;
    cardList[38].cnature = water;		cardList[38].ctype = attack;		cardList[38].cname = waterAttack;
    cardList[38].ckind = magical;		cardList[38].cskillone = 42;		cardList[38].cskilltwo = 221;
    cardList[39].cnature = water;		cardList[39].ctype = attack;		cardList[39].cname = waterAttack;
    cardList[39].ckind = magical;		cardList[39].cskillone = 42;		cardList[39].cskilltwo = 221;
    cardList[40].cnature = water;		cardList[40].ctype = attack;		cardList[40].cname = waterAttack;
    cardList[40].ckind = magical;		cardList[40].cskillone = 42;		cardList[40].cskilltwo = 222;
    cardList[41].cnature = water;		cardList[41].ctype = attack;		cardList[41].cname = waterAttack;
    cardList[41].ckind = magical;		cardList[41].cskillone = 42;		cardList[41].cskilltwo = 222;
    cardList[42].cnature = water;		cardList[42].ctype = attack;		cardList[42].cname = waterAttack;
    cardList[42].ckind = intone;		cardList[42].cskillone = 161;		cardList[42].cskilltwo = 112;
    cardList[43].cnature = water;		cardList[43].ctype = attack;		cardList[43].cname = waterAttack;
    cardList[43].ckind = intone;		cardList[43].cskillone = 161;		cardList[43].cskilltwo = 112;
    cardList[44].cnature = water;		cardList[44].ctype = attack;		cardList[44].cname = waterAttack;
    cardList[44].ckind = intone;		cardList[44].cskillone = 161;		cardList[44].cskilltwo = 112;
    cardList[45].cnature = water;		cardList[45].ctype = attack;		cardList[45].cname = waterAttack;
    cardList[45].ckind = intone;		cardList[45].cskillone = 161;		cardList[45].cskilltwo = 112;
    cardList[46].cnature = water;		cardList[46].ctype = attack;		cardList[46].cname = waterAttack;
    cardList[46].ckind = intone;		cardList[46].cskillone = 161;		cardList[46].cskilltwo = 112;
    cardList[47].cnature = water;		cardList[47].ctype = attack;		cardList[47].cname = waterAttack;
    cardList[47].ckind = intone;		cardList[47].cskillone = 161;		cardList[47].cskilltwo = 112;
    cardList[48].cnature = water;		cardList[48].ctype = magic;		cardList[48].cname = poison;
    cardList[48].ckind = skill;		cardList[48].cskillone = -1;		cardList[48].cskilltwo = -1;
    cardList[49].cnature = water;		cardList[49].ctype = magic;		cardList[49].cname = poison;
    cardList[49].ckind = holy;		cardList[49].cskillone = -1;		cardList[49].cskilltwo = -1;
    cardList[50].cnature = water;		cardList[50].ctype = magic;		cardList[50].cname = poison;
    cardList[50].ckind = magical;		cardList[50].cskillone = -1;		cardList[50].cskilltwo = -1;
    cardList[51].cnature = water;		cardList[51].ctype = magic;		cardList[51].cname = weak;
    cardList[51].ckind = blood;		cardList[51].cskillone = -1;		cardList[51].cskilltwo = -1;
    cardList[52].cnature = water;		cardList[52].ctype = magic;		cardList[52].cname = weak;
    cardList[52].ckind = intone;		cardList[52].cskillone = -1;		cardList[52].cskilltwo = -1;
    cardList[53].cnature = water;		cardList[53].ctype = magic;		cardList[53].cname = missile;
    cardList[53].ckind = magical;		cardList[53].cskillone = -1;		cardList[53].cskilltwo = -1;
    cardList[54].cnature = water;		cardList[54].ctype = magic;		cardList[54].cname = missile;
    cardList[54].ckind = magical;		cardList[54].cskillone = -1;		cardList[54].cskilltwo = -1;
    cardList[55].cnature = fire;		cardList[55].ctype = attack;		cardList[55].cname = fireAttack;
    cardList[55].ckind = skill;		cardList[55].cskillone = 12;		cardList[55].cskilltwo = 31;
    cardList[56].cnature = fire;		cardList[56].ctype = attack;		cardList[56].cname = fireAttack;
    cardList[56].ckind = skill;		cardList[56].cskillone = 12;		cardList[56].cskilltwo = 31;
    cardList[57].cnature = fire;		cardList[57].ctype = attack;		cardList[57].cname = fireAttack;
    cardList[57].ckind = skill;		cardList[57].cskillone = 12;		cardList[57].cskilltwo = 31;
    cardList[58].cnature = fire;		cardList[58].ctype = attack;		cardList[58].cname = fireAttack;
    cardList[58].ckind = skill;		cardList[58].cskillone = 12;		cardList[58].cskilltwo = 31;
    cardList[59].cnature = fire;		cardList[59].ctype = attack;		cardList[59].cname = fireAttack;
    cardList[59].ckind = blood;		cardList[59].cskillone = 22;		cardList[59].cskilltwo = 231;
    cardList[60].cnature = fire;		cardList[60].ctype = attack;		cardList[60].cname = fireAttack;
    cardList[60].ckind = blood;		cardList[60].cskillone = 22;		cardList[60].cskilltwo = 231;
    cardList[61].cnature = fire;		cardList[61].ctype = attack;		cardList[61].cname = fireAttack;
    cardList[61].ckind = blood;		cardList[61].cskillone = 22;		cardList[61].cskilltwo = 231;
    cardList[62].cnature = fire;		cardList[62].ctype = attack;		cardList[62].cname = fireAttack;
    cardList[62].ckind = blood;		cardList[62].cskillone = 22;		cardList[62].cskilltwo = 231;
    cardList[63].cnature = fire;		cardList[63].ctype = attack;		cardList[63].cname = fireAttack;
    cardList[63].ckind = holy;		cardList[63].cskillone = 61;		cardList[63].cskilltwo = 71;
    cardList[64].cnature = fire;		cardList[64].ctype = attack;		cardList[64].cname = fireAttack;
    cardList[64].ckind = holy;		cardList[64].cskillone = 61;		cardList[64].cskilltwo = 71;
    cardList[65].cnature = fire;		cardList[65].ctype = attack;		cardList[65].cname = fireAttack;
    cardList[65].ckind = holy;		cardList[65].cskillone = 61;		cardList[65].cskilltwo = 71;
    cardList[66].cnature = fire;		cardList[66].ctype = attack;		cardList[66].cname = fireAttack;
    cardList[66].ckind = holy;		cardList[66].cskillone = 61;		cardList[66].cskilltwo = 71;
    cardList[67].cnature = fire;		cardList[67].ctype = attack;		cardList[67].cname = fireAttack;
    cardList[67].ckind = magical;		cardList[67].cskillone = 43;		cardList[67].cskilltwo = 221;
    cardList[68].cnature = fire;		cardList[68].ctype = attack;		cardList[68].cname = fireAttack;
    cardList[68].ckind = magical;		cardList[68].cskillone = 43;		cardList[68].cskilltwo = 221;
    cardList[69].cnature = fire;		cardList[69].ctype = attack;		cardList[69].cname = fireAttack;
    cardList[69].ckind = magical;		cardList[69].cskillone = 43;		cardList[69].cskilltwo = 221;
    cardList[70].cnature = fire;		cardList[70].ctype = attack;		cardList[70].cname = fireAttack;
    cardList[70].ckind = magical;		cardList[70].cskillone = 43;		cardList[70].cskilltwo = 221;
    cardList[71].cnature = fire;		cardList[71].ctype = attack;		cardList[71].cname = fireAttack;
    cardList[71].ckind = magical;		cardList[71].cskillone = 43;		cardList[71].cskilltwo = 221;
    cardList[72].cnature = fire;		cardList[72].ctype = attack;		cardList[72].cname = fireAttack;
    cardList[72].ckind = intone;		cardList[72].cskillone = 161;		cardList[72].cskilltwo = 113;
    cardList[73].cnature = fire;		cardList[73].ctype = attack;		cardList[73].cname = fireAttack;
    cardList[73].ckind = intone;		cardList[73].cskillone = 161;		cardList[73].cskilltwo = 113;
    cardList[74].cnature = fire;		cardList[74].ctype = attack;		cardList[74].cname = fireAttack;
    cardList[74].ckind = intone;		cardList[74].cskillone = 161;		cardList[74].cskilltwo = 113;
    cardList[75].cnature = fire;		cardList[75].ctype = attack;		cardList[75].cname = fireAttack;
    cardList[75].ckind = intone;		cardList[75].cskillone = 161;		cardList[75].cskilltwo = 113;
    cardList[76].cnature = fire;		cardList[76].ctype = magic;		cardList[76].cname = weak;
    cardList[76].ckind = blood;		cardList[76].cskillone = -1;		cardList[76].cskilltwo = -1;
    cardList[77].cnature = fire;		cardList[77].ctype = magic;		cardList[77].cname = weak;
    cardList[77].ckind = holy;		cardList[77].cskillone = -1;		cardList[77].cskilltwo = -1;
    cardList[78].cnature = fire;		cardList[78].ctype = magic;		cardList[78].cname = missile;
    cardList[78].ckind = intone;		cardList[78].cskillone = -1;		cardList[78].cskilltwo = -1;
    cardList[79].cnature = fire;		cardList[79].ctype = magic;		cardList[79].cname = shield;
    cardList[79].ckind = blood;		cardList[79].cskillone = -1;		cardList[79].cskilltwo = -1;
    cardList[80].cnature = fire;		cardList[80].ctype = magic;		cardList[80].cname = shield;
    cardList[80].ckind = blood;		cardList[80].cskillone = -1;		cardList[80].cskilltwo = -1;
    cardList[81].cnature = wind;		cardList[81].ctype = attack;		cardList[81].cname = windAttack;
    cardList[81].ckind = skill;		cardList[81].cskillone = 11;		cardList[81].cskilltwo = 32;
    cardList[82].cnature = wind;		cardList[82].ctype = attack;		cardList[82].cname = windAttack;
    cardList[82].ckind = skill;		cardList[82].cskillone = 11;		cardList[82].cskilltwo = 32;
    cardList[83].cnature = wind;		cardList[83].ctype = attack;		cardList[83].cname = windAttack;
    cardList[83].ckind = skill;		cardList[83].cskillone = 12;		cardList[83].cskilltwo = 32;
    cardList[84].cnature = wind;		cardList[84].ctype = attack;		cardList[84].cname = windAttack;
    cardList[84].ckind = skill;		cardList[84].cskillone = 12;		cardList[84].cskilltwo = 32;
    cardList[85].cnature = wind;		cardList[85].ctype = attack;		cardList[85].cname = windAttack;
    cardList[85].ckind = skill;		cardList[85].cskillone = 12;		cardList[85].cskilltwo = 32;
    cardList[86].cnature = wind;		cardList[86].ctype = attack;		cardList[86].cname = windAttack;
    cardList[86].ckind = blood;		cardList[86].cskillone = 22;		cardList[86].cskilltwo = 231;
    cardList[87].cnature = wind;		cardList[87].ctype = attack;		cardList[87].cname = windAttack;
    cardList[87].ckind = blood;		cardList[87].cskillone = 22;		cardList[87].cskilltwo = 231;
    cardList[88].cnature = wind;		cardList[88].ctype = attack;		cardList[88].cname = windAttack;
    cardList[88].ckind = blood;		cardList[88].cskillone = 22;		cardList[88].cskilltwo = 231;
    cardList[89].cnature = wind;		cardList[89].ctype = attack;		cardList[89].cname = windAttack;
    cardList[89].ckind = blood;		cardList[89].cskillone = 22;		cardList[89].cskilltwo = 231;
    cardList[90].cnature = wind;		cardList[90].ctype = attack;		cardList[90].cname = windAttack;
    cardList[90].ckind = holy;		cardList[90].cskillone = 62;		cardList[90].cskilltwo = 71;
    cardList[91].cnature = wind;		cardList[91].ctype = attack;		cardList[91].cname = windAttack;
    cardList[91].ckind = holy;		cardList[91].cskillone = 62;		cardList[91].cskilltwo = 71;
    cardList[92].cnature = wind;		cardList[92].ctype = attack;		cardList[92].cname = windAttack;
    cardList[92].ckind = holy;		cardList[92].cskillone = 62;		cardList[92].cskilltwo = 71;
    cardList[93].cnature = wind;		cardList[93].ctype = attack;		cardList[93].cname = windAttack;
    cardList[93].ckind = magical;		cardList[93].cskillone = 44;		cardList[93].cskilltwo = 222;
    cardList[94].cnature = wind;		cardList[94].ctype = attack;		cardList[94].cname = windAttack;
    cardList[94].ckind = magical;		cardList[94].cskillone = 44;		cardList[94].cskilltwo = 222;
    cardList[95].cnature = wind;		cardList[95].ctype = attack;		cardList[95].cname = windAttack;
    cardList[95].ckind = magical;		cardList[95].cskillone = 44;		cardList[95].cskilltwo = 222;
    cardList[96].cnature = wind;		cardList[96].ctype = attack;		cardList[96].cname = windAttack;
    cardList[96].ckind = magical;		cardList[96].cskillone = 44;		cardList[96].cskilltwo = 222;
    cardList[97].cnature = wind;		cardList[97].ctype = attack;		cardList[97].cname = windAttack;
    cardList[97].ckind = intone;		cardList[97].cskillone = 162;		cardList[97].cskilltwo = 114;
    cardList[98].cnature = wind;		cardList[98].ctype = attack;		cardList[98].cname = windAttack;
    cardList[98].ckind = intone;		cardList[98].cskillone = 162;		cardList[98].cskilltwo = 114;
    cardList[99].cnature = wind;		cardList[99].ctype = attack;		cardList[99].cname = windAttack;
    cardList[99].ckind = intone;		cardList[99].cskillone = 162;		cardList[99].cskilltwo = 114;
    cardList[100].cnature = wind;		cardList[100].ctype = attack;		cardList[100].cname = windAttack;
    cardList[100].ckind = intone;		cardList[100].cskillone = 162;		cardList[100].cskilltwo = 114;
    cardList[101].cnature = wind;		cardList[101].ctype = attack;		cardList[101].cname = windAttack;
    cardList[101].ckind = intone;		cardList[101].cskillone = 162;		cardList[101].cskilltwo = 114;
    cardList[102].cnature = wind;		cardList[102].ctype = magic;		cardList[102].cname = poison;
    cardList[102].ckind = holy;		cardList[102].cskillone = -1;		cardList[102].cskilltwo = -1;
    cardList[103].cnature = wind;		cardList[103].ctype = magic;		cardList[103].cname = weak;
    cardList[103].ckind = magical;		cardList[103].cskillone = -1;		cardList[103].cskilltwo = -1;
    cardList[104].cnature = wind;		cardList[104].ctype = magic;		cardList[104].cname = missile;
    cardList[104].ckind = magical;		cardList[104].cskillone = -1;		cardList[104].cskilltwo = -1;
    cardList[105].cnature = wind;		cardList[105].ctype = magic;		cardList[105].cname = shield;
    cardList[105].ckind = blood;		cardList[105].cskillone = -1;		cardList[105].cskilltwo = -1;
    cardList[106].cnature = wind;		cardList[106].ctype = magic;		cardList[106].cname = shield;
    cardList[106].ckind = holy;		cardList[106].cskillone = -1;		cardList[106].cskilltwo = -1;
    cardList[107].cnature = wind;		cardList[107].ctype = magic;		cardList[107].cname = shield;
    cardList[107].ckind = intone;		cardList[107].cskillone = -1;		cardList[107].cskilltwo = -1;
    cardList[108].cnature = thunder;		cardList[108].ctype = attack;		cardList[108].cname = thunderAttack;
    cardList[108].ckind = skill;		cardList[108].cskillone = 11;		cardList[108].cskilltwo = 32;
    cardList[109].cnature = thunder;		cardList[109].ctype = attack;		cardList[109].cname = thunderAttack;
    cardList[109].ckind = skill;		cardList[109].cskillone = 11;		cardList[109].cskilltwo = 32;
    cardList[110].cnature = thunder;		cardList[110].ctype = attack;		cardList[110].cname = thunderAttack;
    cardList[110].ckind = skill;		cardList[110].cskillone = 12;		cardList[110].cskilltwo = 32;
    cardList[111].cnature = thunder;		cardList[111].ctype = attack;		cardList[111].cname = thunderAttack;
    cardList[111].ckind = skill;		cardList[111].cskillone = 12;		cardList[111].cskilltwo = 32;
    cardList[112].cnature = thunder;		cardList[112].ctype = attack;		cardList[112].cname = thunderAttack;
    cardList[112].ckind = blood;		cardList[112].cskillone = 21;		cardList[112].cskilltwo = 231;
    cardList[113].cnature = thunder;		cardList[113].ctype = attack;		cardList[113].cname = thunderAttack;
    cardList[113].ckind = blood;		cardList[113].cskillone = 21;		cardList[113].cskilltwo = 231;
    cardList[114].cnature = thunder;		cardList[114].ctype = attack;		cardList[114].cname = thunderAttack;
    cardList[114].ckind = blood;		cardList[114].cskillone = 21;		cardList[114].cskilltwo = 231;
    cardList[115].cnature = thunder;		cardList[115].ctype = attack;		cardList[115].cname = thunderAttack;
    cardList[115].ckind = blood;		cardList[115].cskillone = 21;		cardList[115].cskilltwo = 231;
    cardList[116].cnature = thunder;		cardList[116].ctype = attack;		cardList[116].cname = thunderAttack;
    cardList[116].ckind = holy;		cardList[116].cskillone = 61;		cardList[116].cskilltwo = 71;
    cardList[117].cnature = thunder;		cardList[117].ctype = attack;		cardList[117].cname = thunderAttack;
    cardList[117].ckind = holy;		cardList[117].cskillone = 61;		cardList[117].cskilltwo = 71;
    cardList[118].cnature = thunder;		cardList[118].ctype = attack;		cardList[118].cname = thunderAttack;
    cardList[118].ckind = holy;		cardList[118].cskillone = 61;		cardList[118].cskilltwo = 71;
    cardList[119].cnature = thunder;		cardList[119].ctype = attack;		cardList[119].cname = thunderAttack;
    cardList[119].ckind = holy;		cardList[119].cskillone = 61;		cardList[119].cskilltwo = 71;
    cardList[120].cnature = thunder;		cardList[120].ctype = attack;		cardList[120].cname = thunderAttack;
    cardList[120].ckind = magical;		cardList[120].cskillone = 45;		cardList[120].cskilltwo = 221;
    cardList[121].cnature = thunder;		cardList[121].ctype = attack;		cardList[121].cname = thunderAttack;
    cardList[121].ckind = magical;		cardList[121].cskillone = 45;		cardList[121].cskilltwo = 221;
    cardList[122].cnature = thunder;		cardList[122].ctype = attack;		cardList[122].cname = thunderAttack;
    cardList[122].ckind = magical;		cardList[122].cskillone = 45;		cardList[122].cskilltwo = 221;
    cardList[123].cnature = thunder;		cardList[123].ctype = attack;		cardList[123].cname = thunderAttack;
    cardList[123].ckind = magical;		cardList[123].cskillone = 45;		cardList[123].cskilltwo = 221;
    cardList[124].cnature = thunder;		cardList[124].ctype = attack;		cardList[124].cname = thunderAttack;
    cardList[124].ckind = magical;		cardList[124].cskillone = 45;		cardList[124].cskilltwo = 221;
    cardList[125].cnature = thunder;		cardList[125].ctype = attack;		cardList[125].cname = thunderAttack;
    cardList[125].ckind = intone;		cardList[125].cskillone = 162;		cardList[125].cskilltwo = 115;
    cardList[126].cnature = thunder;		cardList[126].ctype = attack;		cardList[126].cname = thunderAttack;
    cardList[126].ckind = intone;		cardList[126].cskillone = 162;		cardList[126].cskilltwo = 115;
    cardList[127].cnature = thunder;		cardList[127].ctype = attack;		cardList[127].cname = thunderAttack;
    cardList[127].ckind = intone;		cardList[127].cskillone = 162;		cardList[127].cskilltwo = 115;
    cardList[128].cnature = thunder;		cardList[128].ctype = attack;		cardList[128].cname = thunderAttack;
    cardList[128].ckind = intone;		cardList[128].cskillone = 162;		cardList[128].cskilltwo = 115;
    cardList[129].cnature = thunder;		cardList[129].ctype = magic;		cardList[129].cname = poison;
    cardList[129].ckind = skill;		cardList[129].cskillone = -1;		cardList[129].cskilltwo = -1;
    cardList[130].cnature = thunder;		cardList[130].ctype = magic;		cardList[130].cname = missile;
    cardList[130].ckind = skill;		cardList[130].cskillone = -1;		cardList[130].cskilltwo = -1;
    cardList[131].cnature = thunder;		cardList[131].ctype = magic;		cardList[131].cname = missile;
    cardList[131].ckind = holy;		cardList[131].cskillone = -1;		cardList[131].cskilltwo = -1;
    cardList[132].cnature = thunder;		cardList[132].ctype = magic;		cardList[132].cname = shield;
    cardList[132].ckind = blood;		cardList[132].cskillone = -1;		cardList[132].cskilltwo = -1;
    cardList[133].cnature = dark;		cardList[133].ctype = attack;		cardList[133].cname = darkAttack;
    cardList[133].ckind = holy;		cardList[133].cskillone = -1;		cardList[133].cskilltwo = -1;
    cardList[134].cnature = dark;		cardList[134].ctype = attack;		cardList[134].cname = darkAttack;
    cardList[134].ckind = holy;		cardList[134].cskillone = -1;		cardList[134].cskilltwo = -1;
    cardList[135].cnature = dark;		cardList[135].ctype = attack;		cardList[135].cname = darkAttack;
    cardList[135].ckind = holy;		cardList[135].cskillone = -1;		cardList[135].cskilltwo = -1;
    cardList[136].cnature = dark;		cardList[136].ctype = attack;		cardList[136].cname = darkAttack;
    cardList[136].ckind = holy;		cardList[136].cskillone = -1;		cardList[136].cskilltwo = -1;
    cardList[137].cnature = dark;		cardList[137].ctype = attack;		cardList[137].cname = darkAttack;
    cardList[137].ckind = intone;		cardList[137].cskillone = -1;		cardList[137].cskilltwo = -1;
    cardList[138].cnature = dark;		cardList[138].ctype = attack;		cardList[138].cname = darkAttack;
    cardList[138].ckind = intone;		cardList[138].cskillone = -1;		cardList[138].cskilltwo = -1;
    cardList[139].cnature = light;		cardList[139].ctype = magic;		cardList[139].cname = holyLight;
    cardList[139].ckind = skill;		cardList[139].cskillone = -1;		cardList[139].cskilltwo = -1;
    cardList[140].cnature = light;		cardList[140].ctype = magic;		cardList[140].cname = holyLight;
    cardList[140].ckind = skill;		cardList[140].cskillone = -1;		cardList[140].cskilltwo = -1;
    cardList[141].cnature = light;		cardList[141].ctype = magic;		cardList[141].cname = holyLight;
    cardList[141].ckind = skill;		cardList[141].cskillone = -1;		cardList[141].cskilltwo = -1;
    cardList[142].cnature = light;		cardList[142].ctype = magic;		cardList[142].cname = holyLight;
    cardList[142].ckind = blood;		cardList[142].cskillone = -1;		cardList[142].cskilltwo = -1;
    cardList[143].cnature = light;		cardList[143].ctype = magic;		cardList[143].cname = holyLight;
    cardList[143].ckind = blood;		cardList[143].cskillone = -1;		cardList[143].cskilltwo = -1;
    cardList[144].cnature = light;		cardList[144].ctype = magic;		cardList[144].cname = holyLight;
    cardList[144].ckind = blood;		cardList[144].cskillone = -1;		cardList[144].cskilltwo = -1;
    cardList[145].cnature = light;		cardList[145].ctype = magic;		cardList[145].cname = holyLight;
    cardList[145].ckind = holy;		cardList[145].cskillone = 61;		cardList[145].cskilltwo = -1;
    cardList[146].cnature = light;		cardList[146].ctype = magic;		cardList[146].cname = holyLight;
    cardList[146].ckind = holy;		cardList[146].cskillone = 61;		cardList[146].cskilltwo = -1;
    cardList[147].cnature = light;		cardList[147].ctype = magic;		cardList[147].cname = holyLight;
    cardList[147].ckind = holy;		cardList[147].cskillone = 62;		cardList[147].cskilltwo = -1;
    cardList[148].cnature = light;		cardList[148].ctype = magic;		cardList[148].cname = holyLight;
    cardList[148].ckind = magical;		cardList[148].cskillone = -1;		cardList[148].cskilltwo = -1;
    cardList[149].cnature = light;		cardList[149].ctype = magic;		cardList[149].cname = holyLight;
    cardList[149].ckind = magical;		cardList[149].cskillone = -1;		cardList[149].cskilltwo = -1;
}
int CardList::getKind(int cardNum)
{
    return cardList[cardNum].ckind;
}
int CardList::getName(int cardNum)
{
    if (cardNum <= 149)
    return cardList[cardNum].cname;
    else return -1;
}
int CardList::getNature(int cardNum)
{
    if (cardNum <= 149)
    return cardList[cardNum].cnature;
    else return -1;
}
int CardList::getType(int cardNum)
{
    return cardList[cardNum].ctype;
}
int CardList::getSkillOne(int cardNum)
{
    return cardList[cardNum].cskillone;
}
int CardList::getSkillTwo(int cardNum)
{
    return cardList[cardNum].cskilltwo;
}

//测试-------------------------
QString CardList::getQName(int cardNum)
{
    QString s;

    if (cardNum == 150)
        return "封印束缚";
    switch(cardList[cardNum].cname)
    {
    case groundAttack:
        s.sprintf("地系%d ",cardNum);
        break;
    case waterAttack:
        s.sprintf("水系%d ",cardNum);
        break;
    case fireAttack:
        s.sprintf("火系%d ",cardNum);
        break;
    case windAttack:
        s.sprintf("风系%d ",cardNum);
        break;
    case thunderAttack:
        s.sprintf("雷系%d ",cardNum);
        break;
    case darkAttack:
        s.sprintf("暗灭%d ",cardNum);
        break;
    case poison:
        s.sprintf("中毒%d ",cardNum);
        break;
    case weak:
        s.sprintf("虚弱%d ",cardNum);
        break;
    case missile:
        s.sprintf("魔弹%d ",cardNum);
        break;
    case shield:
        s.sprintf("圣盾%d ",cardNum);
        break;
    case holyLight:
        s.sprintf("圣光%d ",cardNum);
        break;
    default:
        break;
    }
    QString s1;
    s1.sprintf("技(%d,%d)",getSkillOne(cardNum),getSkillTwo(cardNum));
    s =s + s1;
    return s;
}
//----------------------------
