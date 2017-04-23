//
// Created by Kimba on 4/21/2017.
//

#include "PortScanAnalyzer.h"
#include <iostream>


std::map<std::string, std::map<int,int>> PortScanAnalyzer::load(std::ifstream &inputStream)
{
    std::string temp;
    while (!inputStream.eof()) {
        std::getline(inputStream, temp);
        messages.push_back(temp);
    }

    std::vector<std::vector<std::string>> items;

    for (int i = 0; i < messages.size(); i++) {
        items.push_back(split(messages[i], ','));
    }


    for (int i = 0; i < items.size(); i++) {
        desPort.push_back(stoi(items[i][3]));
    }


    for (int i = 0; i < items.size(); i++) {
        ipAddresses.push_back(items[i][1]);
    }

    for(int i = 0; i < items.size(); i++)
    {
        auto it = Diction.find(ipAddresses[i]);

        if(it == Diction.end())
        {
            std::map<int,int> temp;
            temp[desPort[i]] = 1;
            Diction.emplace(ipAddresses[i],temp);
        }
        else
        {
            std::map<int,int>::iterator it2 = it->second.find(desPort[i]);
            if(it2 == it->second.end())
            {
                it->second.emplace(desPort[i],1);
            }
            else
            {
                it2->second++;
            }
        }
    }
}

void PortScanAnalyzer::print()
{
    for (std::map<std::string, std::map<int, int>>::iterator i = Diction.begin(); i != Diction.end(); i++) {
        std::cout << i->first << std::endl;

        for (std::map<int, int>::iterator j = i->second.begin(); j != i->second.end(); j++) {
            std::cout << j->first << std::endl;
        }
    }
}
