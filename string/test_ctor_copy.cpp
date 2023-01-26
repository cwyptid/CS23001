// String Test Program
//
// Tests:  copy constructor
//
// Implemented by Eddie Lampert for Project #2, Milestone #2
//
#include "string.hpp"
#include <cassert>
#include <iostream>
 
//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1 = "hello",
               str2 = "world";

        // TEST
        str1 = str2;

        // VERIFY
        assert(str1 == "world");
        assert(str2 == str1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str1 = 'a',
               str2 = 'b';

        // TEST
        str1 = str2;

        // VERIFY
        assert(str1 == 'b');
        assert(str2 == 'b');
    }

    
    std::cout << "Done testing copy constructor." << std::endl;
    return 0;
}

