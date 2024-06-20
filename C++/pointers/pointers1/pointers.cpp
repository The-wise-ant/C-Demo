#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{

// string name = "Frank";

// string *pName = &name;

// cout << pName <<"\n";
// cout << *pName <<"\n";


// int age = 33;
// int *pAge = &age;

// cout << pAge <<"\n";
// cout << *pAge <<"\n";


string freePizzas[]={"pizza1","pizza2","pizza3","pizza4","pizza5"};

string *pFreePizzas = freePizzas;

cout << &freePizzas <<"\n";
cout << &freePizzas[0] <<"\n";
cout << pFreePizzas <<"\n";
cout << *pFreePizzas <<"\n";


  return 0;
}

