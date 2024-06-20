#include <iostream>

using std::cin;
using std::cout;


int main()
{

  // int *pNum = nullptr;
  // pNum = new int;
  // *pNum = 21;
  // cout << "Address " << pNum << "\n";
  // cout << "Value " << *pNum << "\n";
  // delete pNum;

  char *pGrades = nullptr;

  int size;

  cout << "How many grades to enter in?: \n";
  cin >> size;

  pGrades = new char[size];

  for (int i = 0; i < size; i++)
  {
    cout << "Enter grade #" << i + 1 << ": ";
    cin >> pGrades[i];
  }

  for (int i = 0; i < size; i++)
  {
    cout << pGrades[i] << " ";
  }

delete[] pGrades;

  return 0;
}