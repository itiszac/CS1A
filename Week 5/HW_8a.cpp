// Attached: HW_8ab
// File: HW_8a.cpp
//=============================================================================
//
// Programmer: Zachary Meyer
// Class: CS 1A
// Instructor: Med Mogasemi
//
//=============================================================================
// Program: Do the Math
//=============================================================================
// Description:
//			prompts user to input 5 values,
//			displays a menu with choices to select,
//			user inputs a choice and does some calculation.
//=============================================================================
//=============================================================================

#include <iostream>
#include <iomanip>
#include <cmath>

void getValues(double arr[], int size);
void showMenu();
char getChoice();
void doTheMath(char choice, double arr[], int size);

// ==== main =====================================================
//
// ===============================================================

int main()
{
	// initialize and declare vars
	const int SIZE = 5;
	double numbers[SIZE] = { 0 };
	char choice;

	// get 5 vals
	getValues(numbers, SIZE);

	// clear screen
	system("CLS");

	// display menu
	showMenu();

	// assign choice to getChoice
	choice = getChoice();

	doTheMath(tolower(choice), numbers, SIZE);

	return 0;
} // end of main()
// ===============================================================

// ==== getValues ================================================
// This function gets a record by input
//
// Input:
//		arr - a double array reference, represents numbers
//		size - a int value, representing the size of the array
// ===============================================================

void getValues(double arr[], int size)
{
	std::cout << "Enter 5 numbers:" << std::endl;

	// assign input vals to array
	for (int i = 0; i < size; i++)
		std::cin >> arr[i];
} // end of getValues()
// ===============================================================

// ==== showMenu =================================================
// This function outputs a menu to the screen
// ===============================================================

void showMenu()
{
	// Display Menu Choices
	std::cout << "A. Display the Square Root of each number." << std::endl;
	std::cout << "B. Display the Sum of all numbers." << std::endl;
	std::cout << "C. Display the Average of all numbers.\n" << std::endl;
} // end of showMenu()
// ===============================================================

// ==== getChoice ================================================
// This function gets the choice by input from user
// Output:
//		choice - a char value, representing the menu
//		item user selected
// ===============================================================

char getChoice()
{
	// declare var
	char choice;
	// output message and assign choice to input
	std::cout << "Enter your choice:  ";
	std::cin >> choice;

	return choice;
} // end of getChoice()
// ===============================================================

// ==== doTheMath ================================================
// This function does a math calculation based on the
// choice that is passed in as a parameter
// Input:
//		choice - a char value, representing the menu
//		item user selected.
//		arr - a double array, represents the five numbers a
//		user input.
//		size - a int value, represents the size of the array
// ===============================================================

void doTheMath(char choice, double arr[], int size)
{
	switch (choice)
	{
	case 'a': // sq root
	{
		std::cout << "\nThe square roots are:" << std::endl << std::fixed << std::setprecision(3);
		for (int i = 0; i < size; i++)
			std::cout << std::setw(10) << std::right << sqrt(arr[i]) << std::endl;

		break;
	}
	case 'b': // sum
	{
		double sum = 0.0;
		for (int i = 0; i < size; i++)
			sum += arr[i];

		std::cout << "The sum is " << std::fixed << std::setprecision(2) << sum << std::endl;

		break;
	}
	case 'c': // avg
	{
		double sum = 0.0;

		for (int i = 0; i < size; i++)
			sum += arr[i];

		std::cout << "The average is:  " << std::fixed << std::setprecision(3) << sum / double(size) << std::endl;

		break;
	}
	default:
		std::cout << "You entered an incorrect choice." << std::endl;
		break;
	}
} // end of doTheMath()
// ===============================================================

/*
==== OUTPUT ====
Enter 5 numbers:
12 25 26 30 94

-- scren clears --

A. Display the Square Root of each number.
B. Display the Sum of all numbers.
C. Display the Average of all numbers.

Enter your choice:  a

The square roots are:
	 3.464
	 5.000
	 5.099
	 5.477
	 9.695

C:\Users\zachw\source\repos\HW_8ab\Debug\HW_8a.exe (process 1424) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

*/
