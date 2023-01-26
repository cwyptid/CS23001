// Eddie Lampert
// CS 23001 Lab #6
// object_construction.hpp
// October 5 2021

#include <iostream>

#ifndef object_construction
#define object_construction

class object{
    public:
        object(); // default constructor 
        object(const object&); // copy constructor
        object operator=(const object&) ; // assignment 
        ~object(); // destructor
    
    private:
};

#endif