#include <iostream>
using std::boolalpha;
using std::cout;
using std::cin;
using std::endl;

int main() {
  bool go {true};

  if (int speed = 10, super_speed{11}; go) { // <= speed and super_speed are declared here and are available in the if and the else
  // can't declare multiple variables of different types but can use an ad-hoc struct for that
  // chatgpt shat the bed on this
    cout << "speed : " << speed << " " << "super speed: " << super_speed << endl;
    if(speed > 5) {
      cout << "Slow down!" << endl;
    } else {
      cout << "All good!" << endl;
    }
  } else {
    cout << "speed : " << speed << endl;
    cout << "super speed : " << super_speed << endl;
    cout << "Stop" << endl;
  }

  //std::cout << "Out of the if block , speed : " << speed << std::endl;
  return 0;
}