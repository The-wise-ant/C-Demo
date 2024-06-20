#include <iostream>

using std::cin;
using std::cout;

int main()
{

  int rows;
  int columns;
  char symbol;

  cout << "Enter rows in number: ";
  cin >> rows;

  cout << "Enter columns in number: ";
  cin >> columns;

  cout << "Enter symbol: ";
  cin >> symbol;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout << symbol;
    }

    cout << "\n";
  }

  return 0;
}