#include <iostream>
#include <ctime>

using std::cin;
using std::cout;

int main()
{

  cout << "*********Number Guessing game**********\n";

  srand(time(NULL));

  int num = (rand() % 100) + 1;
  int guess;
  int tries = 0;

  do
  {
    cout << "Enter a number between 1-100: ";
    cin >> guess;
    tries++;

    if (guess < num)
    {
      cout << "Too low!\n";
    }
    else if (guess > num)
    {
      cout << "Too high!\n";
    }
    else
    {
      cout << "Congrats! The number was: " << num << ". You won with " << tries << " tries!\n";
    }
  } while (guess != num);

  cout << "**********************************";

  return 0;
}
