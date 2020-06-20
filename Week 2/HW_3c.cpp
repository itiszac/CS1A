// Attached: HW_3c
// File: HW_3c.cpp
//===============================================================================
//
// Programmer: Zachary Meyer
// Class: CS 1A
// Instructor: Med Mogasemi
//
//==============================================================================
// Program: Checking Character data
//==============================================================================
// Description:
//			Takes an input from the console,
//			base and an exponent,
//			calculates the power and square root.
//==============================================================================
//==============================================================================

#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
	double base = 0;
	int exponent = 0;

	std::cout << "Enter the base:  ";
	std::cin >> base;

	std::cout << "Enter the exponent:  ";
	std::cin >> exponent;

	std::cout << base << " to the " << exponent << " power equals " << pow(base, exponent) << "." << std::endl;
	std::cout << "The square root of " << base << " equals " << std::fixed << std::setprecision(2) << sqrt(base) << std::endl;

	return 0;
}

/*
============ OUTPUT ===============

Enter the base:  3
Enter the exponent:  2
3 to the 2 power equals 9.
The square root of 3 equals 1.73

C:\Users\zachw\source\repos\HW_3\Debug\HW_3c.exe (process 27532) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/
