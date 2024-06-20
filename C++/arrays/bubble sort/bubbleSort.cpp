#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{

  int arr[] = {5, 3, 2, 1, 4, 10, 8, 9, 7, 6};

  int size = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < size - 1; i++)
  {

    for (int j = 0; j < size - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp;
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  for (int el : arr)
  {
    cout << el << " ";
  }
}
