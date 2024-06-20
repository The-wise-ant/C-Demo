#include <iostream>

using std::cin;
using std::cout;
using std::getline;
using std::string;

int main()
{

  string name;
  int age;

  cout << "What is your age?\n";
  cin >> age;

  cout << "What is your full name?\n";
  getline(cin >> std::ws, name);

  cout << "Hello " << name << "!\n";
  cout << "You are " << age << " years old!\n";

  return 0;
}