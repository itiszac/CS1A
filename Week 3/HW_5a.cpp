// Attached: HW_5a
// File: HW_5a.cpp
//==============================================================================
//
// Programmer: Zachary Meyer
// Class: CS 1A
// Instructor: Med Mogasemi
//
//==============================================================================
// Program: Is Lowercase
//==============================================================================
// Description:
//			Takes an input from the console of a character,
//			outputs if character is a lowercase or not a lowercase
//==============================================================================
//==============================================================================

#include <iostream>

int main()
{
	char character;

	std::cout << "Enter a keyboard character and press Enter:  ";
	std::cin >> character;

	if ((character >= 'a') && (character <= 'z'))
		std::cout << "The character is a lowercase alphabetic character." << std::endl;
	else
		std::cout << "The character is not a lowercase alphabetic character." << std::endl;

	return 0;
}

/*
=========== OUTPUT ============

Enter a keyboard character and press Enter:  a
The character is a lowercase alphabetic character.

C:\Users\zachw\source\repos\HW_5\Debug\HW_5.exe (process 29420) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

=========== OUTPUT ============

Enter a keyboard character and press Enter:  A
The character is not a lowercase alphabetic character.

C:\Users\zachw\source\repos\HW_5\Debug\HW_5.exe (process 9812) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/
