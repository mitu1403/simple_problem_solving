/*
  4.  Write a program to create a class named 'height', containing variable 'feet', 'inch'. Create two objects of the class, set some value to the first class. Then increment that object by 1 and assign this object to the second object. Display the results of both object after the procedure is completed.
*/

#include <iostream>
using namespace std;

class height
{
public:
  double feet;
  double inch;
  height(double ft, double in)
  {
    feet = ft;
    inch = in;
  }
  //  Incrementing Function
  void operator++()
  {
    ++feet;
    ++inch;
  }
  void Display()
  {
    cout << "feet = " << feet << endl;
    cout << "inch = " << inch << endl;
    cout << "       " << endl;
  }
};

int main()
{
  height h1(6, 40.7);
  h1.Display(); // Before Incrementing h1

  ++h1;
  h1.Display(); // After Incrementing h1

  return 0;
}