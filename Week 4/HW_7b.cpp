// Attached: HW_7b
// File: HW_7b.cpp
//=============================================================================
//
// Programmer: Zachary Meyer
// Class: CS 1A
// Instructor: Med Mogasemi
//
//=============================================================================
// Program: Evenly divisible and sqaured
//=============================================================================
// Description:
//			Prompt the user to input a number
//			loop 0 to 100 and calculate the evenly divisble numbers,
//			square of that number, and output both to screen.
//=============================================================================
//=============================================================================

#include <iostream>
#include <iomanip>
#include <cmath>

int getDivisor()
{
	int divisor = 0;

	std::cout << "Enter a divisor:  ";
	std::cin >> divisor;

	return divisor;
}

double calcSquare(int number)
{
	return pow(number, 2.0);
}

void findNumbers(int divisor)
{
	for (int i = 0; i < 101; i++)
		if (i % divisor == 0)
			std::cout << std::setw(2) << i
			<< std::setw(9) << calcSquare(i) << std::endl;
}

int main()
{
	int divisor = getDivisor();

	std::cout << "\nHere are the numbers, from 0 to 100, that are\nevenly divisible by " << divisor << ", and their squares:\n\n";

	findNumbers(divisor);

	return 0;
}

/*
==== OUTPUT ====

Enter a divisor:  15

Here are the numbers, from 0 to 100, that are
evenly divisible by 15, and their squares:

 0        0
15      225
30      900
45     2025
60     3600
75     5625
90     8100

C:\Users\zachw\source\repos\HW_7\Debug\HW_7b.exe (process 23368) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

==== OUTPUT ====

Enter a divisor:  10

Here are the numbers, from 0 to 100, that are
evenly divisible by 10, and their squares:

 0        0
10      100
20      400
30      900
40     1600
50     2500
60     3600
70     4900
80     6400
90     8100
100   10000

C:\Users\zachw\source\repos\HW_7\Debug\HW_7b.exe (process 22724) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/
