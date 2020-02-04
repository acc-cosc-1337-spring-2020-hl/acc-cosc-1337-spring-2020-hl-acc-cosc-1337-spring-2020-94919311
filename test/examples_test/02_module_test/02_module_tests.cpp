#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Tests even function")
{

	REQUIRE(is_even(4) == true);

}

TEST_CASE("Test get generation function")
{
	REQUIRE(get_generation(1197) == "Centenials");


}