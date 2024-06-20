#include <iostream>

using std::cin;
using std::cout;
using std::getline;
using std::string;

int main()
{
  string foods[5];
  int size = sizeof(foods) / sizeof(foods[0]);

  for (int i = 0; i < size; i++)
  {
    string temp;
    cout << "Enter a food you like or 'q' to quit #" << i + 1 << "\n";
    getline(cin, temp);

    if (temp == "q")
    {
      break;
    }
    else
    {
      foods[i] = temp;
    }
  }

  for (int i = 0; !foods[i].empty(); i++)
  {
    cout << foods[i] << "\n";
  }

  return 0;
}
