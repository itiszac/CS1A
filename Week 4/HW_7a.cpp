// Attached: HW_7a
// File: HW_7a.cpp
//=============================================================================
//
// Programmer: Zachary Meyer
// Class: CS 1A
// Instructor: Med Mogasemi
//
//=============================================================================
// Program: Dimensions of Right Triangle
//=============================================================================
// Description:
//			Prompt the user to input the side A and B of a right triangle
//			calculate side C and display an output.
//=============================================================================
//=============================================================================

#include <iostream>
#include <cmath>

double getSide();
double calcSideC(double sideA, double sideB);
void displaySideC(double sideC);

int main()
{
	double sideA = 0.0, sideB = 0.0;

	std::cout << "Enter two sides of a right triangle." << std::endl;

	std::cout << "\nSide A:" << std::endl;
	sideA = getSide();

	std::cout << "\nSide B:" << std::endl;
	sideB = getSide();

	displaySideC(calcSideC(sideA, sideB));

	return 0;
}

double getSide()
{
	double dimension = 0.0;

	std::cout << "Please enter the dimension:  ";
	std::cin >> dimension;

	return dimension;
}

double calcSideC(double sideA, double sideB)
{
	return sqrt(pow(sideA, 2.0) + pow(sideB, 2.0));
}

void displaySideC(double sideC)
{
	std::cout << "\nThe dimension of Side C is:  " << sideC << ".\n";
}

/*
==== OUTPUT ====

Enter two sides of a right triangle.

Side A:
Please enter the dimension:  3

Side B:
Please enter the dimension:  4

The dimension of Side C is:  5.

C:\Users\zachw\source\repos\HW_7\Debug\HW_7a.exe (process 21904) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

==== OUTPUT ====

Enter two sides of a right triangle.

Side A:
Please enter the dimension:  4

Side B:
Please enter the dimension:  6

The dimension of Side C is:  7.2111.

C:\Users\zachw\source\repos\HW_7\Debug\HW_7a.exe (process 20604) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/
