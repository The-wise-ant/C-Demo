#include <iostream>

using std::cin;
using std::cout;
using std::getline;
using std::string;

int factorial(int num);
void walk(int steps);

int main()
{

 cout << factorial(5);

  return 0;
}

int factorial(int num)
{
  if (num > 1)
  {
    return num * factorial(num - 1);
  }
  else
  {
    return 1;
  }
}
void walk(int steps)
{
  if (steps > 0)
  {
    cout << "You take a step! \n";
    return walk(steps - 1);
  }
}