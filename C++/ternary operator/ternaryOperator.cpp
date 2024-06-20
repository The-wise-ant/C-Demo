#include <iostream>
#include <cmath>

using std::cout;

int main()
{

  int grade = 75;

  grade >= 60 ? cout << "You pass the test with " << grade : cout << "You failed the test with " << grade;
  cout << std::endl;

  int number = 7;

  number % 2 == 0 ? cout << "EVEN" : cout << "ODD";

  return 0;
}