// Assembler Test Program
//
// Tests:  push and pop
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
        test.push(1);

        // VERIFY
        assert(test.empty() == false);
        assert(test.top() == 1);

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<int> test;

        // TEST  
        test.push(1);
        test.pop();

        // VERIFY
        assert(test.empty() == true);

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<char> test;

        // TEST  
        test.push('a');
        test.pop();

        // VERIFY
        assert(test.empty() == true);

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<char> test;

        // TEST  
        test.push('c');
        test.push('a');
        test.pop();

        // VERIFY
        assert(test.empty() == false);
        assert(test.top() == 'c');

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<String> test;

        // TEST  
        test.push("Abc");
        test.pop();

        // VERIFY
        assert(test.empty() == true);

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<String> test;

        // TEST  
        test.push("Abc");
        test.push("123");
        test.pop();

        // VERIFY
        assert(test.empty() != true);
        assert(test.top() == "Abc");

    }

    std::cout<< "Done testing push and pop." <<std::endl;
}
