//
// Created by Kimba on 4/5/2017.
//

#include <iostream>
#include <string>

#include "DictionTester.h"
#include "../Dictionary.h"

void DictionTester::testAdd()
{
    std::cout << "Execute DictionTester::testAdd" << std::endl;

    Dictionary<int,int> tester(2);
    tester.add(15,16);
    tester.add(45,56);
    if(tester.getByIndex(0)->getValue() != 16)
    {
        std::cout << "The add function has not worked properly." << std::endl;
    }
    tester.add(13,45);
    if(tester.getByIndex(2)->getValue() != 45)
    {
        std::cout << "The add function has failed to allocate more memory." << std::endl;
    }

}

void DictionTester::testRemoveByIndex()
{
    std::cout << "Execute DictionTester::testRemoveByIndex" << std::endl;

    Dictionary<int,int> indexCheck(3);
    indexCheck.add(12,14);
    indexCheck.add(34,32);
    indexCheck.add(78,34);
    indexCheck.removeByIndex(1);

    if(indexCheck.getByIndex(1)->getValue() != 34)
    {
        std::cout << "This function failed to remove by Index." << std::endl;

    }

}

void DictionTester::testGetByKey()
{
    std::cout << "Execute DictionTester::testGetByKey" << std::endl;
    try
    {
        Dictionary<int, int> numbers;
        numbers.add(1,2);
    }
    catch (std::string exception)
    {
        std::cout << "This was an invalid input" << std::endl;
    }

    try
    {
        Dictionary<std::string, int> familyMembers;
        familyMembers.add("Butterfield's", 6);
        familyMembers.getByKey("Anderson's");
    }

    catch (std::string exception)
    {
        std::cout << "      You are searching for an invalid Key and it was Caught." << std::endl;
    }



}

void DictionTester::testGetByIndex()
{

    std::cout << "Execute DictionTester::testGetByIndex" << std::endl;
    try
    {
        Dictionary<int,int> indexCheck(3);
        indexCheck.add(12,14);
        indexCheck.add(34,32);
        indexCheck.add(78,34);
        indexCheck.getByIndex(10);
    }
    catch(std::string exception)
    {
        std::cout << "      This index is out of Range." << std::endl;
    }

}

void DictionTester::testRemoveByKey()
{

    std::cout << "Execute DictionTester::testRemoveByKey" << std::endl;

    Dictionary<std::string,int> keyCheck(3);
    keyCheck.add("Josh",14);
    keyCheck.add("Lauren",32);
    keyCheck.add("Jack",34);
    keyCheck.removeByKey("Josh");

    if(keyCheck.getByIndex(0)->getKey() != std::string ("Lauren"))
    {
        std::cout << "This function failed to remove by key." << std::endl;

    }

}