// Attached: HW_9c
// File: HW_9c.cpp
//=============================================================================
//
// Programmer: Zachary Meyer
// Class: CS 1A
// Instructor: Med Mogasemi
//
//=============================================================================
// Program:
//=============================================================================
// Description:
//			Ask user to enter his first and last name
//			add them to a c_str and output c_str / length of
//			ask user for friends full name
//			add to a string
//			output friends fullname and length of str
//=============================================================================
//=============================================================================

#include <string>
#include <iostream>

// ==== main =====================================================
//
// ===============================================================
int main()
{
	// Declare // Initialize Vars
	char firstName[20] = { NULL };
	char lastName[20] = { NULL };
	char fullName[40] = { NULL };
	std::string friendsName = "";

	// Ask user for first name
	std::cout << "Enter your first name:  ";
	std::cin.getline(firstName, 20);

	// Ask user for last name
	std::cout << "Enter your last name:  ";
	std::cin.getline(lastName, 20);

	// copy firstName to fullName
	strcpy_s(fullName, firstName);
	// concat white space to fullName
	strcat_s(fullName, " ");
	// concat lastName to fullName
	strcat_s(fullName, lastName);

	// Output full name
	std::cout << "\nHow is your love life " << fullName << std::endl;

	// Output full name length
	std::cout << "\nBy the way, your full name has " << strlen(fullName) << " characters." << std::endl;

	// Ask user for friends name
	std::cout << "\n\n\nEnter your friend's full name:  ";
	std::getline(std::cin, friendsName);

	// Output friends full name, and first name
	std::cout << "\nHow is " << friendsName << " love life " << firstName << "?" << std::endl;

	// Output friends full name length
	std::cout << "\nBy the way, your friend's full name has " << friendsName.length() << " characters." << std::endl;
} // end of main()
// ===============================================================

/*
==== OUTPUT ====

Enter your first name:  Tom
Enter your last name:  Lee

How is your love life Tom Lee

By the way, your full name has 7 characters.

Enter your friend's full name:  Tiger Woods

How is Tiger Woods love life Tom?

By the way, your friend's full name has 11 characters.

C:\Users\zachw\source\repos\HW_9\Debug\HW_9c.exe (process 21600) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

*/
