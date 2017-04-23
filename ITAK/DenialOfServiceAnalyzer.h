//
// Created by Kimba on 4/19/2017.
//

#ifndef ITAK_DENIALOFSERVICEANALYZER_H
#define ITAK_DENIALOFSERVICEANALYZER_H

#include "Analyzer.h"
#include <fstream>
#include <string>
#include <vector>
#include <map>

class DenialOfServiceAnalyzer : public Analyzer {

public:
    std::map<std::string, std::map<long,int>> populate(std::ifstream &inputStream);

    void print();

private:
    std::map<std::string, std::map<long,int>> Diction;
    std::vector<long> times;
    std::vector<std::string> ipAddresses;
    std::vector<std::string> messages;



};


#endif //ITAK_DENIALOFSERVICEANALYZER_H
