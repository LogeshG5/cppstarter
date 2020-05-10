#include <project.h>
#include <catch2/catch.hpp>

TEST_CASE("check sum of int", "[sum]")
{
    REQUIRE(sum(2, 3) == 5);
}

TEST_CASE("check sum of double", "[sum]")
{
    REQUIRE(sum(2.0, 3.1) == 5.1);
}
