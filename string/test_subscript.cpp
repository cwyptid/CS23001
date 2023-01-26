// String Test Program
//
// Tests:  subscript
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
        char X[5] = {'h','e','l','l','o'};
        String  str(X);

        // TEST
        char result = str[0];
        std::cout << "Subscript Result: " << result << std::endl;

        // VERIFY
        assert(str    == String(X));
        assert(result == 'h');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        char X[5] = {'h','e','l','l','o'};
        String  str(X);

        // TEST
        char result = str[4];
        std::cout << "Subscript Result: " << result << std::endl;

        // VERIFY
        assert(result == 'o');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("he1lo");

        // TEST
        char result = str[2];
        std::cout << "Subscript Result: " << result << std::endl;

        // VERIFY
        assert(str    == "he1lo");
        assert(result == '1');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("hello");

        // TEST
        char result = str[1];
        std::cout << "Subscript Result: " << result << std::endl;

        // VERIFY
        assert(str == "hello");
        assert(result != 'h');
        assert(result == 'e');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("aaaaaaaaaaaskjdgklawioeharlnglskdgm");

        // TEST
        char result = str[12];
        std::cout << "Subscript Result: " << result << std::endl;

        // VERIFY
        assert(str    == "aaaaaaaaaaaskjdgklawioeharlnglskdgm");
        assert(result == 'k');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("lllllllllllllllllll1lllllllllllllllllllllllllllllllllllll");

        // TEST
        char result = str[19];
        std::cout << "Subscript Result: " << result << std::endl;

        // VERIFY
        assert(str    == "lllllllllllllllllll1lllllllllllllllllllllllllllllllllllll");
        assert(result == '1');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("this is a test to see if this thing counts spaces? i wonder how this will work");

        // TEST
        char result = str[4];
        std::cout << "Subscript Result: " << result << std::endl;

        // VERIFY
        assert(str    == "this is a test to see if this thing counts spaces? i wonder how this will work");
        assert(result == ' ');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("thisisatest");

        // TEST
        char result = str[2 + 1];
        std::cout << "Subscript Result: " << result << std::endl;

        // VERIFY
        assert(str    == "thisisatest");
        assert(result == 's');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("hello");

        // TEST
        char result = str[2];
        result = '1';
        str = "he1lo";
        std::cout << "Subscript Result: " << result << std::endl;

        // VERIFY
        assert(str    == "he1lo");
        assert(result == '1');
    }
    
    std::cout << "Done testing subscript." << std::endl;
}