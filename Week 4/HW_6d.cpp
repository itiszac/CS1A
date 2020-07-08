// Attached: HW_6d
// File: HW_6d.cpp
//=============================================================================
//
// Programmer: Zachary Meyer
// Class: CS 1A
// Instructor: Med Mogasemi
//
//=============================================================================
// Program: Average 3 test score numbers
//=============================================================================
// Description:
//			Prompt the user for 3 scores,
//			average the scores and display an output,
//			prompt the user to execute the loop again.
//=============================================================================
//=============================================================================

#include <iostream>

int main()
{
	int score1 = 0, score2 = 0, score3 = 0;
	double average = 0.0;
	char again;

	do
	{
		std::cout << "Enter 3 scores and I will average them:  ";
		std::cin >> score1 >> score2 >> score3;

		average = (double(score1) + double(score2) + double(score3)) / 3;

		std::cout << "The average is " << average << ".\n";

		std::cout << "Do you want to average another set? (Y/N)  ";
		std::cin >> again;
	} while (tolower(again) == 'y');

	return 0;
}

/*
==== OUTPUT ====

Enter 3 scores and I will average them:  80 90 70
The average is 80.
Do you want to average another set? (Y/N)  y
Enter 3 scores and I will average them:  60 75 88
The average is 74.3333.
Do you want to average another set? (Y/N)  n

C:\Users\zachw\source\repos\HW_6\Debug\HW_6d.exe (process 4992) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

==== OUTPUT ====

Enter 3 scores and I will average them:  66 69 97
The average is 77.3333.
Do you want to average another set? (Y/N)  n

C:\Users\zachw\source\repos\HW_6\Debug\HW_6d.exe (process 24704) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/
