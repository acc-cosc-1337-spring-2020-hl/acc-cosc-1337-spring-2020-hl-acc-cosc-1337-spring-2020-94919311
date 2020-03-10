#include "bank_account.h"
#include "checking_account.h"
#include<vector>

using std::cout;
using std::vector;

int main()
{
	CheckingAccount a(50), b(10);

	// BankAccount c = A + b;

	BankAccount a(50), b(10);
	display_balance(a);
	cout << a;

	vector<BankAccount> accounts{ BankAccount(100), BankAccount(200), BankAccount(300) };

	for (auto act : accounts)
	{
		cout << act.get_balance() << "\n";
	}

	BankAccount account(500);
	int balance =account.get_balance();
	cout << "\nBalance: " <<balance;

	try {
		account.deposit(-10);
	}
	catch (InvalidAmount e)
	{
		cout <<  e.get_message();
	}
	return 0;
}