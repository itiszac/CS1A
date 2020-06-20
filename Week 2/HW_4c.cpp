// Attached: HW_4c
// File: HW_4c.cpp
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
//			of 3 integers and writes them to a file data.txt
//==============================================================================
//==============================================================================

#include <iostream>
#include <fstream>

int main()
{
	const int nSize = 3;
	std::ofstream of("c:\\data.txt");

	if (of.fail())
	{
		std::cout << "\nFile did not open!" << std::endl;
		return 1;
	}

	std::cout << "Enter 3 values:" << std::endl;

	for (int i = 0; i < nSize; i++)
	{
		int nNum = 0;
		std::cin >> nNum;
		of << nNum << std::endl;
	}

	of.close();

	std::cout << "\nThe data has been written to file." << std::endl;

	return 0;
}

/*
============== OUTPUT =================

Enter 3 values:
5
10
15

The data has been written to file.

C:\Users\zachw\source\repos\HW_4\Debug\HW_4c.exe (process 10936) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/
