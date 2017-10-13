#include "catch.hpp"
#include <print.hpp>
TEST_CASE("output values should match input values", "[file]") {
std::string text = "hello";
std::ofstream out("file.txt");

print(text, out);
out.close();

std::string result;
std::ifstream in("file.txt");
in >> result;

REQUIRE(result == text);
}
