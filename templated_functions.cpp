#include <iostream>
using namespace std;

template <class T>

T double_me(T t)
{
  return t + t;
}

int main()
{
  int x = 5;
  double d = 1.56;
  float f = 1.1f;
  string s = "hello";
  cout << "x: " << x << endl;
  cout << "d: " << d << endl;
  cout << "f: " << f << endl;
  cout << "s: " << s << endl;
  cout << "double_me<int>(x): " << double_me<int>(x) << endl;
  cout << "double_me<double>(d): " << double_me<double>(d) << endl;
  cout << "double_me<float>(f): " << double_me<float>(f) << endl;
  cout << "double_me<string>(s): " << double_me<string>(s) << endl;

  // In these cases the compiler can deduce the types and therefore function to call automatically, so we can be less explicit.
  cout << "double_me(x): " << double_me(x) << endl;
  cout << "double_me(d): " << double_me(d) << endl;
  cout << "double_me(f): " << double_me(f) << endl;
  cout << "double_me(s): " << double_me(s) << endl;

}

