#include <iostream>

using std::cin;
using std::cout;
using std::getline;
using std::string;

int main()
{

  string name;

  while (name.empty())
  {
    cout << "Enter your name: ";
    getline(cin, name);
  }

  cout << "Welcome " << name;

  return 0;
}