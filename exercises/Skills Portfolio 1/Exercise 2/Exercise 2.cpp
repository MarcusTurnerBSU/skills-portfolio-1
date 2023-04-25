/*
Write a program that calculates the largest of two numbers entered by the user. Your program must do the following

	Ask the user to enter two numbers and accept input into variables with the appropriate data type
	Use an IF statement to work out which is the largest number
	Output an appropriate message informing the user which number was the largest

*/

#include <iostream>
using namespace std;

int main() {

	// these two variables are for storing the users input
	int num1;
	int num2;

	// two simple print out messages to the user 
	//storing new values for both variables with the users input
	cout << "Please enter your first number." << endl;
	cin >> num1; // think they is a way to have 'num2' on this line as well
	cout << "Please enter your second number." << endl;
	cin >> num2;

	// the print string has been indented making it easier to see
	// checking if first number is bigger than second number if so print the string below
	if (num1 > num2) {
		cout << "Your first number: " << num1 
			<< ", is a larger number than your second number: " 
			<< num2 << "." << endl;
	}
	// if not then print second number is bigger
	else {
		cout << "Your second number: " << num2 
			<< ", is a larger number than your first number: " 
			<< num1 << "." << endl;
	}
	return 0;
}