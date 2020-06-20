// Attached: HW_4d
// File: HW_4d.cpp
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
//			Opens a file called data.txt in the c drive,
//			reads the integers and writes them to the console.
//==============================================================================
//==============================================================================

#include <iostream>
#include <fstream>

int main()
{
	std::ifstream file("c:\\data.txt");
	int nNum = 0;

	if (file.fail())
	{
		std::cout << "File did not open!" << std::endl;
		return 1;
	}

	std::cout << "The values in the file are:" << std::endl;

	while (file >> nNum)
		std::cout << nNum << std::endl;

	return 0;
}

/*
============== OUTPUT =================

The values in the file are:
5
10
15
20
25
30

C:\Users\zachw\source\repos\HW_4\Debug\HW_4d.exe (process 28664) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/
