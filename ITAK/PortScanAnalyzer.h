//
// Created by Kimba on 4/21/2017.
//

#ifndef ITAK_PORTSCANANALYZER_H
#define ITAK_PORTSCANANALYZER_H

#include "Analyzer.h"
#include <fstream>
#include <string>
#include <vector>
#include <map>

class PortScanAnalyzer : public Analyzer
{

public:
    std::map<std::string, std::map<int,int>> load(std::ifstream &inputStream);

    void print();

private:
    std::map<std::string, std::map<int,int>> Diction;
    std::vector<int> desPort;
    std::vector<std::string> ipAddresses;
    std::vector<std::string> messages;


};


#endif //ITAK_PORTSCANANALYZER_H
