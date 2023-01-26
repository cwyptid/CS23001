// String Test Program
//
// Tests:  find char
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
        String one = "abcde";
        char two = 'd';
        
        // TEST
        int result = one.findch(0, two); 
        std::cout << "FindChar Result: " << result << std::endl;
        
        // VERIFY
        assert(result == 3);
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "abcde";
        char two = 'd';
        
        // TEST
        int result = one.findch(3, two); 
        std::cout << "FindChar Result: " << result << std::endl;
        
        // VERIFY
        assert(result == 3);
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "abcde";
        char two = 'c';
        
        // TEST
        int result = one.findch(0, two); 
        std::cout << "FindChar Result: " << result << std::endl;
        
        // VERIFY
        assert(result == 2);
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "abcde1234";
        char two = '3';
        
        // TEST
        int result = one.findch(0, two); 
        std::cout << "FindChar Result: " << result << std::endl;
        
        // VERIFY
        assert(result == 7);
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "bcde1234";
        
        // TEST
        int result = one.findch(0, 'a'); 
        std::cout << "FindChar Result: " << result << std::endl;
        
        // VERIFY
        assert(result == -1); // not found
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "hello-world-!";
        
        // TEST
        int result = one.findch(0, '-'); 
        int resultTwo = one.findch(result + 1, '-');
        std::cout << "FindChar Result: " << result << std::endl;
        std::cout << "FindChar Result #2: " << resultTwo << std::endl; 

        // VERIFY
        assert(result == 5);
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "sestsdfdsfsdfsdfsdfsdf";
        
        // TEST
        int result = one.findch(0, 'a'); 
        std::cout << "FindChar Result: " << result << std::endl;
        
        // VERIFY
        assert(result == -1); // not found
    
    }

    std::cout << "Done testing findchar." << std::endl;
}