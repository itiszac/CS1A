#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	double  floatArray[7] = { 1.01, 2.02, 3.33, 4.044, 5.5, 6.06, 7.77 };
	cout << "(A).  The floatArray output using - cout <<\n\t"
		<< floatArray << "\n\n";

	// ===============================================

	cout << "(B).  Output of the floatArray values - using a for loop\n\t";

	for (int i = 0; i < 7; i++)
		cout << floatArray[i] << '\t';
	cout << endl << endl;

	// ===============================================

	int intArray[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	cout << "(C).  Output of the intArray values - using cout <<\n\t"
		<< intArray << "\n\n";

	// ===============================================

	cout << "(D).  Output of the intArray values using a for loop\n\t";

	for (int i = 0; i < 7; i++)
		cout << intArray[i] << '\t';
	cout << endl << endl;

	// ==============================================

	char cStringArray[8];
	strcpy_s(cStringArray, "Tom Lee");

	cout << "(E).  Output of strcpy assignment to cStringArray - using cout << \n\t";

	for (int i = 0; i < 7; i++)
		cout << cStringArray[i];
	cout << endl << endl;

	// ===============================================

	cout << "(F).  Enter a 7-character name to be read by cin.getline():  ";
	cin.getline(cStringArray, 7);
	cout << "\n\tOutput after entering 7 letters - output by cout <<:\n\t";
	cout << cStringArray << endl;
	// ===============================================
	// ===============================================

	char yourName[8];
	strcpy_s(yourName, "Tom Lee");

	cout << "(G).  What is output when using:\n\t"
		<< "strcpy(yourName, \"Tom Lee\");  -  and cout << yourName[2]:  \n\t";
	cout << yourName[2] << endl;

	// ===============================================

	char myName[8] = "Tom Lee";

	cout << "(H).  What is output when using:\n\t"
		<< "char myName [8] = \"Bob Lee\";  -  and cout << myName[2]:  \n\t";
	cout << myName[2] << endl;

	// ===============================================

	return 0;
} // end of main()
// ===============================================================

/*

=== My guesses ===

(A).  The floatArray output using - cout
	*memory location*

(B).  Output of the floatArray values - using a for loop
	1.01	2.02	3.33	4.044	5.5	6.06	7.77

(C).  Output of the intArray values - using cout
	*memory location*

(D).  Output of the intArray values using a for loop
	1	2	3	4	5	6	7	8

(E).  Output of strcpy assignment to cStringArray - using cout
	Tom Lee

(F).  Enter a 7-character name to be read by cin.getline(): Zachary
	Output after entering 7 letters - output by cout <<:
	Zachar

(G).  What is output when using:
	strcpy(yourName, "Tom Lee");  -  and cout << yourName[2]:
	m

(H).  What is output when using:
	char myName [8] = "Bob Lee";  -  and cout << myName[2]:
	m

==== ACTUAL OUTPUT ====

(A).  The floatArray output using - cout <<
		0073F714

(B).  Output of the floatArray values - using a for loop
		1.01    2.02    3.33    4.044   5.5     6.06    7.77

(C).  Output of the intArray values - using cout <<
		0073F6E0

(D).  Output of the intArray values using a for loop
		1       2       3       4       5       6       7

(E).  Output of strcpy assignment to cStringArray - using cout <<
		Tom Lee

(F).  Enter a 7-character name to be read by cin.getline():  Thomass

		Output after entering 7 letters - output by cout <<:
		Thomas
(G).  What is output when using:
		strcpy(yourName, "Tom Lee");  -  and cout << yourName[2]:
		m
(H).  What is output when using:
		char myName [8] = "Bob Lee";  -  and cout << myName[2]:
		m

C:\Users\zachw\source\repos\HW_9\Debug\HW_9a.exe (process 15736) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/
