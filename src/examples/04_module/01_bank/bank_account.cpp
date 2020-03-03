//bank_account.cpp
#include "bank_account.h"


void BankAccount::deposit(int amount)
{

	if (amount > 0)
	{ 
		balance = +amount;
	}
	else
	{
		throw InvalidAmount("\nAmount must be greater than 0. \n");
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount <= 0)
	{
		throw InvalidAmount("\nAmount must be greater than 0.");
	}
	else if(balance - amount < 0)
	{
		throw InvalidAmount("\n Insufficient funds. \n");
	}
	else
	{
		balance -= amount;
	}
}

void BankAccount::open(int amount)
{
	if (balance > 0)
	{
		throw InvalidAmount("\nAccount alreay open\n");
	}
	if (amount >= min_balance_to_open)
	{
		balance += amount;\
	}
	else
	{
		throw InvalidAmount("\n A deposit of at least 25 must be made\n");
	}

}
