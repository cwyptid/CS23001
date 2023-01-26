// String Test Program
//
// Tests:  <
//
// Implemented by Eddie Lampert for Project #2, Milestone #1
//
#include "string.hpp"
#include <cassert>

//===========================================================================
int main() 
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = 'a';
        String two = 'b';
        
        // TEST
        bool result = one < two;
        std::cout << "LessThan Result: " << result << std::endl;
        
        // VERIFY
        assert(result == true);
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = 'a';
        String two = 'b';
        
        // TEST
        bool result = two < one;
        std::cout << "LessThan Result: " << result << std::endl;
        
        // VERIFY
        assert(result == false);
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "abcd";
        String two = "bcde";
        
        // TEST
        bool result = two < one;
        std::cout << "LessThan Result: " << result << std::endl;
        
        // VERIFY
        assert(result == false);
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one;
        String two = 'b';
        
        // TEST
        bool result = one < two;
        std::cout << "LessThan Result: " << result << std::endl;
        
        // VERIFY
        assert(result == true);
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one;
        String two = "bcdasdwrwasws";
        
        // TEST
        bool result = one < two;
        std::cout << "LessThan Result: " << result << std::endl;
        
        // VERIFY
        assert(result == true);
    
    }
    
    std::cout << "Done testing <." << std::endl;
}