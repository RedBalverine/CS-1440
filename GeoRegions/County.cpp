//
// Created by Stephen Clyde on 3/4/17.
//

#include "County.h"


// DONE: Implement functionality of County class

County::County(std::string data[]) : Region(CountyType, data)
{
    validate();

}