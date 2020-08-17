// Attached: Login
// File: Login.cpp
//=============================================================================
//
// Programmer: Zachary Meyer
// Class: CS 1A
// Instructor: Med Mogasemi
//
//=============================================================================
// Program: Login
//=============================================================================
// Description:
//			Enter login credentials,
//			check file and compare values
//			output valid or invalid based on results
//=============================================================================
//=============================================================================

#include <iostream>
#include <string>
#include <fstream>

void getLogin(std::string& id, std::string& pw);
bool validateLogin(std::string id, std::string pw);
void showResult(bool isValid);

// ==== main =====================================================
//
// ===============================================================

int main()
{
	// Declare / Initialize Vars
	std::string id = "";
	std::string pw = "";
	bool isValid = false;

	// Get Login Credentials
	getLogin(id, pw);

	// Validate Login
	isValid = validateLogin(id, pw);

	// Display the result
	showResult(isValid);

	return 0;
} // end of main()
// ===============================================================

// ==== getLogin ==================================================
// This function gets the login credentials by input
//
// Input:
//		id - a string reference, representing the username or id
//		pw - a string reference, representing the password for a user
// ==============================================================

void getLogin(std::string& id, std::string& pw)
{
	// Account ID
	std::cout << "Enter your ID:  ";
	std::cin >> id;

	// Clear input buffer
	std::cin.ignore();

	// Account Password
	std::cout << "Enter your PW:  ";
	std::cin >> pw;
} // end of getLogin()
// ===============================================================

// ==== validateLogin ============================================
// This function validates a user,
// by opening a text file and reading id and pw
// checks if the input id and pw are the same as the files
//
// Input:
//		id - a string value, representing the username or id
//		pw - a string value, representing the password for a user
// Output:
//		A true or false value, if user was validated or not.
// ===============================================================

bool validateLogin(std::string id, std::string pw)
{
	// Declare and Initialize Vars
	std::string szId = "";
	std::string szPw = "";
	std::ifstream inFile;
	// Open file
	inFile.open("login.txt");
	// Check if file fails
	if (inFile.fail())
	{
		std::cout << "File failed to open." << std::endl;
		return false;
	}

	// Set szId and szPw
	inFile >> szId;
	inFile >> szPw;
	// Close File
	inFile.close();
	// Check if id / pw are the same as text file
	if (id == szId && pw == szPw)
		return true;

	return false;
} // end of validateLogin()
// ===============================================================

// ==== showResult ===============================================
// This function outputs the result if a user,
// was valid or invalid
//
// Input:
//		isValid - a boolean value,
//		representing if the user was valid or not.
// ===============================================================

void showResult(bool isValid)
{
	std::cout << (isValid ? "Valid." : "Invalid.") << std::endl;
} // end of showResult()
// ===============================================================

/*
///////// OUTPUT ////////

Enter your ID:  zmeyer
Enter your PW:  123214
Invalid.

C:\Users\zachw\source\repos\HW_7b\Debug\Login.exe (process 9656) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

///////// OUTPUT ////////

Enter your ID:  zmeyer
Enter your PW:  12345
Valid.

C:\Users\zachw\source\repos\HW_7b\Debug\Login.exe (process 5760) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

*/
