// Attached: HW_9b
// File: HW_9b.cpp
//=============================================================================
//
// Programmer: Zachary Meyer
// Class: CS 1A
// Instructor: Med Mogasemi
//
//=============================================================================
// Program: Checking Character Data
//=============================================================================
// Description:
//			Enter a character,
//			display if it's alphanumeric, alphabetical, a digit,
//			lowercase or uppercase and the opposite value.
//			prompt user to enter another char (y/n)
//=============================================================================
//=============================================================================

#include <string>
#include <iostream>
#include <cctype>

char getCharacter();
void displayResults(char character);

// ==== main =====================================================
//
// ===============================================================

int main()
{
	// Declare / Initialize
	char choice = 'Y';

	// Initial case should be true
	while (toupper(choice) == 'Y')
	{
		// Grab the character from console
		int character = getCharacter();

		// Display Results
		displayResults(character);

		// Ask user to play again?
		std::cout << "\nDo it again (Y/N)?  ";
		std::cin >> choice;

		// Clear screen
		system("cls");
	}
	return 0;
}// end of main()
// ===============================================================

// ==== getCharacter =============================================
// This function gets character by user input
//
// Output:
//		character - a char value, represents char data
// ===============================================================

char getCharacter()
{
	// declare/initialize var
	char character;

	// ask user to enter char
	std::cout << "Enter a character:  ";
	std::cin >> character;

	// return the character value
	return character;
} // end of getCharacter()
// ===============================================================

// ==== displayResults ===========================================
// This function displays results of character data
//
// Input:
//		character - a char value, representing char data
// ===============================================================

void displayResults(char character)
{
	if (isalnum(character)) // Checks if char is alpha numeric
	{
		std::cout << "\nCharacter is an alphanumeric character" << std::endl;

		if (isdigit(character)) // Checks if char is a digit
		{
			std::cout << "\nCharacter is a digit" << std::endl;
		}
		else if (isalpha(character)) // Checks if char is alphabetical
		{
			std::cout << "\nCharacter is an alphabetic character" << std::endl;

			if (islower(character)) // Checks if alphabetical char is lowercase
			{
				std::cout << "\nThe character is lowercase" << std::endl;
				std::cout << "\nIt looks like this in uppercase: " << static_cast<char>(toupper(character)) << std::endl;
			}
			else if (isupper(character)) // Checks if alphabetical char is uppercase
			{
				std::cout << "\nThe character is uppercase" << std::endl;
				std::cout << "\nIt looks like this in lowercase: " << static_cast<char>(tolower(character)) << std::endl;
			}
		}
	}
} // end of displayResults()
// ===============================================================

/*
==== OUTPUT ====

Enter a character:  s

Character is an alphanumeric character

Character is an alphabetic character

The character is lowercase

It looks like this in uppercase: S

Do it again (Y/N)?  y

--- ( screen clears ) ---

Enter a character:  B

Character is an alphanumeric character

Character is an alphabetic character

The character is uppercase

It looks like this in lowercase: b

Do it again (Y/N)?  y

--- ( screen clears ) ---

Enter a character:  3

Character is an alphanumeric character

Character is a digit

Do it again (Y/N)?  n

*/
