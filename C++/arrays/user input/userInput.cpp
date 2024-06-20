#include <iostream>

using std::cin;
using std::cout;
using std::getline;
using std::string;

int main()
{

  string cars[][3] = {{"Mustang", "Escape", "F-150"},
                      {"Corvette", "Equinox", "Silverado"},
                      {"Challenger", "Durango", "Ram 1500"}};

  // cout << cars[0][0] << "\n";
  // cout << cars[0][1] << "\n";
  // cout << cars[0][2] << "\n\n";

  // cout << cars[1][0] << "\n";
  // cout << cars[1][1] << "\n";
  // cout << cars[1][2] << "\n\n";

  // cout << cars[2][0] << "\n";
  // cout << cars[2][1] << "\n";
  // cout << cars[2][2] << "\n\n";

  int rows = sizeof(cars) / sizeof(cars[0]);
  int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout << cars[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}
