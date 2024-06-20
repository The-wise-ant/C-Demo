#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{

  // cout << "Size of int " << sizeof(int) << " Bytes\n";
  // cout << "Size of double " << sizeof(double) << " Bytes\n";
  // cout << "Size of string " << sizeof(string) << " Bytes\n";
  // cout << "Size of char " << sizeof(char) << " Bytes\n";
  // cout << "Size of boolean " << sizeof(bool) << " Bytes\n";

  double prices[] = {2.99, 14.34, 0.99, 10.00, 8.77};

  cout << "Bytes in double: " << sizeof(double) << "\n";
  cout << "Bytes in prices: " << sizeof(prices) << "\n";

   cout << "Number of elements in prices: " << sizeof(prices) / sizeof(prices[0]) << "\n";

  return 0;
}