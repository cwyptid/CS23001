// String Test Program
//
// Tests:  default constructor
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
        String  str;

        // VERIFY
        assert(str[0] == '\0');
    }
    
  std::cout << "Done testing default constructor." << std::endl;
}
