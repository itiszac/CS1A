// Attached: Student Record
// File: Student_Record.cpp
//=============================================================================
//
// Programmer: Zachary Meyer
// Class: CS 1A
// Instructor: Med Mogasemi
//
//=============================================================================
// Program: Student Record
//=============================================================================
// Description:
//			Enter student record details,
//			output students record
//=============================================================================
//=============================================================================

#include <iostream>
#include <string>

void getRecord(int& id, std::string& name, float& gpa);
void displayRecord(int id, std::string name, float gpa);

// ==== main =====================================================
//
// ===============================================================

int main()
{
	// declare/initialize local vars
	int id = 0;
	std::string name = "";
	float gpa = 0.0f;

	// retrieve student record
	getRecord(id, name, gpa);

	// clear screen
	system("CLS");

	// ouput student record
	displayRecord(id, name, gpa);

	// end of main
	return 0;
} // end of main()
// ===============================================================

// ==== getRecord ================================================
// This function gets a record by input
//
// Input:
//		id - a int reference, representing id of a student
//		name - a string reference, representing the name
//		of a student
//		gpa - a float refernece, representing the grade point
//		average of a student
// ===============================================================

void getRecord(int& id, std::string& name, float& gpa)
{
	// Input message
	std::cout << "Enter a student record:" << std::endl;

	// Student ID
	std::cout << "ID:  ";
	std::cin >> id;

	// Clear input buffer
	std::cin.ignore();

	// Student Name
	std::cout << "NAME:  ";
	std::getline(std::cin, name);

	// Student GPA
	std::cout << "GPA:  ";
	std::cin >> gpa;
} // end of getRecord()
// ===============================================================

// ==== displayRecord ============================================
// This function outputs a students record
//
// Input:
//		id - a int value, representing id of a student
//		name - a string value, representing the name
//		of a student
//		gpa - a float value, representing the grade point
//		average of a student
// ===============================================================

void displayRecord(int id, std::string name, float gpa)
{
	// Output message of student record
	std::cout << "STUDENT RECORD\n\n";

	std::cout << "ID:\t\t" << id << std::endl;
	std::cout << "NAME:\t\t" << name << std::endl;
	std::cout << "GPA:\t\t" << gpa << std::endl << std::endl;
} // end of displayRecord()
// ===============================================================

/*
////// OUTPUT ///////
Enter a student record:
ID:  12345
NAME:  Zachary Meyer
GPA:  1.2

// Scren Clears

STUDENT RECORD

ID:             12345
NAME:           Zachary Meyer
GPA:            1.2

C:\Users\zachw\source\repos\HW_7b\Debug\Student_Record.exe (process 23512) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/
