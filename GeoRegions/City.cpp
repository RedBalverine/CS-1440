//
// Created by Stephen Clyde on 3/4/17.
//

#include "City.h"
#include <string>

// DONE: Implement functionality of City class

City::City(std::string data[]) : Region(CityType, data)
{
    validate();
}