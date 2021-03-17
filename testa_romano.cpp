#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "romano.hpp"

TEST_CASE("Algarismo romano", "[romanos]") {
    REQUIRE( converter_algarismo('I') == 1 );
    REQUIRE( converter_algarismo('V') == 5 );
    REQUIRE( converter_algarismo('X') == 10 );
    REQUIRE( converter_algarismo('L') == 50 );
    REQUIRE( converter_algarismo('C') == 100 );
    REQUIRE( converter_algarismo('D') == 500 );
    REQUIRE( converter_algarismo('M') == 1000 );
}

TEST_CASE("Numeros romanos de um algarismo", "[romanos]") {
    REQUIRE( romanos_para_decimal("I") == 1 );
    REQUIRE( romanos_para_decimal("V") == 5 );
    REQUIRE( romanos_para_decimal("X") == 10 );
    REQUIRE( romanos_para_decimal("L") == 50 );
    REQUIRE( romanos_para_decimal("C") == 100 );
    REQUIRE( romanos_para_decimal("D") == 500 );
    REQUIRE( romanos_para_decimal("M") == 1000 );
}

TEST_CASE("Numeros romanos de dois algarismos", "[romanos]") {
    REQUIRE( romanos_para_decimal("II") == 2 );
    REQUIRE( romanos_para_decimal("IV") == 4 );
    REQUIRE( romanos_para_decimal("XI") == 11 );
    REQUIRE( romanos_para_decimal("LII") == 52 );
    REQUIRE( romanos_para_decimal("IC") == 99 );
    REQUIRE( romanos_para_decimal("DIII") == 503 );
    REQUIRE( romanos_para_decimal("MD") == 1500 );
}

TEST_CASE("Numeros romanos de tres algarismos", "[romanos]") {
    REQUIRE( romanos_para_decimal("III") == 3 );
    REQUIRE( romanos_para_decimal("VII") == 7 );
    REQUIRE( romanos_para_decimal("XVI") == 16 );
    REQUIRE( romanos_para_decimal("LXX") == 70 );
    REQUIRE( romanos_para_decimal("XCV") == 95 );
    REQUIRE( romanos_para_decimal("DXC") == 590 );
    REQUIRE( romanos_para_decimal("MLV") == 1055 );
}

TEST_CASE("Numeros invalidos", "[romanos]") {
    REQUIRE( romanos_para_decimal("AAA") == -1 );
    REQUIRE( romanos_para_decimal("xx") == -1 );
}

