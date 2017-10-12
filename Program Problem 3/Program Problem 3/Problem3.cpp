/*

Nikhil Goyle - 10/5/17 2

Program Problem 3 : *

Determine whether a number is ascending or descending

*/

// Libraries

#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std;

// Functions()

void pause() {

	cout << "Press any key to continue . . .";

	

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN

void main() {

	int x; // make variable names more specific
	int A;
	int B;
	int C;


	cout << "Give me a 3-digit number: ";
	cin >> x;

	C = x % 10;
	B = (x / 10) % 10;
	A = (x / 100);

	if (A > B && B > C) {
		cout << "Descending" << endl;
	}
	
	else if (C > B && B > A) {
		cout << "Ascending" << endl;
	}

	else {

		cout << "Neither" << endl;
	}

for (int i = 1; i < 30; i++) {
			cout << "Give me a 3-digit number: " << endl;
			cin >> x;


			C = x % 10;
			B = (x / 10) % 10;
			A = (x / 100); 

			if (A > B && B > C) {
				cout << "Descending" << endl;
			}

			else if (C > B && B > A) {
				cout << "Ascending" << endl;
			}
			
			else {

				cout << "Neither" << endl;
			}
		}
	
	pause(); // pauses to see the displayed text
}
