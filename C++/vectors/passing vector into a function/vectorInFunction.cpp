#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

void printVectorCopy(vector<int> vector)
{
  vector.push_back(4);

  for (int i = 0; i < vector.size(); i++)
  {
    cout << vector[i] << "\t";
  }
  cout << std::endl;
}

void printVectorAddress(vector<int> &vector)
{
  vector.push_back(4);
  for (int i = 0; i < vector.size(); i++)
  {
    cout << vector[i] << "\t";
  }
  cout << std::endl;
}

int main()
{
  vector<int> numbers = {1, 2, 3};

  printVectorCopy(numbers);
  printVectorCopy(numbers);
  printVectorCopy(numbers);

  cout << "\n***********************************\n";
  printVectorAddress(numbers);
  printVectorAddress(numbers);
  printVectorAddress(numbers);

  return 0;
}