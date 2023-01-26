// String Test Program
//
// Tests:  length and capacity
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
        String testOne = "abcd1423";
        
        // TEST
        int resultOne = testOne.length();
        int resultTwo = testOne.capacity();
        
        // VERIFY
        std::cout << "Length: " << resultOne << std::endl;
        std::cout << "Capacity: " << resultTwo << std::endl;
        assert(resultOne == 8);
        assert(resultTwo == 8);

    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String testOne;
        
        // TEST
        int resultOne = testOne.length();
        int resultTwo = testOne.capacity();
        
        // VERIFY
        std::cout << "Length: " << resultOne << std::endl;
        std::cout << "Capacity: " << resultTwo << std::endl;
        assert(resultOne == 0);
        assert(resultTwo == 0);

    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String testOne = "abcd1423";
        
        // TEST
        int resultOne = testOne.length();
        int resultTwo = testOne.capacity();
        
        // VERIFY
        std::cout << "Length: " << resultOne << std::endl;
        std::cout << "Capacity: " << resultTwo << std::endl;
        assert(resultOne == 8);
        assert(resultTwo == 8);

    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String testOne = "ax";
    
        // TEST
        int resultOne = testOne.length();
        int resultTwo = testOne.capacity();
        
        // VERIFY
        std::cout << "Length: " << resultOne << std::endl;
        std::cout << "Capacity: " << resultTwo << std::endl;
        assert(resultOne == 2);
        assert(resultTwo == 2);

    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String testOne = 
        "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaalksjlkgdljdgjsaldjgksagjaskldgjskldjglsakdgksdklgjlkasjdgljaslgdjksdgajlsdjgjlksajdgljlasdgjlksdgklajg";
        
        // TEST
        int resultOne = testOne.length();
        int resultTwo = testOne.capacity();
        
        // VERIFY
        std::cout << "Length: " << resultOne << std::endl;
        std::cout << "Capacity: " << resultTwo << std::endl;
        assert(resultOne == 179);
        assert(resultTwo == 179);

    }

    std::cout << "Done testing length and capacity." << std::endl;
}