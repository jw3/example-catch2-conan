#include <catch.hpp>
#include <Cache.h>

TEST_CASE("catch") {
   Cache c;

   std::string expected = "y";
   c.put("x", expected);

   REQUIRE(c.get("x"));
   REQUIRE(c.get("x") == expected);
}
