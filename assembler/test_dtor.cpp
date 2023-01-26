// Assembler Test Program
//
// Tests:  destructor
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
        test.~stack();     

        // VERIFY
        assert(test.empty() == true);

    }
    
    {
        //------------------------------------------------------
        // SETUP 
        stack<int> test;

        // TEST
        test.push(1); 
        test.~stack();      

        // VERIFY
        assert(test.empty() == true);

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<int> test;

        // TEST
        test.push(1);
        test.push(2); 
        test.~stack();      

        // VERIFY
        assert(test.empty() == true);

    }
    
    {
        //------------------------------------------------------
        // SETUP 
        stack<char> test;

        // TEST
        test.push('a'); 
        test.~stack();   

        // VERIFY
        assert(test.empty() == true);

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<String> test;

        // TEST
        test.push("Abcd");
        test.push("efgh"); 
        test.~stack();    

        // VERIFY
        assert(test.empty() == true);

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<String> test;

        // TEST
        test.push("Abcd");
        test.push("efgh");
        test.push("123456"); 
        test.~stack();   

        // VERIFY
        assert(test.empty() == true);

    }

    std::cout<< "Done testing destructor." <<std::endl;
}