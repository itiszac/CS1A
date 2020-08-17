// Attached: Reverse_order
// File: HW_8b-1.cpp
//=============================================================================
//
// Programmer: Zachary Meyer
// Class: CS 1A
// Instructor: Med Mogasemi
//
//=============================================================================
// Program: Reverse Order
//=============================================================================
// Description:
//			prompt user to input 5 ages of int type,
//			prompt user to input a choice to display array,
//			display array in order or reverse order.
//=============================================================================
//=============================================================================

#include <iostream>

void getAges(int ages[], int size);
char getChoice();
void displayInOrder(int ages[], int size);
void displayInReverse(int ages[], int size);

// ==== main =====================================================
//
// ===============================================================

int main()
{
	// declare and initialize vars
	const int SIZE = 5;
	int ages[SIZE] = { 0 };
	char again;

	do
	{
		// get the ages from user
		getAges(ages, SIZE);

		// get user choice
		char choice = getChoice();

		// check how to display array
		if (choice == 'o')
			displayInOrder(ages, SIZE);
		else if (choice == 'r')
			displayInReverse(ages, SIZE);
		else
			std::cout << "Invalid entry - Must be O or R!" << std::endl;

		// ask user to run program again?
		std::cout << "\nRun program again (y / n)?  ";
		std::cin >> again;

		system("cls");
	} while (tolower(again) == 'y');

	return 0;
} // end of main()
// ===============================================================

// ==== getAges ================================================
// This function gets ages by users input
//
// Input:
//		ages - a int array reference, represents ages of people
//		size - a int value, representing the size of the array
//		and the amount of ages being input
// ===============================================================

void getAges(int ages[], int size)
{
	std::cout << "Enter " << size << " ages:\n\n";
	// assign array vals
	for (int i = 0; i < size; i++)
		std::cin >> ages[i];
} // end of getAges()
// ===============================================================

// ==== getChoice ================================================
// This function gets a choice by the users input
//
// Output:
//		choice - a char value, representing the choice a user made
// ===============================================================

char getChoice()
{
	char choice;
	std::cout << "\nHow do you want to see ages displayed?\n"
		<< "Enter O for In Order, or R for In Reverse:  ";
	std::cin >> choice;

	return tolower(choice);
} // end of getChoice()
// ===============================================================

// ==== displayInOrder ===========================================
// This function outputs the ages array in order of assignment
//
// Output:
//		ages - an int array, representing the ages of a person
//		size - an int value, representing the size of the ages
//		array
// ===============================================================

void displayInOrder(int ages[], int size)
{
	std::cout << "\nHere are the ages in order:\n\n";

	// loop over size of array
	for (int i = 0; i < size; i++)
		std::cout << ages[i] << "\t";

	std::cout << std::endl;
} // end of displayInOrder()
// ===============================================================

// ==== displayInReverse =========================================
// This function outputs the ages array in reverse order
// of assignment.
//
// Output:
//		ages - an int array, representing the ages of a person
//		size - an int value, representing the size of the ages
//		array
// ===============================================================

void displayInReverse(int ages[], int size)
{
	std::cout << "\nHere are the ages in reverse order:\n\n";

	// loop over the array in reverse
	for (int i = size; i > 0; i--)
		std::cout << ages[i - 1] << "\t";

	std::cout << std::endl;
} // end of displayInReverse()
// ===============================================================

/*
==== OUTPUT ====

Enter 5 ages:

21
22
19
27
29

How do you want to see ages displayed?
Enter O for In Order, or R for In Reverse:  o

Here are the ages in order:

21      22      19      27      29

Run program again (y / n)?  y

--- (screen clears) -------

Enter 5 ages:

33
18
17
25
24

How do you want to see ages displayed?
Enter O for In Order, or R for In Reverse:  r

Here are the ages in reverse order:

24      25      17      18      33

Run program again (y / n)?  n
*/
