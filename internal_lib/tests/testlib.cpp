#include <catch2/catch.hpp>
#include <lib.hpp>

TEST_CASE("Quick check", "[main]")
{
   std::vector<double> values{1, 2., 3.};
   auto [mean, moment] = accumulate_vector(values);

   REQUIRE(mean == 2.0);
   REQUIRE(moment == Approx(4.666666));
}

TEST_CASE("reverse 5 items", "reverse")
{
   std::vector<int> values{1, 2, 3, 4, 5};
   std::vector<int> rvalues{5, 4, 3, 2, 1};
   reverse_t(begin(values), end(values));
   REQUIRE(values == rvalues);
}
TEST_CASE("reverse 2 items", "reverse")
{
   std::vector<int> values{1, 2};
   std::vector<int> rvalues{2, 1};
   reverse_t(begin(values), end(values));
   REQUIRE(values == rvalues);
}
TEST_CASE("reverse 0 items", "reverse")
{
   std::vector<int> values{};
   std::vector<int> rvalues{};
   reverse_t(begin(values), end(values));
   REQUIRE(values == rvalues);
}

TEST_CASE("rotate + 2", "rotate")
{
   std::vector<int> values{1, 2, 3, 4, 5};
   std::vector<int> rvalues{3, 4, 5, 1, 2};
   rotate_t(begin(values), begin(values) + 2, end(values));
   REQUIRE(values == rvalues);
}

TEST_CASE("rotate + 3", "rotate")
{
   std::vector<int> values{1, 2, 3, 4, 5};
   std::vector<int> rvalues{4, 5, 1, 2, 3};
   rotate_t(begin(values), begin(values) + 3, end(values));
   REQUIRE(values == rvalues);
}

TEST_CASE("rotate nothing", "rotate")
{
   std::vector<int> values{1, 2, 3, 4, 5};
   std::vector<int> rvalues{1, 2, 3, 4, 5};
   rotate_t(begin(values), begin(values), end(values));
   REQUIRE(values == rvalues);
}