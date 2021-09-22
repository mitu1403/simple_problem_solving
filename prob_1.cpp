/*
  1. Write a program to check the divisibility of two numbers. Use the concept of default argument here. If the number is not divisible, check whether the first number is a prime or not, using the previously defined divisibility check function.
*/

#include <iostream>
#include <math.h>

using namespace std;

class diiv
{
public:
  int m, n, answer;
  bool flag = false;

  void check(int x = 10, int y = 10)
  {
    if (y % x == 0)
    {
      cout << "The number is divisible" << endl;
    }
    else
    {
      for (int i = 3; i <= sqrt(x); i += 2)
      {
        if (x % i == 0)
        {
          flag = true;
          break;
        }
      }
      if (flag)
      {
        cout << "\nFirst number is not a prime number" << endl;
      }
      else
      {
        cout << "\nFirst number is a prime number" << endl;
      }
    }
  }
};

int main()
{
  diiv a;
  cout << "\nFor Default Argument: "
       << " ";
  a.check(); // Default Argument
  cout << "\nWhen All Arguments are Passed:"
       << " ";
  a.check(4, 3);
}