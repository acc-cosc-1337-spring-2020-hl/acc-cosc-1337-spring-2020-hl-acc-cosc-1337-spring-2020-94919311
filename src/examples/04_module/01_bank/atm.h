//atm.h
#include <vector>
#include "savings_account.h"
#include "checking_account.h"

#ifndef ATM_H
#define ATM_H

class ATM
{
public:
	ATM()
	{
		accounts.push_back(SavingsAccount(1000);
		accounts.push_back(CheckingAccount(400));
	}
	friend std::ostream& operator<<(stdostream& out, const BankAccount& b);
private:
	std::vector<BankAccount> accounts;


};








#endif // !ATM_H