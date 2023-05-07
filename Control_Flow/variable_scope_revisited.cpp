#include <iostream>
#include <string>
using std::cout;
using std::endl;

// Tools
const int Pen{ 10 };
const int Marker{ 20 };
const int Eraser{ 30 };
const int Rectangle{ 40 };
const int Circle{ 50 };
const int Ellipse{ 60 };

int global_var{44};


int main() {
  bool green {false};
  global_var++; // 45

  if (green) {
    global_var++; 
    int car_count{23};
    cout << "Light is green " << car_count << "on the move!" << endl;
  } else {
    //car_count++; // Compiler error
    global_var++; // 46
    cout << "Light is not green. Y'all should STOP!" << endl;
  }

  //car_count++;
  cout << "global_var : " << global_var << endl;
  return 0;
}