#include <iostream>
using std::boolalpha;
using std::cout;
using std::cin;
using std::endl;

int main() {
  constexpr bool condition {false}; // <= this value will be burnt into your binary

  if constexpr (condition) {
    std::cout << "Condition is true" << std::endl; // This will be eliminated at compile time
  } else {
    std::cout << "Condition is false" << std::endl; // This will be evaluated at compile time and burn into the binary
  }
  return 0;
}