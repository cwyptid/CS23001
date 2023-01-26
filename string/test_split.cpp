// String Test Program
//
// Tests:  split
//
// Implemented by Eddie Lampert for Project #2, Milestone #3
//
#include "string.hpp"
#include <cassert>
#include <iostream>
#include <vector>

//===========================================================================
int main() 
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("abc ef gh");
    
        // TEST
        str.split(' ');
        std::cout << "-----Split test 1 -----------------------------" << std::endl;
        std::cout << str.split(' ')[0] << std::endl;
        std::cout << str.split(' ')[1] << std::endl;
        std::cout << str.split(' ')[2] << std::endl;

        // VERIFY
        assert(str.split(' ')[0] == "abc");
        assert(str.split(' ')[1] == "ef");
        assert(str.split(' ')[2] == "gh");

    }
  
    {
        //------------------------------------------------------
        // SETUP FIXTURE                                                                    
        String str("-a--b-");

        // TEST                                                                     
        str.split('-');
        std:: cout << "-----Split test 2 ------------------------------" << std::endl;
        std::cout << "'" <<  str.split('-')[0]<< "'" << std::endl;
        std::cout << "'" <<  str.split('-')[1]<< "'" << std::endl;
        std::cout << "'" <<  str.split('-')[2]<< "'" << std::endl;
        std::cout << "'" <<  str.split('-')[3]<< "'" << std::endl;
        std::cout << "'" <<  str.split('-')[4]<< "'" << std::endl;

        // VERIFY                                                                   
        assert(str.split('-')[0] == "");
        assert(str.split('-')[1] == "a");
        assert(str.split('-')[2] == "");
        assert(str.split('-')[3] == "b");
        assert(str.split('-')[4] == "");

    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE 
        String str("-----");

        // TEST
        str.split('-');
        std:: cout << "-----Split test 3 ------------------------------" << std::endl;
        std::cout << "'" <<  str.split('-')[0]<< "'" << std::endl;
        std::cout << "'" <<  str.split('-')[1]<< "'" << std::endl;
        std::cout << "'" <<  str.split('-')[2]<< "'" << std::endl;
        std::cout << "'" <<  str.split('-')[3]<< "'" << std::endl;
        std::cout << "'" <<  str.split('-')[4]<< "'" << std::endl;

        // VERIFY
        assert(str.split('-')[0] == "");
        assert(str.split('-')[1] == "");
        assert(str.split('-')[2] == "");
        assert(str.split('-')[3] == "");
        assert(str.split('-')[4] == "");

    }


    {
        //------------------------------------------------------
        // SETUP FIXTURE 
        String str;

        // TEST
        str.split('-');
        std:: cout << "-----Split test 3 ------------------------------" << std::endl;
        std::cout << "'" <<  str.split('-')[0]<< "'" << std::endl;

        // VERIFY
        assert(str.split('-')[0] == "");

    }

    std::cout << "Done testing split." << std::endl;

}