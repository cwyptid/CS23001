// Eddie Lampert
// CS 23001 Lab #6
// object_construction.cpp
// October 5 2021

#include "object_construction.hpp"

object::object(){
    std::cout << "CALLED - default constructor!" << std::endl;
}

object::object(const object& x){
    std::cout << "CALLED - copy constructor!" << std::endl;
}

object object::operator=(const object& rhs){
    object temp;
    std::cout << "CALLED - assignment operator!" << std::endl;
    return temp;
}

object::~object(){
    std::cout << "CALLED - destructor!" << std::endl;
}