//
// Created by Kimba on 4/19/2017.
//

#ifndef ITAK_CONFIGURATION_H
#define ITAK_CONFIGURATION_H

#include <map>
#include <string>
#include <iostream>


class Configuration
{
public:

    int getValueInt(std::map<std::string, std::string> input, std::string key) const;
    double getValueDouble(std::map<std::string, std::string> input, std::string key) const;
    std::string getValueString(std::map<std::string, std::string> input, std::string key) const
    {
        if(input.count(key) == 1)
        {
            return input.at(key);
        }
        else
        {
            std::cout << "This Key doesn't exist!" << std::endl;
        }
    }

private:




};

#endif //ITAK_CONFIGURATION_H
