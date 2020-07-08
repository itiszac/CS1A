// Attached: HW_5d
// File: HW_5d.cpp
//=============================================================================
//
// Programmer: Zachary Meyer
// Class: CS 1A
// Instructor: Med Mogasemi
//
//=============================================================================
// Program: writeEvenToFile
//=============================================================================
// Description:
//			takes input from console of 3 integers,
//			checks if its an even number,
//			if even number then write number to file,
//			and increment the count by 1
//			output to console the number of even numbers.
//=============================================================================
//=============================================================================

#include <iostream>
#include <fstream>

bool isEven(int number)
{
	if (number % 2 == 0)
		return true;

	return false;
}

int main()
{
	// amount of numbers to take as input
	const int nLen = 3;
	// count of numbers that are even
	int nCount = 0;

	std::ofstream of("data.txt");

	if (of.fail())
	{
		std::cout << "File did not open!" << std::endl;
		return 1;
	}

	std::cout << "Enter 3 numbers. " << std::endl;

	for (int i = 1; i <= nLen; i++)
	{
		int nNum = 0;
		std::cout << "#" << i << ":\t";
		std::cin >> nNum;

		if (!isEven(nNum))
			continue;

		nCount++;
		of << nNum << std::endl;
	}

	of.close();

	if (nCount <= 0)
	{
		std::cout << "No are no even numbers." << std::endl;
	}
	else if (nCount == 1)
	{
		std::cout << "One even number was written to the file." << std::endl;
	}
	else
	{
		std::cout << nCount << " even numbers have been written to a file." << std::endl;
	}

	return 0;
}

/*
====== OUTPUT =======

Enter 3 numbers.
#1:     33
#2:     77
#3:     13
No are no even numbers.

C:\Users\zachw\source\repos\HW_5\Release\HW_5d.exe (process 14592) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

====== OUTPUT =======

Enter 3 numbers.
#1:     33
#2:     55
#3:     2
One even number was written to the file.

C:\Users\zachw\source\repos\HW_5\Release\HW_5d.exe (process 35224) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

====== OUTPUT =======

Enter 3 numbers.
#1:     33
#2:     25
#3:     6
One even number was written to the file.

C:\Users\zachw\source\repos\HW_5\Release\HW_5d.exe (process 34136) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

====== OUTPUT =======

Enter 3 numbers.
#1:     32
#2:     24
#3:     6
3 even numbers have been written to a file.

C:\Users\zachw\source\repos\HW_5\Release\HW_5d.exe (process 36808) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/
