//
// Created by Stephen Clyde on 3/4/17.
//

#ifndef GEO_REGIONS_COUNTY_H
#define GEO_REGIONS_COUNTY_H

// DONE: Finish definition for a County class

#include "State.h"
#include <string>

class County : public Region
{
public:
    County(std::string data[]);
    County();
};
#endif //GEO_REGIONS_COUNTY_H
