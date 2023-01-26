// Assembler Test Program
//
// Tests:  default constructor
//
// Implemented by Eddie Lampert for Project #3, Milestone #1
//
#include "stack.hpp"
#include "../string/string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main()
{
    {
        //------------------------------------------------------
        // SETUP 
        stack<int> test;

        // TEST  

        // VERIFY
        assert(test.empty() == true); 

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<int> test;

        // TEST  

        // VERIFY
        assert(test.full() == false); 

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<String> test;

        // TEST  

        // VERIFY
        assert(test.empty() == true); 

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<String> test;

        // TEST  

        // VERIFY
        assert(test.full() == false); 

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<char> test;

        // TEST  

        // VERIFY
        assert(test.empty() == true); 

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<char> test;

        // TEST  

        // VERIFY
        assert(test.full() == false); 

    }

    std::cout<< "Done testing default constructor." <<std::endl;
}