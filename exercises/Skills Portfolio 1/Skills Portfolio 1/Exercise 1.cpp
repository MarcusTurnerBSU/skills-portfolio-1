#include <iostream>
#include <string> // # is missing and string needs to be in <>
using namespace std;

int main(){
    double a = 8.4594; // decimal number so double
    string b = "hello"; // this is a string
    char c = 'd'; // this is a char
    bool d = true; // the data type is bool
    char e = 'Z';
	
	// print out: is cout/ string has to have " " / operators go inwards/  endline is spelt wrong
	cout << "Hello world this is a C++ program" << endl;
	// when stating a variable it as to be exact / operators go inwards/ no endl at the end
	cout << "My number is " << a << endl;
    system("pause");
    return 0;
}