cmake_minimum_required(VERSION 3.6)
project(GenericDictionary)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Dictionary.h KeyValue.h)

add_executable(GenericDictionary main.cpp ${SOURCE_FILES})

set(TEST_FILES Testing/testMain.cpp
        Testing/DictionTester.cpp
        Testing/DictionTester.h)

add_executable(DictionTester Testing/testMain.cpp ${SOURCE_FILES} ${TEST_FILES})