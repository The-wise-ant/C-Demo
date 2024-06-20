#include <iostream>

using std::cin;
using std::cout;
using std::string;

void printInfo(const string &name, const int &age);

int main()
{

  string name = "Frank";
  int age = 44;

  printInfo(name, age);

  return 0;
}

void printInfo(const string &name, const int &age)
{

  /* 
  const keyword makes it impossible to modify parameters by accident like this:

  name = " ";
  age = 0;

   thus making the code overall more secure.
*/
  cout << "Name: " << name << "\n";
  cout << "Age: " << age << "\n";
}