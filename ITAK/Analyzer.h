//
// Created by Kimba on 4/19/2017.
//

#ifndef ITAK_ANALYZER_H
#define ITAK_ANALYZER_H

#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <sstream>

#include "ResultSet.h"
#include "Configuration.h"

class Analyzer
{
public:


//    virtual ResultSet run(std::ifstream input, std::string fileName) = 0;


    std::vector<std::string> split(std::string& str, const char delimiter)
{
    std::stringstream ss;
    ss << str;

    std::vector<std::string> result;
    std::string item;

    while (std::getline(ss, item, delimiter)) {
        result.push_back(item);
    }

    return result;
}

protected:
    Configuration m_config;
    std::string m_file;

};



#endif //ITAK_ANALYZER_H
