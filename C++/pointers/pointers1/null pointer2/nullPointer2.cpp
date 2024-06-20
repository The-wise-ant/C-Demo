#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{

  int *pointer = nullptr;
  int x = 123;

  pointer = &x;

  if (pointer == nullptr)
  {
    cout << "Pointer was not assigned\n";
  }
  else
  {
    cout << "Pointer was assigned\n";
    cout << *pointer << "\n";
  }

  return 0;
}
