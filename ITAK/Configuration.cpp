//
// Created by Kimba on 4/21/2017.
//

#include "Configuration.h"
#include <iostream>

int Configuration::getValueInt(std::map<std::string, std::string> input, std::string key) const
{
    if(input.count(key) == 1)
    {
        int convertedValue = std::stoi(input.at(key));
        return convertedValue;
    }
    else
    {
        std::cout << "This Key doesn't exist!" << std::endl;
    }
}

double Configuration::getValueDouble(std::map<std::string, std::string> input, std::string key) const
{
    if(input.count(key) == 1)
    {
        double convertedValue = std::stod(input.at(key));
        return convertedValue;
    }
    else
    {
        std::cout << "This Key doesn't exist!" << std::endl;
    }
}