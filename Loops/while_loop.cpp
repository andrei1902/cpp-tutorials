#include <iostream>
using std::cout;
using std::endl;

int main()
{
  const size_t COUNT{100};
  size_t i{0};
  int *p = NULL;

  while (i < COUNT)
  {
    cout << i << " : I love C++" << endl;

    ++i;
  }
  cout << "Loop done!" << endl;

  return 0;
}