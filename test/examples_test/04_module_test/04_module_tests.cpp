#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
#include"checking_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Bank Account get_balance") {

	CheckingAccount account(150);
	REQUIRE(account.get_balance() == 150);
}


TEST_CASE("Test BankAccount::withdraw()") {
	BankAccount account(150);
	REQUIRE(account.get_balance() == 150);

	account.withdraw(50);
	REQUIRE(account.get_balance() == 100);

	
	REQUIRE_THROWS_AS(account.withdraw(101),
		InvalidAmount);
}

TEST_CASE("Test default constructor open account") {

	BankAccount account;
	account.deposit(25);
	REQUIRE(account.get_balance() == 25);

}

