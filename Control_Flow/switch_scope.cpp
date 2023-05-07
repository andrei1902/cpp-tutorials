#include <iostream>
#include <string>
using std::cout;
using std::endl;

int main() {
  int condition{1};
  int my_var{4};

  switch (int data{7}; condition) {
    //int x{9}; // Never going to run
    int x;
  case 0: // !!! <= using {} for this case creates a nested scope with it's own variables
    //int y {5};
    int y;
    x = 6;
    x++;
    //z =6;
    cout << "x : " << x << endl;
    cout << "Statement1" << endl;
    cout << "Statement2" << endl;
    break;
  case 1:
    int z;
    my_var++;
    y = 5;
    x++; // <= Will fail if x is not initialized at line 12
    cout << "y : " << y << endl;
    cout << "x : " << x << endl;
    cout << "Statement3" << endl;
    cout << "Statement4" << endl;
    break;
  default:
    int u;
    z = 10;
    cout << "Statement5" << endl;
    cout << "Statement6" << endl;
    break;
  }
  cout << "Moving on..." << endl;

  return 0;
}