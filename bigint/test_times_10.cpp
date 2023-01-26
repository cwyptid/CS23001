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
        bi = bi.times10(1);

        // Verify
        assert(bi == 30);
    }
    
    {
      //--------------------------------------------------------
      //Setup fixture

      bigint bi(23);
    
      //Test
      bi = bi.times10(1);

      //Verify
      assert(bi == 230);
    }
    
    {
      //-------------------------------------------------------
      //Setup fixture

      bigint bi(235);

      //Test
      bi = bi.times10(5);

      //Verify
      assert(bi == 23500000);
      
    }

    {
      //----------------------------------------------------
      //Setup fixture
      
      bigint bi(3);
      
      //Test
      bi = bi.times10(0);

      //verify
      assert(bi == 3);
    }

    {
      //----------------------------------------------------
      //Setup fixture
      
      bigint bi(234);
      
      //Test
      bi = bi.times10(2);

      //verify
      assert(bi == 23400);
    }

    {
      //----------------------------------------------------
      //Setup fixture
      
      bigint bi(5);
      
      //Test
      bi = bi.times10(6);

      //verify
      assert(bi == 5000000);
    }

    {
      //----------------------------------------------------
      //Setup fixture
      
      bigint bi(60);
      
      //Test
      bi = bi.times10(3);

      //verify
      assert(bi == 60000);
    }

    std::cout << "Done testing times_10" << std::endl;
    return 0;
}

