#include <iostream>
using std::cin;
using std::cout;
using std::getline;
using std::string;

template <typename T, typename U>
auto max(T a, U b)
{
  return (a > b) ? a : b;
}


int main()
{

  cout << max(98, 'a') << "\n";

  return 0;
}

