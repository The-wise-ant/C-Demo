#include <iostream>

using std::cin;
using std::cout;

int main()
{

  for (int i = 1; i <= 10; i++)
  {
    if (i == 5 || i == 6 || i == 7) continue;

    if (i == 8)    break;
    cout << i << "\n";
  }

  return 0;
}