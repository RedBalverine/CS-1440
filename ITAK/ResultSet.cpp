//
// Created by Kimba on 4/22/2017.
//

#include "ResultSet.h"

void ResultSet::print(std::ostream &out)
{
    for(auto it = m_results.begin(); it != m_results.end(); it++)
    {
        printKey(it->first, out);
        printString(it->second, out);
    }
}

void ResultSet::printKey(std::string key, std::ostream& out)
{
    out << key << ": ";
}

void ResultSet::printString(std::vector<std::string> strings, std::ostream &out)
{
    for(int i =0; i < strings.size(); i++)
    {
        out << strings[i];
        if (i < strings.size() - 1)
        {
            out << ", ";
        }
    }
}