#include <iostream>

using std::cin;
using std::cout;

int main()
{

  srand(time(NULL));

  int num = (rand() % 6) + 1;

  cout << num;

  return 0;
}