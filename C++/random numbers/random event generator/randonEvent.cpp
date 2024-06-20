#include <iostream>
#include <ctime>

using std::cin;
using std::cout;

int main()
{

  srand(time(NULL));

  int result = (rand() % 5) + 1;

  switch (result)
  {
  case 1:
    cout << "You won a bumper sticker!\n";
    break;
  case 2:
    cout << "You won a t-shirt! \n";
    break;
  case 3:
    cout << "You won free lunch! \n";
    break;
  case 4:
    cout << "You won a gift card!\n";
    break;
  case 5:
    cout << "You won concert tickets!\n";
    break;

  default:
    break;
  }

  return 0;
}