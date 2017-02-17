#include <iostream>
#include <fstream>
#include <iomanip>
#include <utility>
#include <vector>

#include "Record.hpp"
#include "TestCases.hpp"

std::vector<unsigned int> readNumbersFromFile(std::string input);
std::vector<Record*> createVectorOfRecordsFromVectorOfNumbers(std::vector<unsigned int> input);
void sortByFrequency(std::vector<Record*>& input);
bool bionarySearch(std::vector<Record*> input, int size, int& target);
void reportFrequencies(std::vector<Record*> input);




int main()
{
	std::vector<unsigned int> numbers = readNumbersFromFile("input.txt");
	std::vector<Record*> records = createVectorOfRecordsFromVectorOfNumbers(numbers);
    
	sortByFrequency(records);
	reportFrequencies(records);
	cleanDynamicMemory(records);	// Function stub found in TestCases.cpp

	 //Test cases
	executeFreqTest(FreqTestCase1, createVectorOfRecordsFromVectorOfNumbers, "Frequency Test Case 1");
	executeFreqTest(FreqTestCase2, createVectorOfRecordsFromVectorOfNumbers, "Frequency Test Case 2");
	executeSortTest(SortTestCase1, sortByFrequency, "Sort Test Case 1");
	executeSortTest(SortTestCase2, sortByFrequency, "Sort Test Case 2");
	return 0;
}

std::vector<unsigned int> readNumbersFromFile(std::string input)
{
    std::ifstream fin;
    fin.open(input);
    int size;
    fin >> size;
    std::vector<unsigned int> data;
    unsigned int item;

    for ( int i = 0; i < size; i++)
    {
        fin >> item;
        data.push_back(item);
    }
    
    fin.close();

    return data;

}

std::vector<Record*> createVectorOfRecordsFromVectorOfNumbers(std::vector<unsigned int> input)
{
    std::vector<Record*> RecVec;
    for (int i = 0; i < input.size(); i++)
    {
        int inputNumbers = input[i];
        int index = 0;

        bool ifExists = bionarySearch(RecVec, inputNumbers, index);

        if (!ifExists)
        {
            Record* temp = new Record(inputNumbers);
            RecVec.insert(RecVec.begin() + index, temp);
        }
        else
        {
            RecVec[index]->incrementFrequency();
        }
    }

    return RecVec;

}

void sortByFrequency(std::vector<Record*>& input)
{
    

    for (int startSort = 0; startSort < input.size(); startSort++)
    {
        int minIndex = startSort;

        for (int index = startSort + 1; index < input.size(); index++)
        {
            if (input[index]->getFrequency() > input[minIndex]->getFrequency())
            {
                minIndex = index;
            }
        }
        std::swap(input[minIndex], input[startSort]);
    }
}

bool bionarySearch(std::vector<Record*> input, int size, int& target)
{
    int first = 0,
        last = input.size() - 1;
    bool found = false;
    bool small = false;

    while (!found && first <= last)
    { 
        target = (first + last) / 2;
        if (input[target]->getNumber() == size)
        {
            found = true;
            small = false;
        }
        else if (input[target]->getNumber() < size)
        {
            first = target + 1;
            small = true;
        }
        else
        {
            last = target - 1;
            small = false;
        }
    }
    if (small == true)
    {
        target++;
    }
    return found;
}

void reportFrequencies(std::vector<Record*> input)
{
    int matching = 1;
    int total = 0;
    for (int i = 0; i < input.size() - 1; i++)
    {
        if (input[i]->getFrequency() == input[i + 1]->getFrequency())
        {
            matching++;
        }
        else
        {
            std::cout << std::setw(4) << std::right << matching << "Numbers with a count of" << input[i]->getFrequency() << std::endl;
            total += input[i]->getFrequency() * matching;
            matching = 1;
        }
        if (i == input.size() - 2)
        {
            std::cout << std::setw(4) << std::right << matching << "Numbers with a count of" << input[i]->getFrequency() << std::endl;
            total += input[i]->getFrequency() * matching;
        }        
    }
    std::cout << "There were " << total << " identified during the frequency analysis." << std::endl;
}

