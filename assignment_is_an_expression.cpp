/*
 * Outputs:
 * 	5
 * 	FALSE
 * 	TRUE
 * 	6
 *
*/

#include <iostream>
using namespace std;

int main()
{
  int x = 5;

  cout << "X :" << x << endl;
  x == 6 ? cout << "TRUE" << endl : cout << "FALSE" << endl;
  cout << "X :" << x << endl;
  // ? binds tighter than =, == binds tigher than both.
  // http://en.cppreference.com/w/c/language/operator_precedence 
  (x = 6) ? cout << "TRUE" << endl : cout << "FALSE" << endl;
  cout << "X :" << x << endl;
  (x = 0) ? cout << "TRUE" << endl : cout << "FALSE" << endl;
  cout << "X :" << x << endl;
}
