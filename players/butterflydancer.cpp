#include "butterflydancer.h"
#include"server.h"
extern CardList cardlist;
/* 普通技：被动 【生命之火】：你的手牌上限-X，X为你拥有的【蛹】的数量；但你的手牌上限最少为3【恒定】。
   1.普通技：法术 【舞动】：（摸1张牌【强制】或弃1张牌【强制】）将牌库顶的1张牌面朝下放置在你的角色旁，作为【茧】。
     普通技：响应D 【毒粉】：（每当有角色产生1点实际法术伤害时发动⑤，移除1个【茧】）
                          该次伤害额外+1。
     普通技：响应D 【朝圣】：（每当你将要承受伤害时发动⑥，移除你面前的1个【茧】）
                         抵御1点该来源的伤害。
     普通技：响应D 【镜花水月】：（每当有角色产生2点实际法术伤害时发动⑤，移除2张同系【茧】【展示】）
                             抵御该次伤害，你对他造成2次法术伤害③，每次伤害为1点。
     普通技：响应B 【凋零】：（你每次移除【茧】时，若为法术牌，可展示之）
                           你对目标角色造成1点法术伤害③，再对自己造成2点法术伤害③；
                           此技能发动后，直到你的下个回合开始前，对方的士气最少为1【强制】。
   6.必杀技：法术 【蛹化】：【宝石】×1 （你+1【蛹】）将牌库顶的4张牌作为【茧】。
   7.必杀技：法术 【倒逆之蝶】：【能量】×1 你弃2张牌，再选择一项：
                         ●对目标角色造成1点法术伤害③，该伤害不能用治疗抵御。
                        ●（移除2个【茧】或对自己造成4点法术伤害③）移除1个【蛹】。
*【茧】为蝶舞者专有盖牌，上限为8。
*【蛹】为蝶舞者专有指示物，没有上限。
*/

Butterflydancer::Butterflydancer(Server* server,int order,int teamNumber,int character) :
    Player(server,order,teamNumber,character)
{
    cocoonNumber = 0;
    pupa = 0;
    Morale = false;
    server->textg->character[order]->setText("蝶舞");
}
void Butterflydancer::start()
{
    Morale = false;
    Player::start();
}
void Butterflydancer::characterConnect()
{
    for (int i=0; i<6; i++)
    {
         connect(server->players[i],SIGNAL(bedamage2(int,int&,int)),this,SLOT(skillone(int,int&,int)));
    }
    connect(server->team[teamNumber],SIGNAL(moraleloss2(int,int&)),this,SLOT(skilltwo(int,int&)));
}
void Butterflydancer::cocoonIncrease(int number)
{
    if ((cocoonNumber + number) <= 8)
    {
        for (int i=0; i<number; i++)
        {
            int cardname = server->gamePile->getCard();
            cocoon.insert(cardname);
            sendMessageBuffer[i+2] = cardname;
        }
        sendMessageBuffer[0] = SpecialChange2;
        sendMessageBuffer[1] = number;
        sendMessage();

        cocoonNumber = cocoonNumber + number;

        sendMessageBuffer[0] = SpecialChange;
        sendMessageBuffer[1] = number;
        sendMessageBuffer[2] = 0;
        BroadCast();
    }
    else if (cocoonNumber != 8)
    {
        number = 8 - cocoonNumber;
        for (int i=0; i<number; i++)
        {
            int cardname = server->gamePile->getCard();
            cocoon.insert(cardname);
            sendMessageBuffer[i+2] = cardname;
        }
        sendMessageBuffer[0] = SpecialChange2;
        sendMessageBuffer[1] = number;
        sendMessage();

        sendMessageBuffer[0] = SpecialChange;
        sendMessageBuffer[1] = number;
        sendMessageBuffer[2] = 0;
        BroadCast();
        cocoonNumber = 8;
    }
}
void Butterflydancer::cocoonDecrease(int * idOfCard, int number, bool cansee)
{
    if (cansee)
    {
        for (int i=0; i<number; i++)
        {
            cocoon.erase(idOfCard[i]);
            server->gamePile->putIntoPile(idOfCard[i]);
            cocoonNumber--;
            sendMessageBuffer[3+i] = idOfCard[i];
        }

            sendMessageBuffer[0] = SpecialChange;
            sendMessageBuffer[1] = -number;
            sendMessageBuffer[2] = 0;
            BroadCast();

            sendMessageBuffer[0] = DrawPicture;
            sendMessageBuffer[1] = number;
            sendMessageBuffer[2] = 0;
            BroadCast();
    //--------------凋零--------------------------
            for (int i=0; i<number; i++)
            {
            if (cardlist.getType(idOfCard[i]) == magic)
            {
                sendMessageBuffer[0] = AskRespond;
                sendMessageBuffer[1] = 1;
                sendMessageBuffer[2] = 2;
                sendMessage();

                receive();
                if (receiveMessageBuffer[0])
                {
                    Morale = true;
                    int magicTarget = receiveMessageBuffer[1];
                    server->players[magicTarget]->countDamage(1,Magic);
                    countDamage(2,Magic);
                }
            }
            }
    //--------------------------------------------
    }
    else
    {
    for (int i=0; i<number; i++)
    {
        cocoon.erase(idOfCard[i]);
        server->gamePile->putIntoPile(idOfCard[i]);
        cocoonNumber--;

        sendMessageBuffer[0] = SpecialChange;
        sendMessageBuffer[1] = -1;
        sendMessageBuffer[2] = 0;
        BroadCast();
//--------------凋零--------------------------
        if (cardlist.getType(idOfCard[i]) == magic)
        {
            sendMessageBuffer[0] = AskRespond;
            sendMessageBuffer[1] = 1;
            sendMessageBuffer[2] = 2;
            sendMessage();

            receive();
            if (receiveMessageBuffer[0])
            {
                sendMessageBuffer[0] = DrawPicture;
                sendMessageBuffer[1] = 1;
                sendMessageBuffer[2] = 0;
                sendMessageBuffer[3] = idOfCard[i];
                BroadCast();

                Morale = true;
                int magicTarget = receiveMessageBuffer[1];
                server->players[magicTarget]->countDamage(1,Magic);
                countDamage(2,Magic);
            }
        }
//--------------------------------------------
    }
    }
}
void Butterflydancer::pupaChange(int number)
{
       pupa = pupa + number;

       sendMessageBuffer[0] = SpecialChange;
       sendMessageBuffer[2] = number;
       sendMessageBuffer[1] = 0;
       BroadCast();

       if (pupa >= 3)
       {
           changeCardLimit1(3);
       }
       else
       {
           changeCardLimit1(6 - pupa);
       }
}
void Butterflydancer::changeCardLimit2(int amount)
{
    if (cardLimit + amount < 3)
    {
        amount = 3 - cardLimit;
    }

    cardLimit = cardLimit + amount;
    sendMessageBuffer[0] = CardLimitChange;
    sendMessageBuffer[1] = amount;
    BroadCast();

    if (cardLimit < cardNumber)
    {
         Discards(cardNumber-cardLimit,2);
    }
}
void Butterflydancer::takeDamage(int damage, int kind)
{
    if (damage > 0)
    {
//--------------朝圣-----------------------------------
        if (cocoonNumber >= 1 && (kind == Magic || kind == Attack))
        {
            sendMessageBuffer[0] = AskRespond;
            sendMessageBuffer[1] = 1;
            sendMessageBuffer[2] = 2;
            sendMessage();

            receive();
            if (receiveMessageBuffer[0])
            {
                int cardUsed = receiveMessageBuffer[1];
                cocoonDecrease(&cardUsed,1);
                damage--;
            }
        }
//------------------------------------------------------
      getCard(damage);

      if(cardNumber > cardLimit)
      {
          Discards(cardNumber-cardLimit,kind);
      }
    }
}

void Butterflydancer::magicAction()
{
    if (receiveMessageBuffer[1] == 0)
    {
         normalMagic();
    }
    else if (receiveMessageBuffer[1] == 1)//舞动
    {
         magicOne();
         emit finishaction(order, Magic);
    }
    else if (receiveMessageBuffer[1] == 6)//蛹化
    {
         magicTwo();
         emit finishaction(order, Magic);
    }
    else if (receiveMessageBuffer[1] == 7)//倒逆之蝶
    {
         magicThree();
         emit finishaction(order, Magic);
    }
}
void Butterflydancer::magicOne()
{
    if (receiveMessageBuffer[2] == 1)
    {
        takeDamage(1,2);
    }
    else if (receiveMessageBuffer[2] == 0)
    {
        int cardUsed = receiveMessageBuffer[3];
        foldCard(&cardUsed);
    }
    cocoonIncrease(1);
}
void Butterflydancer::magicTwo()
{
    useEnergy(1,true);
    pupaChange(1);
    cocoonIncrease(4);
}
void Butterflydancer::magicThree()
{
    int number = receiveMessageBuffer[2];
    int kind = receiveMessageBuffer[3+number];
    useEnergy(1);
    foldCard(receiveMessageBuffer+3,number);

    if (kind == 1)
    {
        int magicTarget = receiveMessageBuffer[4+number];
        server->players[magicTarget]->actualDamage(1,Magic);
    }
    else if (kind == 2)
    {
        int card[2];
        card[0] = receiveMessageBuffer[4+number];
        card[1] = receiveMessageBuffer[5+number];
        cocoonDecrease(card,2);
        pupaChange(-1);
    }
    else if (kind == 3)
    {
        countDamage(4,Magic);
        pupaChange(-1);
    }
}

void Butterflydancer::skillone(int target, int& damage, int kind)
{
    if (kind == Magic)
    {
        if (damage == 1)
        {
            sendMessageBuffer[0] = AskRespond;
            sendMessageBuffer[1] = 1;
            sendMessageBuffer[2] = 0;
            sendMessage();

            receive();
            if (receiveMessageBuffer[0])
            {
                int cardUsed = receiveMessageBuffer[0];
                cocoonDecrease(&cardUsed,1);
                damage++;
            }
        }
        else if (damage == 2)
        {
            sendMessageBuffer[0] = AskRespond;
            sendMessageBuffer[1] = 1;
            sendMessageBuffer[2] = 1;
            sendMessage();

            receive();
            if (receiveMessageBuffer[0])
            {
                int card[2];
                card[0] = receiveMessageBuffer[1];
                card[1] = receiveMessageBuffer[2];
                cocoonDecrease(card,2,true);
                damage = 0;

                for (int i=0; i<2; i++)
                {
                    server->players[target]->countDamage(1,Magic);
                }
            }
        }
    }
}

void Butterflydancer::skilltwo(int theteam,int& lossnumber)
{
    if (theteam == 1-teamNumber && Morale)
    {
        server->textg->textbrowser->append("凋零触发");
        if ((server->team[1-teamNumber]->morale - lossnumber) <= 0)
        {
            lossnumber = server->team[1-teamNumber]->morale - 1;
        }
    }
}
