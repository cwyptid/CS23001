// String Test Program
//
// Tests:  input
//
// Implemented by Eddie Lampert for Project #2, Milestone #1
//
#include "string.hpp"
#include <cassert>
#include <iostream>
#include <fstream>

//===========================================================================
int main() 
{
    std::ifstream inFile;
    inFile.open("input_test.txt");
    
    String one;
    while(inFile >> one){
        std::cout << one << std::endl;
    }
    
    inFile.close();
    std::cout << "Done testing input." << std::endl;
}