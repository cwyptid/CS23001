// Eddie Lampert
// CS 23001 Lab #6
// object_test.cpp
// October 5 2021

#include "object_construction.cpp"

void test_C_Ctor(object){

}

int main(){
    object number1;
    object number2;

    number1 = number2;

    test_C_Ctor(number1); // using copy constructor

    return 0;
}
