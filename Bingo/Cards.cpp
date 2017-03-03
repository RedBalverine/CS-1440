//
// Created by Kimba on 2/28/2017.
//

#include "Cards.h"
#include <iostream>
#include <chrono>
#include <vector>
#include <algorithm>
#include <ostream>
#include <iomanip>

// google c++ shuffle method to randomly generate an array of numbers
void Cards::sizeOfCard(const int userInput)
{
    if (userInput <= 15 && userInput >= 3)
    {
        size = new int *[userInput];
        for (int i = 0; i < userInput; i++)
        {
            size[i] = new int[userInput];
        }
        m_userInput = userInput;
    }
    else
    {
        std::cout << "Sorry the size of your cards must be between 3 and 15." << std::endl;
    }
}

void Cards::numbersOnTheCards(const int number)
{
    std::vector<int> possible;
    int numberCount = 0;
    int count = 0;

    for (int i = 0; i < number; i++)
    {
        numberCount++;
        possible.push_back(numberCount);
    }

    std::random_shuffle(possible.begin(), possible.end());


    maxNumber = number;
    for (int i = 0; i < m_userInput; i++)
    {
        for(int j = 0; j < m_userInput; j++)
        {
            if (number >= 2 * m_userInput * m_userInput && number <= 4 * m_userInput * m_userInput)
            {
                size[i][j] = possible[count];
                count++;
            }
        }
    }



}

Cards::Cards(int cardSize, int numberMax)
{
    sizeOfCard(cardSize);
    numbersOnTheCards(numberMax);
}

void Cards::print(std::ostream& out)
{
    for (int i = 0; i < getUserInput(); i++)
    {
        out << "+-----";
    }

    out << "+\n";

    for (int i = 0; i < getUserInput(); i++)
    {
        for (int j = 0; j < getUserInput(); j++)
        {
            out << "| " << std::setw(3) << getSize()[i][j] << " ";
        }
        out << "|\n";

        for (int i = 0; i < getUserInput(); i++)
        {
            out << "+-----";
        }
        out << "+\n";
    }
}

Cards::Cards()
{

}

Cards::~Cards()
{
    for (int i=0; i<m_userInput; i++)
    {
        delete size[i];
        size[i] = nullptr;
    }
    delete [] size;
}