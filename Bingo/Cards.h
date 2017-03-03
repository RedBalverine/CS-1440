//
// Created by Kimba on 2/28/2017.
//

#ifndef BINGO_CARDSIZE_H
#define BINGO_CARDSIZE_H

#include <ostream>

class Cards {

public:
    Cards();
    Cards(int cardSize, int numberMax);

    ~Cards();

    void sizeOfCard(const int userInput);

    void numbersOnTheCards(const int number);

    int getUserInput() const
    {
        return m_userInput;
    }

    int getMaxNumber() const
    {
        return maxNumber;
    }

    int** getSize() const
    {
        return size;
    }

    void print(std::ostream& out);


private:
    int  maxNumber = 0;
    int m_userInput = 0;
    int** size;



};


#endif //BINGO_CARDSIZE_H
