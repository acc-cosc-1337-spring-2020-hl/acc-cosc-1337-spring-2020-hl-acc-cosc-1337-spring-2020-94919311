#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Reverse") {
	REQUIRE(get_reverse_string("AGCTATG") == "GATATFGA");
	REQUIRE(get_reverse_string("CGCTATAG") == "GATATCGC");

}
TEST_CASE("get_complement") {
	REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
	REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCGGG");

}
TEST_CASE("get_GC_content") {
	REQUIRE(get_gc_content("AGCTATG") == .375);
	REQUIRE(get_gc_content("CGCTATG") == .5);

}
TEST_CASE("Reverse string") {
	REQUIRE(true == true);

}