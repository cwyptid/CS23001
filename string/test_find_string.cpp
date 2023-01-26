// String Test Program
//
// Tests:  find string
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
        String one = "1aapetest";
        
        // TEST
        int result = one.findstr(0, "ape"); 
        std::cout << "FindString Result: " << result << std::endl;
        
        // VERIFY
        assert(one.findstr(0, "ape") == 2);
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "123apetest";
        
        // TEST
        int result = one.findstr(0, "ape"); 
        std::cout << "FindString Result: " << result << std::endl;
        
        // VERIFY
        assert(one.findstr(0, "ape") == 3);
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "pinepinetrees";
        
        // TEST
        int result = one.findstr(0, "pine"); 
        std::cout << "FindString Result: " << result << std::endl;
        
        // VERIFY
        assert(one.findstr(0, "pine") == 0);
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "pinepinetrees";
        
        // TEST
        int result = one.findstr(0, "pintglass"); 
        std::cout << "FindString Result: " << result << std::endl;
        
        // VERIFY
        assert(one.findstr(0, "pintglass") == -1);
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "pinetrees";
        
        // TEST
        int result = one.findstr(0, "pine"); 
        std::cout << "FindString Result: " << result << std::endl;
        
        // VERIFY
        assert(one.findstr(0, "pine") == 0);
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "ofapejkluy";
        
        // TEST
        int result = one.findstr(0, "ape"); 
        std::cout << "FindString Result: " << result << std::endl;
        
        // VERIFY
        assert(one.findstr(0, "ape") == 2);
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
       String one = "helloworld";
        String two = "world";
        
        // TEST
        int result = one.findstr(0, two); 
        std::cout << "FindString Result: " << result << std::endl;
        
        // VERIFY
        assert(result == 5);
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "helloworld";
        String two = "hello";
        
        // TEST
        int result = one.findstr(0, two); 
        std::cout << "FindString Result: " << result << std::endl;
        
        // VERIFY
        assert(result == 0);
    
    }  

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "helloworld";
        String two = "rld";
        
        // TEST
        int result = one.findstr(3, two); 
        std::cout << "FindString Result: " << result << std::endl;
        
        // VERIFY
        assert(result == 7);
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "01apefgh";
        String two = "ape";
        
        // TEST
        int result = one.findstr(2, two);
        std::cout << "FindString Result: " << result << std::endl;
        
        // VERIFY
        assert(result == 2);
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String a = "cdpapefgh";
        
        // TEST
        int result = a.findstr(0, "ape"); 
        std::cout << "FindString Result: " << result << std::endl;
        
        // VERIFY
        assert(a.findstr(0, "ape") == 3);
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String a = "apeapefgh";
        
        // TEST
        int result = a.findstr(3, "ape"); 
        std::cout << "FindString Result: " << result << std::endl;
        
        // VERIFY
        assert(a.findstr(3, "ape") == 3);
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "012345ape6789efgh";
        
        // TEST
        int result = one.findstr(11, "ape"); 
        std::cout << "FindString Result: " << result << std::endl;
        
        // VERIFY
        assert(result == -1);
    
    }

    std::cout << "Done testing findstring." << std::endl;
}