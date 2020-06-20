// Attached: HW_4b
// File: HW_4b.cpp
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
//			of users age and full name,
//			display the full name and age to the console.
//==============================================================================
//==============================================================================

#include <iostream>
#include <string>

int main()
{
	int nAge = 0;
	std::string szFullName;

	std::cout << "Please enter your age and press Enter:  ";
	std::cin >> nAge;
	std::cin.ignore();

	std::cout << "Please enter your first and last name and press Enter:  ";
	std::getline(std::cin, szFullName);

	std::cout << "Your name is " << szFullName << ", and you are " << nAge << " years old" << std::endl;

	return 0;
}

/*
============== OUTPUT =================

Please enter your age and press Enter:  26
Please enter your first and last name and press Enter:  Zachary Meyer
Your name is Zachary Meyer, and you are 26 years old

C:\Users\zachw\source\repos\HW_4\Debug\HW_4b.exe (process 5684) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/
