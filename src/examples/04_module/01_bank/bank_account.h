//bank_account.h
#include<string>
#include<iostream>
#ifndef BankAccount_H 
#define BankAccount_H

class BankAccount 
{
public:
	BankAccount() = default;
	explicit BankAccount(int b) : balance{ b } {}
	int get_balance() const {return balance;}
	void deposit(int amount);
	void withdraw(int amount);
	void open(int amount);
	double get_rate() const { return rate; }
	friend void display_balance(const BankAccount & b);
	friend std::ostream& operator <<(std::ostream& out, const BankAccount& b);
	friend std::istream& operator >>(std::istream& in, BankAccount& b);

protected:
	int balance{ 0 };
private:
	const int min_balance_to_open{ 25 };
	static double rate;
	static double init_rate() { return 0.25; }
};


class InvalidAmount
{
public:
	InvalidAmount(std::string msg) : message{ msg } {}
	std::string get_message() const { return message; }
private:
	std::string message;

};

double BankAccount::rate = init_rate();


#endif // !BankAccount_H