#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

int main()
{

  int age;
  cout << "Enter your age: \n";
  cin >> age;

  if (age < 0)
  {
    cout << "You haven't been born yet!";
  }

  else if (age >= 100)
  {
    cout << "You are too old to enter this site!";
  }

  else if (age < 18)
  {
    cout << "You are too young!";
  }
  else if (age >= 18)
  {
    cout << "Welcome to the site!";
  }

  return 0;
}