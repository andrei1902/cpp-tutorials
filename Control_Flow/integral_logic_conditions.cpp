#include <iostream>
using std::boolalpha;
using std::cout;
using std::cin;
using std::endl;

int main()
{
  int condition {-5};
  bool bool_condition = condition; // implicit conversion here
  cout << std::boolalpha;
  // if (condition) { // <== stil a number here
  if (bool_condition) {
    cout << "We have a " << bool_condition << " in our variable " << endl; // different from 0
  } else {
    cout << "We have " << bool_condition << " in our variable" << endl; // zero
  }

  return 0;
}