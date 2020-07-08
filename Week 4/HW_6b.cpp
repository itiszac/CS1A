// Attached: HW_6b
// File: HW_6b.cpp
//=============================================================================
//
// Programmer: Zachary Meyer
// Class: CS 1A
// Instructor: Med Mogasemi
//
//=============================================================================
// Program: Display the Alphabet
//=============================================================================
// Description:
//			Prompt the user to input a choice between uppercase or lowercase
//			display an output of the alphabet in the choice selected
//=============================================================================
//=============================================================================

#include <iostream>

int main()
{
	char choice;
	char letter;

	std::cout << "Do you want to see the alphabet in (U)ppercase or (l)owercase?\t";
	std::cin >> choice;

	if (tolower(choice) == 'u')
	{
		letter = 'A';
		do
		{
			std::cout << letter << "\t";
			letter++;
		} while (letter <= 'Z');
	}
	else if (tolower(choice) == 'l')
	{
		letter = 'a';
		do
		{
			std::cout << letter << "\t";
			letter++;
		} while (letter <= 'z');
	}
	else
	{
		std::cout << "The entry is incorrect." << std::endl;
	}

	return 0;
}

/*
===== OUTPUT ======

Do you want to see the alphabet in (U)ppercase or (l)owercase?  l
a       b       c       d       e       f       g       h       i       j       k       l       m       n       o      pq       r       s       t       u       v       w       x       y       z
C:\Users\zachw\source\repos\HW_6\Debug\HW_6b.exe (process 2788) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

====== OUTPUT =======

Do you want to see the alphabet in (U)ppercase or (l)owercase?  u
A       B       C       D       E       F       G       H       I       J       K       L       M       N       O      PQ       R       S       T       U       V       W       X       Y       Z
C:\Users\zachw\source\repos\HW_6\Debug\HW_6b.exe (process 23616) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

*/
