// Attached: HW_5b
// File: HW_5b.cpp
//==============================================================================
//
// Programmer: Zachary Meyer
// Class: CS 1A
// Instructor: Med Mogasemi
//
//==============================================================================
// Program: legalAge
//==============================================================================
// Description:
//			Takes an input from the console of a integer data type named nAge,
//			calculates if nAge is greater or less than 21,
//			outputs if the age is allowed to drink alcoholic beverages or not.
//==============================================================================
//==============================================================================

#include <iostream>

int main()
{
	unsigned int nAge = 0;

	std::cout << "Enter your age:  ";
	std::cin >> nAge;

	if (nAge > 20)
		std::cout << "You are legally allowed to drink alcoholic beverages." << std::endl;
	else
		std::cout << "You are not legally allowed to drink alcoholic beverages." << std::endl;

	return 0;
}

/*
===== OUTPUT ======

Enter your age:  21
You are legally allowed to drink alcoholic beverages.

C:\Users\zachw\source\repos\HW_5\Debug\HW_5b.exe (process 30660) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

===== OUTPUT ======

Enter your age:  14
You are not legally allowed to drink alcoholic beverages.

C:\Users\zachw\source\repos\HW_5\Debug\HW_5b.exe (process 35900) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/
