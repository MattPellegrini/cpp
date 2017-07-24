// Note this will need to be compiled with -std=c++11 for the {} style initialisation to work
#include <iostream>

using namespace std;

int main()
{
  int a = 0;
  int b (0);
  int c {0};
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  cout << "c: " << c << endl;
  return 0;
}
