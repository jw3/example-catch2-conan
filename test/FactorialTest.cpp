unsigned int Factorial(unsigned int number) {
   return number <= 1 ? number : Factorial(number - 1) * number;
}

TEST_CASE("Factorials are computed1") {
REQUIRE(Factorial(1) == 1);
}

TEST_CASE("Factorials are computed2") {
REQUIRE(Factorial(2) == 2);
}

TEST_CASE("Factorials are computed3") {
REQUIRE(Factorial(3) == 6);
}

TEST_CASE("Factorials are computed10") {
REQUIRE(Factorial(10) == 3628800);
}
