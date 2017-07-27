#include <iostream>
using namespace std;

int increment_val(int x)
{
  return ++x;
}

int increment_ref(int& x)
{
  return ++x;
}

int main()
{
  int a = 16;
  cout << "a: " << a << endl;
  cout << "Calling increment_val(a) returns :" << increment_val(a) << endl;
  cout << "a: " << a << endl;
  cout << "Calling increment_ref(a) returns :" << increment_ref(a) << endl;
  cout << "a: " << a << endl;
  cout << "Calling increment_ref(a) returns :" << increment_ref(a) << endl;
  cout << "a: " << a << endl;
}

