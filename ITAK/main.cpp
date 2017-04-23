#include <iostream>
#include <fstream>
#include <string>
#include "DenialOfServiceAnalyzer.h"
#include "PortScanAnalyzer.h"

int main() {

//DenialOfServiceAnalyzer test;
    ;

    std::ifstream test1("../SampleData.csv");

//    test.populate(test1);
//
//    test.print();
    PortScanAnalyzer test2;
    test2.load(test1);

    test2.print();






    return 0;
}



