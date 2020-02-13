//write includes statements
#include "loops.h"
#include <iostream>
//write using statements for cin and cout


/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
using std::cout;
using std::cin;

int main() 
{
	int option;
	while (option == 1) {
		
		cout << "Please enter the number: " << "\n";
		int num;
		cin >> num;
		cout << "The factorial of "<< num << "is" << factorial(num);
		cout << "Do you want to continue? enter 1";
		cin >> option;
	}
	return 0;
}