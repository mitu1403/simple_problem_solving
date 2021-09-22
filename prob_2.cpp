/*
  2. Write a program to create a class named 'vehicle', containing variable 'brand', 'horsepower'. Create two objects of the class, then set some values for the first object and use that first object to initialize the second object. Finally display the values of both objects of the defined class.
*/

#include <iostream>

using namespace std;

class vehicle
{
public:
  //decalring variables
  string brand;
  double horsepower;

  //parameterized constructor
  vehicle(string b, double hp)
  {
    //sets brand and horsepower
    brand = b;
    horsepower = hp;
  }

  vehicle(vehicle &v) //copy constructor
  {
    //sets same brand and horsepower
    brand = v.brand;
    horsepower = v.horsepower;
  }
};

int main()
{
  vehicle v1("Ferrari", 450); //creates vehicle using parameterized constructor
  vehicle v2(v1);             //creates vehicle using copy constructor

  //prints vehicle1 data
  cout << "Vehicle 1" << endl;
  cout << "Brand :" << v1.brand << endl;
  cout << "Horsepower: " << v1.horsepower << endl;

  //prints vehicle2 data
  cout << "\nVehicle 2" << endl;
  cout << "Brand :" << v2.brand << endl;
  cout << "Horsepower: " << v2.horsepower << endl;

  return 0;
}