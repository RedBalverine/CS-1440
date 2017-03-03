//
// Created by Stephen Clyde on 2/16/17.
//

#ifndef BINGO_DECK_H
#define BINGO_DECK_H

#include <ostream>

#include "Cards.h"

// TODO: Extend this definition as you see fit

class Deck : public Cards {

public:
    Deck(int cardSize, int cardCount, int numberMax);
    ~Deck();

    void print(std::ostream& out) const;
    void print(std::ostream& out, int cardIndex) const;

    Cards** getMyDeck() const
    {
        return myDeck;
    }

    int getNumberOfCards() const
    {
        return numberOfCards;
    }

private:

    Cards** myDeck;
    int numberOfCards;
};

#endif //BINGO_DECK_H
