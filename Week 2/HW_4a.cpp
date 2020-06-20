// Attached: HW_4a
// File: HW_4a.cpp
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
//			of five integers and calculate the sum,
//			display the five integers, sum, and average to the console.
//==============================================================================
//==============================================================================

#include <iostream>
#include <iomanip>

int main()
{
	int nNums[5] = { 0 };
	int nSize = sizeof(nNums) / sizeof(nNums[0]);
	int nSum = 0;

	std::cout << "Enter five integers:" << std::endl;

	for (int i = 0; i < nSize; i++)
	{
		std::cin >> nNums[i];
		nSum += nNums[i];
	}

	std::cout << "\nThe five integers you entered are:" << std::endl;

	for (auto num : nNums)
		std::cout << std::setw(11) << num << std::endl;

	std::cout << "The sum of the five numbers is " << nSum << "." << std::endl;
	std::cout << std::fixed << std::setprecision(2) << "The average of the five numbers is " << float(nSum) / nSize << "." << std::endl;

	return 0;
}

/*
============== OUTPUT =================

Enter five integers:
2
5
66
32
433

The five integers you entered are:
		  2
		  5
		 66
		 32
		433
The sum of the five numbers is 538.
The average of the five numbers is 107.60.

C:\Users\zachw\source\repos\HW_4\Debug\HW_4.exe (process 20996) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/
