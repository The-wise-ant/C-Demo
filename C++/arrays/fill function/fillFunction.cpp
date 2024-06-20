#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{

  string items[9];

  int size = sizeof(items) / sizeof(items[0]);

  fill(items, items + size / 3, "Pizza");
  fill(items + size / 3, items + (size / 3) * 2, "Hamburger");
  fill(items + (size / 3) * 2, items + size, "Hotdog");

  for (string item : items)
  {
    cout << item << "\n";
  }

  return 0;
}
