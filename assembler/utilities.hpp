// Eddie Lampert
// CS 23001 Project 3
// utilities.hpp
// November 22 2021

#ifndef UTILITIES_HPP
#define UTILITIES_HPP
#include<iostream>
#include <fstream>
#include "../string/string.hpp"
#include "stack.hpp"


void toPostfix(std::ifstream& in, std::ostream& out); 
void toAssembly(std::ifstream& in, std::ostream& out);
std::string intToString(int);
std::string getOperator(const std::string& op);
std::string getToken(std::ifstream& in); 

#endif