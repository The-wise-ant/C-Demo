#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::getline;
using std::string;

int main()
{

  double temp;
  char unit;
  cout << "*********Temperature converter********\n";

  cout << "F = Fahrenheit\n";
  cout << "C = Celsius\n";
  cout << "What unit would you like to convert to? : \n";

  cin >> unit;

  if (unit == 'F' || unit == 'f')
  {
    cout << "Enter teperature in Celsius: \n";
    cin >> temp;

    temp = (1.8 * temp) + 32.0;
    cout << "Temperature is " << temp << "F\n";
  }
  else if (unit == 'C' || unit == 'c')
  {
    cout << "Enter teperature in Fahrenheit: \n";
    cin >> temp;

    temp = (temp - 32) / 1.8;
    cout << "Temperature is " << temp << "C\n";
  }
  else
  {
    cout << "Please enter in only C or F";
  }

  cout << "**************************************";

  return 0;
}