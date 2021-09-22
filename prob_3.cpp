/*
  3. Write a program to create a class named 'age-calculator', containing variable 'year', 'month'. Create two objects of the class, one containing present year, month and another containing your birth year, month. Subtract and show the difference between two dates by using both member function and friend function.

*/

#include <iostream>
using namespace std;

class AgeCalculator
{
private:
  int year;
  int month;

public:
  AgeCalculator(int y, int m)
  {
    year = y;
    month = m;
  }
  friend void showDiffByFriend(AgeCalculator ac1, AgeCalculator ac2);
  void showDiffByMember(AgeCalculator ac);
};
void showDiffByFriend(AgeCalculator ac1, AgeCalculator ac2)
{
  int y, m;
  y = ac1.year - ac2.year;
  if (ac1.month >= ac2.month)
    m = ac1.month - ac2.month;
  else
    m = 12 - (ac2.month - ac1.month), y--;
  cout << "Using Friend Function: " << y << " year " << m << " month" << endl;
}
void AgeCalculator::showDiffByMember(AgeCalculator ac)
{
  int y, m;
  y = year - ac.year;
  if (month >= ac.month)
    m = month - ac.month;
  else
    m = 12 - (ac.month - month), y--;
  cout << "Using Member Function: " << y << " year " << m << " month" << endl;
}

int main()
{
  AgeCalculator present(2021, 4);
  AgeCalculator birth(1999, 5);
  showDiffByFriend(present, birth);
  present.showDiffByMember(birth);
}
