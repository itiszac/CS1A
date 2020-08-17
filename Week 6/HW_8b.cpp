// Attached: HW_8b
// File: HW_8b.cpp
//=============================================================================
//
// Programmer: Zachary Meyer
// Class: CS 1A
// Instructor: Med Mogasemi
//
//=============================================================================
// Program: Adding Rows
//=============================================================================
// Description:
//			Ask user to enter 25 numbers,
//			display numbers, add rows, and display row sum,
//			find highest number entered in a 2d arr and display
//=============================================================================
//=============================================================================

#include <iostream>

// declare and initialize a const var
const int SIZE = 5;

void getNumbers(int arr[][SIZE]);
void showNumbers(int arr[][SIZE]);
void addRows(int arr[][SIZE]);
void findHighest(int arr[][SIZE]);

// ==== main =====================================================
//
// ===============================================================
int main()
{
	// declare & initialize vars
	int arr[SIZE][SIZE] = { 0 };
	char choice;

	// get numbers from input
	getNumbers(arr);

	// output numbers to console
	showNumbers(arr);

	// ask user if correct numbers
	std::cout << "\n\nIs that correct? (Y/N):  ";
	std::cin >> choice;

	// exit program if incorrect
	if (toupper(choice) != 'Y')
		exit(1);

	// add rows together and output int
	addRows(arr);

	// finds highest int in arr and displays
	findHighest(arr);
} // end of main()
// ===============================================================

// ==== getNumbers ================================================
// This function gets a number and adds them to array
//
// Input:
//		arr - a int 2d array
// ===============================================================
void getNumbers(int arr[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			std::cout << "Enter number in position (" << i + 1 << ", " << j + 1 << "):  ";
			std::cin >> arr[i][j];
		}
	}
} // end of getNumbers()
// ===============================================================

// ==== showNumbers ================================================
// This function outputs the 2d array values row by row.
//
// Input:
//		arr - a int 2d array
// ===============================================================
void showNumbers(int arr[][SIZE])
{
	std::cout << "\nHere is what you entered:\n\n";
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "\t\t";

		for (int j = 0; j < SIZE; j++)
		{
			std::cout << arr[i][j] << "\t";
		}

		std::cout << std::endl;
	}
} // end of showNumbers()
// ===============================================================

// ==== addRows ==================================================
// This function adds all values in each row and displays sum
//
// Input:
//		arr - a int 2d array
// ===============================================================
void addRows(int arr[][SIZE])
{
	std::cout << "\n\n";
	for (int i = 0; i < SIZE; i++)
	{
		int sum = 0;

		for (int j = 0; j < SIZE; j++)
		{
			sum += arr[i][j];
		}

		std::cout << "The total for row " << i + 1 << ":  " << sum << std::endl;
	}
} // end of addRows()
// ===============================================================

// ==== findHighest ==============================================
// This function loops through a 2d array and assigns the value,
//	to a variable called highest if the value is higher than previous
//
// Input:
//		arr - a int 2d array
// ===============================================================
void findHighest(int arr[][SIZE])
{
	int highest = 0;
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			if (arr[i][j] > highest)
				highest = arr[i][j];

	std::cout << "\n\nThe highest number is " << highest << std::endl;
} // end of findHighest()
// ===============================================================

/*
==== OUTPUT ====

Enter number in position (1, 1):  1
Enter number in position (1, 2):  2
Enter number in position (1, 3):  3
Enter number in position (1, 4):  4
Enter number in position (1, 5):  5
Enter number in position (2, 1):  6
Enter number in position (2, 2):  7
Enter number in position (2, 3):  8
Enter number in position (2, 4):  9
Enter number in position (2, 5):  10
Enter number in position (3, 1):  90
Enter number in position (3, 2):  80
Enter number in position (3, 3):  70
Enter number in position (3, 4):  60
Enter number in position (3, 5):  504
Enter number in position (4, 1):  40
Enter number in position (4, 2):  30
Enter number in position (4, 3):  20
Enter number in position (4, 4):  10
Enter number in position (4, 5):  11
Enter number in position (5, 1):  123
Enter number in position (5, 2):  32
Enter number in position (5, 3):  54
Enter number in position (5, 4):  65
Enter number in position (5, 5):  44

Here is what you entered:

				1       2       3       4       5
				6       7       8       9       10
				90      80      70      60      504
				40      30      20      10      11
				123     32      54      65      44

Is that correct? (Y/N):  y

The total for row 1:  15
The total for row 2:  40
The total for row 3:  804
The total for row 4:  111
The total for row 5:  318

The highest number is 504

C:\Users\zachw\source\repos\HW_8b\Debug\HW_8b.exe (process 20516) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/
