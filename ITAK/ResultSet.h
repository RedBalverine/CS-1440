//
// Created by Kimba on 4/22/2017.
//

#ifndef ITAK_RESULTSET_H
#define ITAK_RESULTSET_H

#include <iostream>
#include <vector>
#include <map>

class ResultSet {

private:
    std::map<std::string, std::vector<std::string>> m_results;

public:
    ResultSet(std::map<std::string, std::vector<std::string>> results)
    {
        m_results = results;
    }
    void print(std::ostream& out);
    void printKey(std::string key, std::ostream& out);
    void printString(std::vector<std::string> strings, std::ostream& out);

};


#endif //ITAK_RESULTSET_H
