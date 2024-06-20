#include <iostream>

using std::cin;
using std::cout;
using std::string;

struct Car
{
  string model;
  int year;
  string color;
};

void printCar(Car car);
void paintBlack(Car &car);

int main()
{

  Car car1;
  car1.model = "Mustang";
  car1.year = 1974;
  car1.color = "purple";

  cout << &car1 << "\n";
  printCar(car1);
  paintBlack(car1);
  printCar(car1);

  return 0;
}

void printCar(Car car)
{
  cout << car.model << "\n";
  cout << car.year << "\n";
  cout << car.color << "\n";
}

void paintBlack(Car &car)
{
  car.color = "Black";
}