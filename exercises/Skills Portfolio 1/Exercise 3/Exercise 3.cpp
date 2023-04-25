/*
Write a program that does the following

Asks for the users first name and accepts input
Asks for the users second name and accepts input
Asks the user if they are hungry
If they are hungry you should ask them to choose one of two snacks
accept input and output a message informing the user of their choice.
If they are not hungry you should output a message saying "Not hungry today? Maybe tomorrow then!"
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	// first two strings can be placed into an array 
	string firstName;
	string lastName;
	bool hungry = true; // an attempt to store yes or no
	string snack;

	cout << "What is your first name?" << endl;
	cin >> firstName;

	cout << "What is your last name?" << endl;
	cin >> lastName;

	// can't think of how to do the nested if
	/*cout << "Are you hungry? / (1: Yes, 2: No))" << endl;
	if (hungry)
		cout << "Would you like an apple or banana?" << endl;
		cin >> snack;
		cout << firstName << " " << lastName << "Here is your " << snack << "enjoy." << endl;
	else cout >> "Not hungry today? Maybe tomorrow then!"
	return 0;*/
}