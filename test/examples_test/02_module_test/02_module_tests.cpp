#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "switch.h"




TEST_CASE("Test menu function")
{

	REQUIRE(menu(1) == "Option 1");

}