// Attached: HW_6a
// File: HW_6a.cpp
//=============================================================================
//
// Programmer: Zachary Meyer
// Class: CS 1A
// Instructor: Med Mogasemi
//
//=============================================================================
// Program: Do You Homework
//=============================================================================
// Description:
//			Prompt the user to input the amount of times to be reminded
//			display an output in a loop that many times.
//=============================================================================
//=============================================================================

#include <iostream>

int main()
{
	unsigned int reminder = 0;
	unsigned int count = 0;

	std::cout << "How many times do you need to be reminded?\t";
	std::cin >> reminder;
	std::cout << std::endl;

	while (count < reminder)
	{
		std::cout << "#" << count + 1 << ":\tDo your homework!" << std::endl;

		count++;
	}

	return 0;
}

/*
====== OUTPUT ==========
How many times do you need to be reminded?      5

#1:     Do your homework!
#2:     Do your homework!
#3:     Do your homework!
#4:     Do your homework!
#5:     Do your homework!

C:\Users\zachw\source\repos\HW_6\Debug\HW_6A.exe (process 9596) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/
