#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QTcpSocket>
#include "team.h"
#include "termination.h"
#include <set>
using std::set;

enum messageType{TurnBegin,BeforeAction,ActionType,AttackHappen,AdditionalAction,DrawPicture,Activated,AttackRespond,
                 WeakRespond,CureRespond,Show,GetCard,FoldCard,EnergyChange,CardChange,CureChange,CardLimitChange,
                 StatusDecrease,StatusIncrease,AskRespond,SpecialAsk,TurnEnd};
enum actionType{Attack,Magic};
enum beforeactionType{aaa,Activate,Refine,Purchase,Fusion};
enum returnType{NoAccept,Accept};
enum returnactionType{AcceptAttack,HeadOn,Light};
//enum reactionType{AcceptAttack,HeadOn,Light,Accept,NoAccept};
class Server;
//测试-------------
class textGUI;
//----------------------
class Player : public QObject
{
    Q_OBJECT
protected:
    Server* server;
    Team* thisTeam;
    QTcpSocket client;
    set<int> card;//手牌内容
    int order;//座位编号
    int energyGem;
    int energyCrystal;
    int stonelimit;//能量上限
    int status[10];//状态栏
    int statusnumber;//状态数量
    int character;//人物
    int activation;
public:
    //int status[10];//状态栏
    //int statusnumber;//状态数量
    int teamNumber;//队伍编号
    int theShield;//盾圣
    int cureLimit;//治疗上限
    int cureNumber;//治疗数量
    int cardNumber;//手牌数量
    int cardLimit;//手牌上限
    Player(/*QObject *parent = 0,*/ Server* server,int order,int teamNumber,int character=0);
//----------传输信息--------------------------------
    bool getmessage;
    int sendMessageBuffer[20];
    int receiveMessageBuffer[20];
    //void BroadCast(messageType a,int origin,int target,...);
    //void BroadCast();
    //void sendMessage();
    //void sendMessage(messageType a,int,int,int* =NULL);
    //actionType receive(int*);
    void receive();
//----------行动阶段流程------------------------------
    void start();
    virtual void handleStatus(); //判定阶段（天使等人物重载）
    virtual void beforeAction();//特殊行动阶段或启动
    virtual void end();
//---------基本操作-----------------------------------
    bool shieldExist();
    bool cureExist();
    void destroySheild();
    void destroyStatus(int cardname,int order);
    void destroyStatus(int cardname);
    void weakRespond(int,int);
    void poisonRespond(int,int);//中毒需要知道造成伤害的人
    void addStatus(int cardUsed);
    void foldCard(int* idOfCard,int amount=1,bool canBeSee=false);//弃牌
    void getCard(int amount);//摸牌
    void increaseCure(int amount,bool limit=true);
    void decreaseCure(int amount);
    virtual void changeCardLimit(int amount);
    //加治疗，减治疗函数
//---------特殊行动------------------------------------
    virtual void purchase();
    virtual void refine();
    virtual void fusion();
//---------普通攻击或普通法术或人物特殊技能----------------
    virtual void activate();//启动
    virtual void magicAction();//法术行动
    virtual void normalAttack();//攻击行动
    virtual void normalMagic();//普通法术
    virtual void headOn(int chainLength);//应战
    virtual void beMagicMissileAttack(int cardUsed,int damage);//魔弹
//---------伤害时间轴-----------------------
    virtual bool beAttacked(int attacker, int cardUsed, int chainLength, bool canBeAccept);//伤害时间轴第二阶段：判定阶段
    virtual void countDamage(int damage,int kind);//伤害时间轴第三阶段：伤害结算阶段
    virtual int useCure(int damage);//伤害时间轴第四阶段：治疗抵御阶段
    virtual void takeDamage(int damage,int kind);//伤害时间轴第五+六阶段前部分：实际受到伤害阶段，摸牌
    virtual void Discards(int amount,int kind);//伤害时间轴第六阶段：承受伤害阶段

    virtual void characterConnect(){}
    signals:
    void miss(int);//弓之女神
    void decreasestatus(int,int);//封印师
    void fold(int,int);//封印师
    void beweak(int,int,int);//封印师
//测试程序：
    public slots:
    void getMessage();
    void BroadCast();
    void sendMessage();
};
#endif // PLAYER_H
