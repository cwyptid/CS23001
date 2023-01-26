// bigint Test Program
//
// Tests:  multiply, uses ==
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
        // Setup fixture #1 (0*0=0)
        bigint left(0);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture #2 (1*0=0)
        bigint left(1);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 1);
        assert(right  == 0);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture #3 (0*1=0)
        bigint left(0);
        bigint right(1);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 1);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture #4 (123*56=6888)
        bigint left(123);
        bigint right(56);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  123);
        assert(right  ==   56);
        assert(result == 6888);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture #5 (65*321=20865)
        bigint left(65);
        bigint right(321);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==    65);
        assert(right  ==   321);
        assert(result == 20865);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture #6 (9999*2=19998)
        bigint left(9999);
        bigint right(2);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  9999);
        assert(right  ==     2);
        assert(result == 19998);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture #7 (2*999999=1999998)
        bigint left(2);
        bigint right(999999);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==       2);
        assert(right  ==  999999);
        assert(result == 1999998);
    }

    {
        //------------------------------------------------------
        // Setup fixture #8 (99*99=9801)
        bigint left(99);
        bigint right(99);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   ==  99);
        assert(right  ==  99);
        assert(result ==  9801);
    }


    {
        //------------------------------------------------------
        // Setup fixture #9 (2222*888888888888888888888888888888888888=1975111111111111111111111111111111109136)
        bigint left("2222");
        bigint right("888888888888888888888888888888888888");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "2222");
        assert(right  == "888888888888888888888888888888888888");
        assert(result == "1975111111111111111111111111111111109136");
    }
    
    {
        //------------------------------------------------------
        // Setup fixture #10 (777777777777777777777777777777777777777777777*333333=259258999999999999999999999999999999999999999740741)
        bigint left("777777777777777777777777777777777777777777777");
        bigint right("333333");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "777777777777777777777777777777777777777777777");
        assert(right  == "333333");
        assert(result == "259258999999999999999999999999999999999999999740741");
    }
    
    {
        //------------------------------------------------------
        // Setup fixture #11 (111111111111111111111111111111111111111111*999999999999999999999999999999999999999999=111111111111111111111111111111111111111110888888888888888888888888888888888888888889)
        bigint left("111111111111111111111111111111111111111111");
        bigint right("999999999999999999999999999999999999999999");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "111111111111111111111111111111111111111111");
        assert(right  == "999999999999999999999999999999999999999999");
        assert(result == "111111111111111111111111111111111111111110888888888888888888888888888888888888888889");
    }

    {
        //------------------------------------------------------
        // Setup fixture #12 (CAPACITY*2=400)
        bigint left(CAPACITY);
        bigint right(2);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == CAPACITY);
        assert(right  == 2);
        assert(result == 400);
    }

    {
        //------------------------------------------------------
        // Setup fixture #13 (2*CAPACITY=400)
        bigint left(2);
        bigint right(CAPACITY);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 2);
        assert(right  == CAPACITY);
        assert(result == 400);
    }

    {
        //------------------------------------------------------
        // Setup fixture #14 (1*0=0)
        bigint left("1");
        bigint right("0");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "1");
        assert(right  == "0");
        assert(result == "0");
    }

    {

    
        //------------------------------------------------------
        // Setup fixture #15(0*1=0)
        bigint left("0");
        bigint right("1");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "0");
        assert(right  == "1");
        assert(result == "0");
    }

    {

    
        //------------------------------------------------------
        // Setup fixture #16 (0*0=0)
        bigint left("0");
        bigint right("0");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "0");
        assert(right  == "0");
        assert(result == "0");
    }

    {
    
        //------------------------------------------------------
        // Setup fixture #17 (2*4=8)
        bigint left("2");
        bigint right(4);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "2");
        assert(right  == 4);
        assert(result == 8);
    }

    {

    
        //------------------------------------------------------
        // Setup fixture #18 (1000000000*0=0)
        bigint left(1000000000);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 1000000000);
        assert(right  == 0);
        assert(result == 0);
    }
    
    {

    
        //------------------------------------------------------
        // Setup fixture #19 (69724020*2=139448040)
        bigint left(69724020);
        bigint right(2);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 69724020);
        assert(right  == 2);
        assert(result == 139448040);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture #20 (1*888888888888888888888888888888888888=888888888888888888888888888888888888)
        bigint left("1");
        bigint right("888888888888888888888888888888888888");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "1");
        assert(right  == "888888888888888888888888888888888888");
        assert(result == "888888888888888888888888888888888888");
    }

    {

    
        //------------------------------------------------------
        // Setup fixture #21 (69724020*2=139448040)
        bigint left("69724020");
        bigint right("2");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "69724020");
        assert(right  == "2");
        assert(result == "139448040");
    }

    {
        //------------------------------------------------------
        // Setup fixture #22 (2222*8888=19749136)
        bigint left(2222);
        bigint right(8888);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 2222);
        assert(right  == 8888);
        assert(result == 19749136);
    }

    {
        //------------------------------------------------------
        // Setup fixture #23 (1*CAPACITY=200)
        bigint left("1");
        bigint right(CAPACITY);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "1");
        assert(right  == CAPACITY);
        assert(result == 200);
    }

    {
        //------------------------------------------------------
        // Setup fixture #24 (99*99=9801)
        bigint left("99");
        bigint right("99");
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   ==  "99");
        assert(right  ==  "99");
        assert(result ==  "9801");
    }

    {
        //------------------------------------------------------
        // Setup fixture #25 (1234*100=123400)
        bigint left(1234);
        bigint right(100);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 1234);
        assert(right  == 100);
        assert(result == 123400);
    }


    std::cout << "Done testing multiply" << std::endl;
    return 0;
}
