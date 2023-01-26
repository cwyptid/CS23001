// Eddie Lampert
// CS 23001 Project 1
// add.cpp
// October 4 2021

#include <iostream> 
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream in("data1-1.txt");    // define stream for input
    if(!in) {                           // ensure it opened correctly
        std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
        exit(1);
    }

    bigint int1, int2, int3;
    in >> int1;
    in >> int2;

    while(!in.eof()){
      std::cout << "bigint #1: " << int1 << '\n'; // printing the first bigint
      std::cout << "bigint #2: " << int2 << '\n'; // printing the second bigint

      int3 = int1 + int2;

      std::cout << "bigint #1 + bigint #2 = " << int3 << '\n' << '\n'; // printing the result, third bigint

      in >> int1;
      in >> int2;
    }    

    in.close();
    return 0;
    
}

