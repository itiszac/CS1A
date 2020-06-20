// Attached: HW_2e
// File: HW_2e.cpp
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
//			An output from the console that prints,
//			your first and last initial,
//			based on the input you entered
//==============================================================================
//==============================================================================

#include <iostream>

int main()
{
	char firstInitial, lastInitial;

	std::cout << "Enter your first initial: ";
	std::cin >> firstInitial;

	std::cout << "Enter your last initial: ";
	std::cin >> lastInitial;

	std::cout << "Your first initial is " << firstInitial << " and your last initial is " << lastInitial << std::endl;

	system("pause");
	return 0;
}

/*
=============Output===============================
Enter your first initial: Z
Enter your last initial: M
Your first initial is Z and your last initial is M
Press any key to continue . . .
*/
