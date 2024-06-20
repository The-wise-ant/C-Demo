#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{

  string students[] = {"Spongebob", "Patrick", "Squidward"};

  int size = sizeof(students) / sizeof(students[0]);

  for (int i = 0; i < size; i++)
  {
    cout << students[i] << "\n";
  }

  return 0;
}