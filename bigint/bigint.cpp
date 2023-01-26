// Eddie Lampert
// CS 23001 Project 1
// bigint.cpp
// October 4 2021

#include "bigint.hpp"

void bigint::zero() { // initializes a bigint to a value of zero
    for (int i = 0; i < CAPACITY; ++i) // iterate through the array, assign a value of 0 to every place in bigint
        bigArr[i] = 0;
}

bigint::bigint() { // default constructor for bigint
    zero(); // utilizes the zero() function 
}

bigint::bigint(int x){ // constructor to initialize a bigint to an int value provided
    zero(); // initializes the value of bigint to zero
    for (int i = 0; i < CAPACITY; ++i){ // iterate through the array
        bigArr[i] = x % 10;
        x /= 10; // array reads right-to-left
    }
}

bigint::bigint(const char x[]){ // constructor to initialize a bigint to a const char[] provided
    zero(); // initializes the value of bigint to zero
    int len = 0; // number of characters in char array x[]
    int k = 0; // holds the value of the char after the int value has been subtracted
    do {
        ++len; // iterates through the char array x[]
    } while (x[len] != '\0'); // while were still in the array, but have not yet hit the null terminator 
    for (int j = len - 1; j >= 0; --j, ++k){ // loops from length-1 to 0, then inserts it into the array from 0 to length-1
        bigArr[k] = int(x[j]) - int('0'); // subtract the int value off the char
    }
}

void bigint::debugPrint(std::ostream& out) const{  // printing every element of bigint array
    out << " | "; // prints "|"
    for (int i = CAPACITY - 1; i >= 0; --i){ // iterates through the array starting from the highend (capacity-1)
        out <<bigArr[i]<< " | "; // prints "|" between each member of the array
    }
}

bool bigint::operator==(const bigint& rhs) const{ // overload operator == to compare if two bigints are equal
    for (int i = 0; i < CAPACITY; ++i){  // iterates through array
        if (bigArr[i] != rhs.bigArr[i]) // if the two bigints are found to be unequal at any place i
        {
            return false; // return that they are not equal
        }
    }
    return true; // return that they are equal
}

std::ostream& operator<<(std::ostream& out, const bigint& rhs){ // overload extraction operator, no more than 80 digits per line
  int u = 1; // used to count lines to 80
  int i = CAPACITY -1; // starting from the highend of the bigint
  while((rhs.bigArr[i] == '\0') || (rhs.bigArr[i] == 0)){ // taking a stream as input, before we hit the null terminator/end of array
    if(i == 0)
      break; // no leading zeros are to be taken in
    --i; // continue decrementing through array 
  }
  for(int c = i; c >= 0; --c){ // starting from the highend, prints the bigint out into the stream
    if(u > 80){
      u = 0;
      out << '\n'; // prints no more than 80 digits per line
    }
    out << rhs.bigArr[c]; // printing digits
    u++;
  }
  return out;
}

std::istream& operator>>(std::istream& in, bigint& rhs){
    char charArray[CAPACITY + 1]; // starting from the highend
    char ch; // temp holder

    for(int i= 0; i < CAPACITY + 1; ++i){ // while we havent gone past the capacity
        in >> ch; // takes first character of input and places in it ch
        if(ch == ';') { // if char is ;, insert null terminator
            charArray[i] = '\0'; //  read in any number of digits until ; is encountered
            break;
        }
        charArray[i] = ch; // adds the char to the array
    }

    rhs = bigint(charArray); // creates a bigint of the array
    return in; // returns the input
}

bigint bigint::operator+(const bigint& rhs) const{ // adds two bigints together
    bigint result; // declare result
    int carryOver = 0; // carrys over digits 

    for(int i =0; i < CAPACITY; ++i){ // iterate through array
        int add = bigArr[i] + rhs.bigArr[i] + carryOver; // adding together both elements of each array at place i

        if(add > 9) // carry 1 over
            carryOver = 1;
        else
            carryOver = 0;
        
        result.bigArr[i] = add%10; // remainder
    }
    return result; // returns the result
}

int bigint::operator[](int i) const{ // returns the i^th digit
    if ((i < 0) || ( i >= CAPACITY)) return 0; // if the i^th digit exists in the array 
    return bigArr[i]; // return the i^th digit
}

bigint bigint::timesDigit(int x) const{ // multiply a bigint and a single digit integer between 0-9
    bigint result; // declare result
    int carryOver = 0; // carry over digits
    int temp = 0; // temp value

    for(int i=0; i < CAPACITY; ++i){ // iterate through array
        temp = (bigArr[i] * x) + temp; // multiplying the array by x, add the carryover digit
        carryOver = temp % 10; // retrieves the least significant digit
        temp /= 10; // retrieve the carryover digit that will be added
        result.bigArr[i] = carryOver; // add the carrover
    }
    return result; // returns the result
}

bigint bigint::times10(int x) const{
    bigint result; // declare result
    for(int i = CAPACITY -1 - x; i >= 0; --i){ // shift until x array is reached
        result.bigArr[x + i] = bigArr[i];
    }
    for(int k = 0; k < x; ++k){ // insert zeroes after shifting to the left
        result.bigArr[k] = 0;
    }
    return result;
}

bigint bigint::operator*(const bigint rhs) const{
    bigint product = 0; // declare product
    bigint temp; // temp holder
    for(int i = 0; i < CAPACITY; ++i){ // iterate through array
        temp = timesDigit(rhs.bigArr[i]); // put the bigint through times_digit, assign to temp holder
        product = product + temp.times10(i); // put the temp through times_10, assign to product
    }
    return product; // return product
}