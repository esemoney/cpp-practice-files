using namespace std;
#include <iostream>
#include <vector>
#include<string>
#include<fstream>

int main()
{
	cout <<"Hello World!!!!!!!!!!!!" << endl; // this line prints "hello world to the screen
	
	// Declaring variables in c++ is really straightforward. First declare the data type. Then begin with a letter and can contain other letters, numbers and underscores. I prefer to use lower camel case for variable names. Like in Java.
	
	// You can declare constants such as pi in your program. Constant variables can not be changed and are typically written in upper case.  See below;
	
	const double PI = 3.1415926535;
	
	cout << PI << endl;
	
	// Data types
	
	// char which contains only one character surrounded by single quotes. and takes up 1 byte in memory. See below;
	
	char myGrade = 'A';
	
	cout << myGrade << endl;
	
	// boolean variables start with "is" whenever you ddefine them. They hold either "true" or "false". True is comparable to 1 and false to 0.
	
	bool isHappy = false;
	
	cout << isHappy << endl;
	
	// the int data type refers to integers without decimal places.
	
	int myAge = 17;
	
	cout << myAge << endl;
	
	// float holds numbers with decimal places accurate to 6 decimal places.
	
	float myFloat = 3.123456;
	
	cout << myFloat << endl;
	
	// double holds numbers with decimal places accurate to 15 decimal places.
	
	double myDouble = 1.61234567907;
	
	cout << myDouble << endl;
	
	// To display a variable on screen, 
	
	cout << "I am " << myAge << " years old." << endl;
	
	/* Other data types are;
		long int
		short int
		long long int
		unsigned int
		long double
	*/
	
	// To check the size in bytes of a variable, use the function "sizeof". Can be used for int, double, char, bool, and floats. 
	
	cout << "Size of int is " << sizeof(myAge) <<" bytes." << endl;
	
	// Arithmetic operators are +, -, *, /, %.
	
	cout << "5 + 2 = " << 5 + 2 <<endl;
	
	cout << "5 - 3 = " << 5 - 3 <<endl;
	
	cout << "5 * 3 = " << 5 * 3 << endl;
	
	cout << "5 / 3 = " << 5 /3 << endl;
	
	// when carrying out integer division (/), decimal values are truncated. FOr example, 5 / 3 would give 1.  To return the decimal points, something called CASTING has to be used. See below;
		
	cout << "5 / 3  using casting to float is " << (float)5/3  <<"." << endl; 
	
	cout << "5 / 3  using casting to double is " << (double)5/3  <<"." << endl; 
	
	
	
	
	
	
	return 0;
}