// Eddie Lampert
// CS 23001 Project 3
// postfix.cpp
// November 15 2021

#include "../string/string.hpp"
#include "utilities.hpp"
#include "stack.hpp"
#include <cstdlib>
#include <fstream>
#include <iostream>

int main(int argc, char const* argv[])
{
    if (argc < 2) {
        std::cerr << "No input file found. Please supply a file at the command line." << std::endl;
    }

    std::ifstream infixFile(argv[1]);

    if (!infixFile) {
        std::cerr << "File could not be opened. Please try again." << std::endl;
    }

    std::ofstream postfixFile(argv[2]);

    if (!postfixFile) {
        toPostfix(infixFile, std::cout);
    }

    toPostfix(infixFile, postfixFile);

    infixFile.close();
    postfixFile.close();

    return 0;
}