#include <iostream>

void five(int x)
{
  std::cout << "Value: " << x << std::endl;
}

void call_func(void f(int))
{
  f(5);
  return;
}

int main()
{
  call_func(five);
}
