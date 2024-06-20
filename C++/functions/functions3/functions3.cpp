#include <iostream>

using std::cin;
using std::cout;
using std::string;

string concatStrings(string string1, string string2);

int main()
{

  string firstName = "John";
  string lastName = "Doe";
  string fullName = concatStrings(firstName, lastName);
  cout << "Hello, " << fullName;

  return 0;
}

string concatStrings(string string1, string string2)
{
  return string1 + " " + string2;
}
