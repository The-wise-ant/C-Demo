#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

int main()
{

  double A;
  double B;
  double C;
  double sum;

  cout << "Enter side A: \n";
  cin >> A;

  cout << "Enter side B: \n";
  cin >> B;

  cout << "Enter side C: \n";
  cin >> C;

  sum = A + B + C;

  cout << "the sum of " << A << ", " << B << " and " << C << " is: " << sum;

  return 0;
}