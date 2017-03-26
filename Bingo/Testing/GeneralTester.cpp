//
// Created by Kimba on 3/2/2017.
//

#include "GeneralTester.h"
#include <iostream>

void GeneralTester::testCards()
{
    std::cout << std::endl << "Test Suite: GeneralTester::testCards" << std::endl;

    std::cout << "Test case 1" << std::endl;

    Cards card(5,65);
    if(card.getUserInput() != 5)
    {
        std::cout << "Failure in constructor: unexpected value for getUserInput of "
                  << card.getUserInput() << std::endl;
    }

    if(card.getMaxNumber() != 65)
    {
        std::cout << "Failure in constructor: unexpected value for getMaxNumber of "c
                  << card.getMaxNumber() << std::endl;
    }

    if(card.getSize() == nullptr)
    {
        std::cout << "Failure in constructor: unexpected value for getSize" << std::endl;
    }

}

void GeneralTester::testDeck()
{
    std::cout << std::endl << "Test Suite: GeneralTester::testDeck" << std::endl;

    std::cout << "Test case 1" << std::endl;

    Deck myDeck(5,45,65);
    if(myDeck.getMyDeck()[1]->getUserInput() != 5)
    {
        std::cout << "Failure in constructor: unexpected value for getUserInput of "
                  << myDeck.getMyDeck()[1]->getUserInput() << std::endl;
    }

    if(myDeck.getMyDeck()[3]->getMaxNumber() != 65)
    {
        std::cout << "Failure in constructor: unexpected value for getMaxNumber of "
                  << myDeck.getMyDeck()[3]->getMaxNumber() << std::endl;
    }

    if(myDeck.getSize() == nullptr)
    {
        std::cout << "Failure in constructor: unexpected value for getSize" << std::endl;
    }

    if(myDeck.getMyDeck() == nullptr)
    {
        std::cout << "Failure in constructor: unexpected value for getMyDeck" << std::endl;

    }

    Deck m_Deck(10,50,45);

    if ( m_Deck.getUserInput() == 10)
    {
        std::cout << "Unexpected Value. No cards should be made." << std::endl;
    }
}
