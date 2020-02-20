#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "value_ref.h"
#include "vec.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify the sum_of_squares function") {
	REQUIRE(sum_of_squares(4) == 30);
}



TEST_CASE("Test loop_vector_w_index value parameter") {
	vector<int> nums{ 9, 10, 99, 5, 67 };
	vector<int> expected{ 9, 10, 99, 5, 67 };

	loop_vector_w_index(nums);
	
	REQUIRE(nums == expected);

}

TEST_CASE("Test loop_vector_w_index value parameter") {
	vector<int> nums{ 9, 10, 99, 5, 67 };
	vector<int> expected{ 0, 0, 00, 0, 0 };

	loop_vector_w_index_ref(nums);

	REQUIRE(nums == expected);

}