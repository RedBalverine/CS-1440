#include <iostream>
#include <string>
#include "Dictionary.h"

int main() {
    Dictionary<int, int> sampleOne(3);
    Dictionary<int, int> sampleTwo;
    Dictionary<std::string, std::string> sampleThree(5);

    if(sampleOne.getByIndex(0) == nullptr)
    {
        std::cout << "Null array initialization failed" << std::endl;
    }
    sampleOne.add(0, 4);
    sampleOne.add(1, 50);
    sampleOne.add(5, 49);
    sampleOne.add(4, 59);
    sampleOne.add(98, 450);
    std::cout << "sampleOne's count is: " << sampleOne.getCount() << std::endl;

    sampleTwo.add(5, 56);
    std::cout << "sampleTwo's Value is: " << sampleTwo.getByIndex(0)->getValue() << std::endl;
    sampleThree.add("hairColor", "blond");
    std::cout << "sampleThree's Value is: " << sampleThree.getByKey("hairColor")->getValue() << std::endl;


    std::cin.get();
    return 0;
}