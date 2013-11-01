#ifndef CARDPILE_H
#define CARDPILE_H
#include "server.h"
//The cardPile class is used to init the extractPile and the discardPile
class CardPile
{
    friend class Server;
private:
    int* extractPile;
    int* discardPile;
    int* endOfExtractPile;
    int* endOfDiscardPile;
    int* nextCard;
public:
    CardPile();
    int getCard();
    void initExtractPile();
    void shuffleCard(int* start,int* end);
    void putIntoPile(int* card,int* site);
};

#endif // CARDPILE_H
