#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "romano.hpp"

TEST_CASE("Numeros romanos", "[romanos]") {
    REQUIRE( romanos_para_decimal("I") == 1);
}