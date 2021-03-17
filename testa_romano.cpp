#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "romano.hpp"

TEST_CASE("Numeros romanos", "[romanos]") {
    REQUIRE( romanos_para_decimal("I") == 1);
    REQUIRE( converter_algarismo('I') == 1 );
    REQUIRE( converter_algarismo('V') == 5 );
    REQUIRE( converter_algarismo('X') == 10 );
    REQUIRE( converter_algarismo('L') == 50 );
    REQUIRE( converter_algarismo('C') == 100 );
    REQUIRE( converter_algarismo('D') == 500 );
    REQUIRE( converter_algarismo('M') == 1000 );
}