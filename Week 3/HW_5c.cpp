// Attached: HW_5c
// File: HW_5c.cpp
//==============================================================================
//
// Programmer: Zachary Meyer
// Class: CS 1A
// Instructor: Med Mogasemi
//
//==============================================================================
// Program: Cities
//==============================================================================
// Description:
//			Takes an input from the console of a,
//          char data type named selection uses a switch control,
//          and outputs a string that the user selected.
//==============================================================================
//==============================================================================

#include <iostream>

int main()
{
	char selection;
	std::string paris("The Eiffel Tower is spectacular!");
	std::string newyork("Climb the stairs to the top of the Statue of Liberty");
	std::string madrid("Make sure to visit the Prado Museum in Madrid.");
	std::string honolulu("Always gret!");

	std::cout << "MENU\n" << std::endl;
	std::cout << "a.\tParis" << std::endl;
	std::cout << "b.\tNew York" << std::endl;
	std::cout << "c.\tMadrid" << std::endl;
	std::cout << "d.\tHonolulu" << std::endl;
	std::cout << "\nWhat city would you like to visit:  ";
	std::cin >> selection;

	switch (selection)
	{
	case 'a':
		std::cout << "\n" << paris << std::endl;
		break;
	case 'b':
		std::cout << "\n" << newyork << std::endl;
		break;
	case 'c':
		std::cout << "\n" << madrid << std::endl;
		break;
	case 'd':
		std::cout << "\n" << honolulu << std::endl;
		break;
	default:
		std::cout << "\nYou have entered an incorrect selection.." << std::endl;
	}

	return 0;
}

/*
===== OUTPUT ======

MENU

a.      Paris
b.      New York
c.      Madrid
d.      Honolulu

What city would you like to visit:  a

The Eiffel Tower is spectacular!

C:\Users\zachw\source\repos\HW_5\Release\HW_5c.exe (process 11656) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

===== OUTPUT ======

MENU

a.      Paris
b.      New York
c.      Madrid
d.      Honolulu

What city would you like to visit:  c

Make sure to visit the Prado Museum in Madrid.

C:\Users\zachw\source\repos\HW_5\Release\HW_5c.exe (process 5752) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/
