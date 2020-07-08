// Attached: HW_6c
// File: HW_6c.cpp
//=============================================================================
//
// Programmer: Zachary Meyer
// Class: CS 1A
// Instructor: Med Mogasemi
//
//=============================================================================
// Program: Minimum and maximum
//=============================================================================
// Description:
//			Prompt the user for a starting and ending number,
//			loop from starting to ending and display the number squared,
//			in a table.
//=============================================================================
//=============================================================================

#include <iostream>
#include <cmath>

int main()
{
	unsigned int minNumber = 0;
	unsigned int maxNumber = 0;

	std::cout << "I will display a table of numbers and their squares.\n"
		<< "Enter the starting number: ";
	std::cin >> minNumber;
	std::cout << "Enter the ending number: ";
	std::cin >> maxNumber;

	// Table Header
	std::cout << "Number  " << "Number Squared\n"
		<< "----------------------" << std::endl;

	// Table Rows
	for (minNumber; minNumber <= maxNumber; minNumber++)
		std::cout << minNumber << "\t\t" << pow(minNumber, 2) << std::endl;

	return 0;
}

/*
==== OUTPUT ====

I will display a table of numbers and their squares.
Enter the starting number: 6
Enter the ending number: 12
Number  Number Squared
----------------------
6               36
7               49
8               64
9               81
10              100
11              121
12              144

C:\Users\zachw\source\repos\HW_6\Debug\HW_6c.exe (process 22576) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

==== OUTPUT ====

I will display a table of numbers and their squares.
Enter the starting number: 5
Enter the ending number: 10
Number  Number Squared
----------------------
5               25
6               36
7               49
8               64
9               81
10              100

C:\Users\zachw\source\repos\HW_6\Debug\HW_6c.exe (process 23332) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/
