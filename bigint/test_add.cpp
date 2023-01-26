// bigint Test Program
//
// Tests:  int constructor, uses ==
//
// Implemented by Eddie Lampert for Lab Assignment #3
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
      //------------------------------------------------------
      // Setup fixture (0+0=0) #1
      bigint left(0);
      bigint right(0);
      bigint result;

      // Test 
       result = left + right;

      // Verify
      assert(left   == 0);
      assert(right  == 0);
      assert(result == 0);
    }

    {
      //------------------------------------------------------
      // Setup fixture (1+0=1) #2
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }

    {
      //------------------------------------------------------
      // Setup fixture (0+1=1) #3
      bigint left(0);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 0);
      assert(right  == 1);
      assert(result == 1);
    }

    {
      //------------------------------------------------------
      // Setup fixture (6+4=10) #4
      bigint left(6);
      bigint right(4);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 6);
      assert(right  == 4);
      assert(result == 10);
    }

    {
      //------------------------------------------------------
      // Setup fixture (11+5=16) #5
      bigint left(11);
      bigint right(5);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 11);
      assert(right  == 5);
      assert(result == 16);
    }

    {
      //------------------------------------------------------
      // Setup fixture (4+10=14) #6
      bigint left(4);
      bigint right(10);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 4);
      assert(right  == 10);
      assert(result == 14);
    }

    {
      //------------------------------------------------------
      // Setup fixture (11+10=21) #7
      bigint left(11);
      bigint right(10);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 11);
      assert(right  == 10);
      assert(result == 21);
    }

    {
      //------------------------------------------------------
      // Setup fixture (101+2=103) #8
      bigint left("101");
      bigint right("2");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "101");
      assert(right  == "2");
      assert(result == "103");
    }

    {
      //------------------------------------------------------
      // Setup fixture (5+107=112) #9
      bigint left(5);
      bigint right(107);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 5);
      assert(right  == 107);
      assert(result == 112);
    }

    {
      //------------------------------------------------------
      // Setup fixture (20+110=130) #10
      bigint left(20);
      bigint right(110);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 20);
      assert(right  == 110);
      assert(result == 130);
    }

    {
      //------------------------------------------------------
      // Setup fixture (115+10=125) #11
      bigint left(115);
      bigint right(10);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 115);
      assert(right  == 10);
      assert(result == 125);
    }

    {
      //------------------------------------------------------
      // Setup fixture (7600+4=7604) #12
      bigint left(7600);
      bigint right(4);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 7600);
      assert(right  == 4);
      assert(result == 7604);
    }

    {
      //------------------------------------------------------
      // Setup fixture (5+8655=8660) #13
      bigint left(5);
      bigint right(8655);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 5);
      assert(right  == 8655);
      assert(result == 8660);
    }

    {
      //------------------------------------------------------
      // Setup fixture (300+3700=4000) #14
      bigint left(300);
      bigint right(3700);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 300);
      assert(right  == 3700);
      assert(result == 4000);
    }

    {
      //------------------------------------------------------
      // Setup fixture (4980+20=5000) #15
      bigint left(4980);
      bigint right(20);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 4980);
      assert(right  == 20);
      assert(result == 5000);
    }

    {
      //------------------------------------------------------
      // Setup fixture (1+59999=60000) #16
      bigint left(1);
      bigint right(59999);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 59999);
      assert(result == 60000);
    }

    {
      //------------------------------------------------------
      // Setup fixture (10000+5000000=5010000) #17
      bigint left(10000);
      bigint right(5000000);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 10000);
      assert(right  == 5000000);
      assert(result == 5010000);
    }

    {
      //------------------------------------------------------
      // Setup fixture (999999999+1=1000000000) #18
      bigint left(999999999);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 999999999);
      assert(right  == 1);
      assert(result == 1000000000);
    }

    {
      //------------------------------------------------------
      // Setup fixture (1+9999999999=1000000000) #19
      bigint left(1);
      bigint right(999999999);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 999999999);
      assert(result == 1000000000);
    }

    {
      //------------------------------------------------------
      // Setup fixture (55555+11111=66666) #20
      bigint left(55555);
      bigint right(11111);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 55555);
      assert(right  == 11111);
      assert(result == 66666);
    }

    {
      //------------------------------------------------------
      // Setup fixture (200+111111=111311) #21
      bigint left(200);
      bigint right(111111);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 200);
      assert(right  == 111111);
      assert(result == 111311);
    }

    {
      //------------------------------------------------------
      // Setup fixture (CAPACITY+200=400) #22
      bigint left(CAPACITY);
      bigint right(200);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == CAPACITY);
      assert(right  == 200);
      assert(result == 400);
    }

    {
      //------------------------------------------------------
      // Setup fixture (200+CAPACITY=400) #23
      bigint left(200);
      bigint right(CAPACITY);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 200);
      assert(right  == CAPACITY);
      assert(result == 400);
    }
  
    {
      //------------------------------------------------------
      // Setup fixture (10000000+1=10000001) #24
      bigint left(10000000);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 10000000);
      assert(right  == 1);
      assert(result == 10000001);
    }
    
    
    {
      //------------------------------------------------------
      // Setup fixture (666666666+1=666666667) #25
      bigint left(666666666);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 666666666);
      assert(right  == 1);
      assert(result == 666666667);
    }
    
    std::cout << "Done with testing addition." << std::endl;
    return 0;
}

