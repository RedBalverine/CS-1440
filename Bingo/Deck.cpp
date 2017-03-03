//
// Created by Stephen Clyde on 2/16/17.
//

#include "Deck.h"
#include <chrono>

Deck::Deck(int cardSize, int cardCount, int numberMax)
{
    // TODO: Implement
    if (cardCount > 3 && cardCount < 10000)
    {
        myDeck = new Cards*[cardCount];
        for (int i = 0; i < cardCount; i++) {
            myDeck[i] = new Cards(cardSize, numberMax);
        }
        numberOfCards = cardCount;
    }
}

Deck::~Deck()
{
    // TODO: Implement
    for (int i=0; i<numberOfCards; i++)
    {
        delete myDeck[i];
        myDeck[i] = nullptr;
    }
    delete [] myDeck;

}

void Deck::print(std::ostream& out) const
{
    // TODO: Implement
    for (int i = 0; i < numberOfCards; i++)
    {
        out << "Card #" << i + 1 << std::endl;
        myDeck[i]->print(out);
    }

}

void Deck::print(std::ostream& out, int cardIndex) const
{
    // TODO: Implement
    out << "Card #" << cardIndex << std::endl;
    myDeck[cardIndex - 1]->print(out);
}



