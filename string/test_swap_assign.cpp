// String Test Program
//
// Tests:  swap assignment
//
// Implemented by Eddie Lampert for Project #2, Milestone #2
//
#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
	{
		// Setup
		String str1 = "im string #1",
			   str2 = "im string #2";

		// Test
		str1.swap(str2);

		// Verify
		assert(str1 == "im string #2");
		assert(str2 == "im string #1");
	}

	std::cout << "Done testing swap." << std::endl;
	return 0;
}