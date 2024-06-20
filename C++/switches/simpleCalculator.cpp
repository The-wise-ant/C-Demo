#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

int main()
{
  cout << "***************Calculator***************** \n";

  char op;
  double first;
  double second;
  double result;

  cout << "Enter operation(+ - * /): \n";
  cin >> op;

  cout << "Enter first number: \n";
  cin >> first;

  cout << "Enter second number: \n";
  cin >> second;

  switch (op)
  {
  case '+':
    result = first + second;
    cout << "The result is: " << result;
    break;

  case '-':
    result = first - second;
    cout << "The result is: " << result;
    break;

  case '*':
    result = first * second;
    cout << "The result is: " << result;
    break;

  case '/':
    result = first / second;
    cout << "The result is: " << result;
    break;

  default:
    cout << "Invalid option. Pick an operation(+ - * /)";
    break;
  }

  cout << "\n******************************************";

  return 0;
}