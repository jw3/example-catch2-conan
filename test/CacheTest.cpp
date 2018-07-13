#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch.hpp>
#include <Cache.h>

TEST_CASE("catch") {
   Cache c;

   std::string expected = "y";
   c.put("x", expected);

   REQUIRE(c.get("x").value_or("_") == expected);
}
