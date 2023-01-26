// String Test Program
//
// Tests:  char constructor
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
        String  str('X');

        // VERIFY
        assert(str == 'X');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('A');

        // VERIFY
        assert(str == "A");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('a');

        // VERIFY
        assert(str == "a");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('Z');

        // VERIFY
        assert(str == 'Z');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str(' ');

        // VERIFY
        assert(str == ' ');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('1');

        // VERIFY
        assert(str == '1');
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  strOne('a');
        std::cout << "Length: " << strOne.length() << std::endl;
        std::cout << "Capacity: " << strOne.capacity() << std::endl;
        String strTwo("a");
        std::cout << "Length: " << strTwo.length() << std::endl;
        std::cout << "Capacity: " << strTwo.capacity() << std::endl;
        
        // VERIFY
        assert(strOne == strTwo);
    }

    std::cout << "Done testing char constructor." << std::endl;

}