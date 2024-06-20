#include <iostream>
#include <array>

using namespace std;

void printArray(array<int, 20> array, int size)
{

  for (int i = 0; i < size; i++)
  {
    cout << array[i] << "\t";
  }

  cout << endl;
}

int main()
{

  array<int, 20> arr = {1, 2, 3};

  printArray(arr, 3);

  return 0;
}