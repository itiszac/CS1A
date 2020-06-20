// Attached: HW_3a
// File: HW_3a.cpp
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
//			january, february, and march sales,
//			calculates a total amount and the tax
//==============================================================================
//==============================================================================

#include <iostream>
#include <iomanip>

const float TAX_RATE = 0.07f;

int main()
{
	float jan_sales = 0, feb_sales = 0, mar_sales = 0;

	std::cout << "Enter January sales:  ";
	std::cin >> jan_sales;

	std::cout << "Enter February sales:  ";
	std::cin >> feb_sales;

	std::cout << "Enter March sales:  ";
	std::cin >> mar_sales;

	float total = jan_sales + feb_sales + mar_sales;
	std::cout << "\nTotal sales for the first three months is $" << total << "," << std::endl;
	std::cout << "and the amount of sales tax is $" << std::fixed << std::setprecision(2) << total * TAX_RATE << std::endl;

	return 0;
}

/*
================== OUTPUT ==================
Enter January sales:  1101.55
Enter February sales:  2321.22
Enter March sales:  3313.12

Total sales for the first three months is $6735.89,
and the amount of sales tax is $471.51

C:\Users\zachw\source\repos\HW_3\Debug\HW_3.exe (process 30856) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/
