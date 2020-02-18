#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "value_ref.h"



TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify the sum_of_squares function") {
	REQUIRE(sum_of_squares(4) == 30);
}

TEST_CASE("verify the main of 03 module") {
	int num1 = 5, num2 = 10;
	
	pass_by_val_and_ref(num1, num2);

	REQUIRE(num1 == 5);
	REQUIRE(num2 == 10);

}

TEST_CASE()