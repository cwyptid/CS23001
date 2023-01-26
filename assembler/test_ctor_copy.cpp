// Assembler Test Program
//
// Tests:  copy constructor
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
        stack<int> copyTest(test);

        // VERIFY
        assert(test.top() == copyTest.top()); 

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<char> test;

        // TEST  
        test.push('a');
        stack<char> copyTest(test);

        // VERIFY
        assert(test.top() == copyTest.top()); 

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<char> test;

        // TEST  
        test.push('b');
        test.push('a');
        stack<char> copyTest(test);

        // VERIFY
        assert(test.top() == copyTest.top()); 

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<int> test;

        // TEST  
        test.push(10000);
        test.push(2);
        stack<int> copyTest(test);

        // VERIFY
        assert(test.top() == copyTest.top()); 

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<String> test;

        // TEST  
        test.push("Abc");
        test.push("def");
        stack<String> copyTest(test);

        // VERIFY
        assert(test.top() == copyTest.top()); 

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<String> test;

        // TEST  
        test.push("Abc");
        test.push("def");
        test.push("1234224");
        stack<String> copyTest(test);

        // VERIFY
        assert(test.top() == copyTest.top()); 

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<String> test;

        // TEST  
        test.push("Abc");
        test.push("def");
        test.push("1234224");
        test.push("999999");
        stack<String> copyTest(test);

        // VERIFY
        assert(test.top() == copyTest.top()); 

    }

    std::cout<< "Done testing copy constructor." <<std::endl;
}
