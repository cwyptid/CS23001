// String Test Program
//
// Tests:  substring
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
        String one = "gabc";
        String result = one.substr(0,0);

        // TEST
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;

        // VERIFY
        assert(one.substr(0,0) == "g");

    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "data test";
        String result = one.substr(4,8);

        // TEST
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;

        // VERIFY
        assert(one.substr(4,8) == " test");

    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "data test";
        String result = one.substr(2,6);

        // TEST
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;

        // VERIFY
        assert(one.substr(2,6) == "ta te");

    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "adsfegfrhgtldjfejalasdasd";
        String result = one.substr(17,18);

        // TEST
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;

        // VERIFY
        assert(one.substr(17,18) == "al");

    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = 'g';
        String result = one.substr(0,0);

        // TEST
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;

        // VERIFY
        assert(one.substr(0,0) == "g");

    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one("g");
        String result = one.substr(0,0);

        // TEST
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;

        // VERIFY
        assert(result == "g");

    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "agb";
        std::cout << "Starting String length: " << one.length() << " and cap: " << one.capacity() << std::endl;
        std::cout << "String One at [0]: " << one[0] << std::endl;

        // TEST
        String result = one.substr(0,0);
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;

        // VERIFY
        assert(result == "a");
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "gbc";
        String result = one.substr(0,0);

        // TEST
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;

        // VERIFY
        assert(one.substr(0,0) == "g"); 
        assert(one.substr(0,0) == "g");

    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "gba";
        String result = one.substr(1,1);
        
        // TEST
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;

        // VERIFY
        assert(result == "b");

    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "agb";

        // TEST
        String result = one.substr(0,3);
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;
        
        // VERIFY
        assert(result == "agb");
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "gagbcegfe";

        // TEST
        String result = one.substr(2,7);
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;

        // VERIFY
        assert(result == "gbcegf");
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "gagbcegfe";
        
        // TEST
        String result = one.substr(2,8);
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;
        
        // VERIFY
        assert(result == "gbcegfe");
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "hbdfghijks";

        // TEST
        String result = one.substr(2,5);
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;

        // VERIFY
        assert(result == "dfgh");
    
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String one = "gagbcdgfe";

        // TEST
        String result = one.substr(2,5);
        std::cout << "String length: " << result.length() << std::endl;
        std::cout << "String Capacity: " << result.capacity() << std::endl;
        std::cout << "Substr Result: " << result << std::endl;

        // VERIFY
        assert(result == "gbcd");
    
    }

    std::cout << "Done testing substring." << std::endl;
}