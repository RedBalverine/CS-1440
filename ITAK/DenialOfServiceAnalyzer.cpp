//
// Created by Kimba on 4/19/2017.
//

#include "DenialOfServiceAnalyzer.h"
#include <iostream>


std::map<std::string, std::map<long,int>> DenialOfServiceAnalyzer::populate(std::ifstream &inputStream)
{

    std::string temp;
    while(!inputStream.eof())
    {
        std::getline(inputStream,temp);
        messages.push_back(temp);
    }

    std::vector<std::vector<std::string>> items;

    for(int i = 0; i < messages.size(); i++)
    {
        items.push_back(split(messages[i], ','));
    }


    for(int i = 0; i < items.size(); i++)
    {
        times.push_back(stol(items[i][0]));
    }

    for(int i = 0; i < items.size(); i++)
    {
        ipAddresses.push_back(items[i][1]);
    }



    for(int i = 0; i < items.size(); i++)
    {
        auto it = Diction.find(ipAddresses[i]);

        if(it == Diction.end())
        {
            std::map<long,int> temp;
            temp[times[i]] = 1;
            Diction.emplace(ipAddresses[i],temp);
        }
        else
        {
            std::map<long,int>::iterator it2 = it->second.find(times[i]);
            if(it2 == it->second.end())
            {
                it->second.emplace(times[i],1);
            }
            else
            {
                it2->second++;
            }
        }
    }

    return Diction;

}

void DenialOfServiceAnalyzer::print()
{
    for(std::map<std::string,std::map<long,int>>::iterator i = Diction.begin(); i != Diction.end(); i++)
    {
        std::cout << i->first << std::endl;

        for(std::map<long,int>::iterator j = i->second.begin(); j != i->second.end(); j++)
        {
            std::cout << j->first << ", " << j->second << std::endl;
        }
    }

//    for(int i = 0; i < times.size(); i++)
//    {
//        std::cout << times[i] << std::endl;
//    }
}

