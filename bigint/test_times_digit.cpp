// bigint Test Program
//
// Tests:  times_10, uses ==
//
// Implemented by Eddie Lampert for Project #1, Milestone #3
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3); 
    }

    {
      //--------------------------------------------------------
      //Setup fixture
      bigint bi(4);

      //Test
      bi = bi.timesDigit(2);
      
      //Verify
      assert(bi == 8);

    }


    {
      //-------------------------------------------------------
      //Setup fixture
      bigint bi(5);
      
      //Test
      bi = bi.timesDigit(8);

      //Verify
      assert(bi == 40);
    }

    {
      //-------------------------------------------------------
      //Setup fixture
      bigint bi(9);
      
      //Test
      bi = bi.timesDigit(8);

      //Verify
      assert(bi == 72);
    }

    {
      //-------------------------------------------------------
      //Setup fixture
      bigint bi(9);
      
      //Test
      bi = bi.timesDigit(9);

      //Verify
      assert(bi == 81);
    }

    {
      //-------------------------------------------------------
      //Setup fixture
      bigint bi(4);
      
      //Test
      bi = bi.timesDigit(5);

      //Verify
      assert(bi == 20);
    }

    {
      //-------------------------------------------------------
      //Setup fixture
      bigint bi(6);
      
      //Test
      bi = bi.timesDigit(6);

      //Verify
      assert(bi == 36);
    }
    
    std::cout << "Done testing bigint * digit" << std::endl;
    return 0;
}

