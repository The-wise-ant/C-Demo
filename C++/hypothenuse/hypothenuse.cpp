#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

int main()
{

  double base;
  double height;
  double hypothenuse;

  cout << "Enter base: \n";
  cin >> base;

  cout << "Enter height: \n";
  cin >> height;

  hypothenuse = sqrt(pow(base, 2) + pow(height, 2));

  cout << "the hypotheuse of a tringle with base: " << base << " and height: " << height << " is: " << hypothenuse;

  return 0;
}