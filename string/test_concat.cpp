// String Test Program
//
// Tests:  concatenation, uses +/+=
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
        String  strOne("abcde");
        String strTwo("12345");

        // TEST
        String result = strOne + strTwo;
        std::cout << "Concat Result: " << result << std::endl;

        // VERIFY
        assert(strOne    == "abcde");
        assert(strTwo == "12345");
        assert(result == "abcde12345");
    }


    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  strOne("xyz");
        String strTwo;

        // TEST
        String result = strOne + strTwo;
        std::cout << "Concat Result: " << result << std::endl;

        // VERIFY
        assert(strOne    == "xyz");
        assert(strTwo == "");
        assert(result == "xyz");
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  strOne("thisis");
        String strTwo("atestcase");

        // TEST
        String result = strOne + strTwo;
        std::cout << "Concat Result: " << result << std::endl;

        // VERIFY
        assert(strOne    == "thisis");
        assert(strTwo == "atestcase");
        assert(result == "thisisatestcase");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  strOne("a");
        String strTwo("b");

        // TEST
        String result = strOne + strTwo;
        std::cout << "Concat Result: " << result << std::endl;

        // VERIFY
        assert(strOne    == "a");
        assert(strTwo == "b");
        assert(result == "ab");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  strOne("does this");
        String strTwo(" work?");

        // TEST
        String result = strOne + strTwo;
        std::cout << "Concat Result: " << result << std::endl;

        // VERIFY
        assert(strOne    == "does this");
        assert(strTwo == " work?");
        assert(result == "does this work?");
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  strOne("aaa aaa aaa aa a aaa aaa aa");
        String strTwo("!!!!!");

        // TEST
        String result = strOne + strTwo;
        std::cout << "Concat Result: " << result << std::endl;

        // VERIFY
        assert(strOne    == "aaa aaa aaa aa a aaa aaa aa");
        assert(strTwo == "!!!!!");
        assert(result == "aaa aaa aaa aa a aaa aaa aa!!!!!");
    }

    std::cout << "Done testing concatenation." << std::endl;
}