#include <iostream>
using std::boolalpha;
using std::cout;
using std::cin;
using std::endl;

int main() {
  int max{};
  int a{35};
  int b{200};

  max = (a > b) ? a : b; // Ternary operator
  cout << "max : " << max << endl;
  return 0;
}