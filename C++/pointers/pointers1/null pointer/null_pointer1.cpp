#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{

int *pointer = nullptr;
int x = 123;

cout << pointer <<"\n";

pointer = &x;
cout << pointer <<"\n";
cout << *pointer <<"\n";


  return 0;
}

