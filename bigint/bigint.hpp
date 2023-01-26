// Eddie Lampert
// CS 23001 Project 1
// bigint.hpp
// October 4 2021

#ifndef BIGINT_HPP_
#define BIGINT_HPP_

#include <iostream>

const int CAPACITY = 200;

class bigint {
public:
	bigint(); // default constructor for bigint
	bigint(int); // constructor to initialize a bigint to an int value provided
	bigint(const char[]); // constructor to initialize a bigint to a const char[] provided
	bigint timesDigit(int) const; // multiplies a bigint and a single digit integer (between 0-9)
	bigint times10(int) const; // shift left base 10, 10^n equals n shifts left, shift until index of [num] is reached, then place zeros
    void debugPrint(std::ostream&) const; // printing every element of bigint array
	void zero();

    bool operator==(const bigint&) const; // overload operator == to compare if two bigints are equal
	bigint operator+(const bigint&) const; // overload operator + to add two bigints together
	int operator[](int) const; // overload subscript operator
	bigint operator*(const bigint) const; // overload operator * to multiply two bigints together

    friend std::ostream& operator<<(std::ostream&, const bigint&); // takes a stream and bigint as input, writes the bigint to stream
	friend std::istream& operator>>(std::istream&, bigint&); // overload input operator, reads digits until a ';' is encountered

private:
	int bigArr[CAPACITY];

};

#endif
