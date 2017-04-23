cmake_minimum_required(VERSION 3.6)
project(ITAK)

set(CMAKE_CXX_STANDARD 11)
set(TEST_FILES Testing/testMain.cpp Testing/TestCases.cpp Testing/TestCases.h)

set(SOURCE_FILES main.cpp Analyzer.h DenialOfServiceAnalyzer.cpp DenialOfServiceAnalyzer.h Configuration.h PortScanAnalyzer.cpp PortScanAnalyzer.h Configuration.cpp ResultSet.cpp ResultSet.h)
add_executable(ITAK ${SOURCE_FILES})