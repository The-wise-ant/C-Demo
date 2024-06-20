#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int main()
{
  vector<int> data = {1, 2, 3};

  data.push_back(4);

  cout << data[data.size() - 1] << "\n";

  data.pop_back();

  cout << "Size: " << data.size() << "\n";

  for (int num : data)
  {
    cout << num << "\t";
  }

  return 0;
}