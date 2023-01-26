// Assembler Test Program
//
// Tests:  assignment
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
        stack<int> two;

        // TEST  
        test.push(1);
        two = test;

        // VERIFY
        assert(test.empty() == false);
        assert(test.top() == 1);
        assert(two.empty() == false);
        assert(two.top() == 1);

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<char> test;
        stack<char> two;

        // TEST  
        test.push('a');
        two = test;

        // VERIFY
        assert(test.empty() == false);
        assert(test.top() == 'a');
        assert(two.empty() == false);
        assert(two.top() == 'a');

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<char> test;
        stack<char> two;

        // TEST  
        test.push('b');
        two = test;

        // VERIFY
        assert(test.empty() == false);
        assert(test.top() != 'a');
        assert(two.empty() == false);
        assert(two.top() == 'b');

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<String> test;
        stack<String> two;

        // TEST  
        test.push("abcd");
        two = test;

        // VERIFY
        assert(test.empty() == false);
        assert(test.top() == "abcd");
        assert(two.empty() == false);
        assert(two.top() == "abcd");
        assert(two.top() == test.top());

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<String> test;
        stack<String> two;

        // TEST  
        test.push("12345");
        two = test;

        // VERIFY
        assert(test.empty() == false);
        assert(test.top() == "12345");
        assert(two.empty() == false);
        assert(two.top() == "12345");
        assert(two.top() == test.top());

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<String> test;
        stack<String> two;

        // TEST  
        test.push("12345");
        test.push("abcd");
        two = test;

        // VERIFY
        assert(test.empty() == false);
        assert(test.top() == "abcd");
        assert(two.empty() == false);
        assert(two.top() == "abcd");
        assert(two.top() == test.top());

    }

    {
        //------------------------------------------------------
        // SETUP 
        stack<String> test;
        stack<String> two;

        // TEST  
        test.push("12345 0sda");
        two = test;

        // VERIFY
        assert(test.empty() == false);
        assert(test.top() == "12345 0sda");
        assert(two.empty() == false);
        assert(two.top() == "12345 0sda");
        assert(two.top() == test.top());

    }

    std::cout<< "Done testing assignment constructor." <<std::endl;
}