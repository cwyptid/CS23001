// String Test Program
//
// Tests:  char array constructor
//
// Implemented by Eddie Lampert for Project #2, Milestone #1
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

        // TEST
        //char x[5] = {'a','b','c','d','e'};
        String  str("abcde");

        // VERIFY
        assert(str == "abcde");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  a("g");
        String b('g');

        // VERIFY
        assert(a == b);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char x[8] = {'a','b','c','d','e','1','2','9'};
        String  str(x);

        // VERIFY
        assert(str == String(x));
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("a");

        // VERIFY
        assert(str[0] == 'a');
        assert(str[1] == '\0');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String str("abc");

        // VERIFY
        assert(str[0] == 'a');
        assert(str[1] == 'b');
        assert(str[2] == 'c');
        assert(str[3] == '\0');
    }

    std::cout << "Done testing char array constructor." << std::endl;
    
}