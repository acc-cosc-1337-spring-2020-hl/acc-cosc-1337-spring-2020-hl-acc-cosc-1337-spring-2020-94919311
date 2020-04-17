#include <iostream>

using std::cout;

int main() 
{
	int* ptr_num = new int(5); 


	cout << &ptr_num << "\n"; // displays the adress where ptr_num is stored
	cout << ptr_num << "\n"; // displays the adress where 5 is stored 
	cout << *ptr_num << "\n"; 

	delete ptr_num;
	ptr_num = nullptr;

	return 0;
}