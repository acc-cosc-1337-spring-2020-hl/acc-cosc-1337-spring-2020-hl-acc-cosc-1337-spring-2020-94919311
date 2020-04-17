#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	int r = 0, p = 0;
	int &r_ref = r;
	int* p_ptr = &p;

	cout << "Adress of r: " << &r << "\n";
	cout << "Adress r_ref: " << &r_ref << "\n";
	cout << "Adress r_ref points to: " << &r_ref << " value reference: " << r_ref << "\n\n\n";

	cout << "Adress of p: " << &p << "\n";
	cout << "Adress of p_ptr " << &p_ptr << "\n";
	cout << "Adress p_ptr points to " << p_ptr << " value pointed to " << *p_ptr << "\n";


	return 0;
}