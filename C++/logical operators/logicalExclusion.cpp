#include <iostream>

using std::cin;
using std::cout;

int main()
{

  int temp;
  cout << "Is water liquid on your room temperature? \n";
  cout << "Enter temperature in celsius: \n";
  cin >> temp;

  if (temp <= 0 || temp >= 100)
  {
    cout << "At a temperature of " << temp << "C, water is NOT liquid";
  }

  else
  {
    cout << "At a temperature of " << temp << "C, water is liquid";
  }

  return 0;
}