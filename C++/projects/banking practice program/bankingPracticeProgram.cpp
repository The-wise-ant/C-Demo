#include <iostream>
#include <iomanip>
#include <limits>

using std::cin;
using std::cout;
using std::string;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
  double balance = 0;
  int choice;

  do
  {

    cout << "***************************\n";
    cout << "Enter your choice: \n";
    cout << "***************************\n";
    cout << "1. Show Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit\n";

    cin >> choice;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


    switch (choice)
    {
    case 1:
      showBalance(balance);
      break;
    case 2:
      balance += deposit();
      showBalance(balance);

      break;

    case 3:
      balance -= withdraw(balance);
      showBalance(balance);
      break;

    case 4:
      cout << "Thanks for visiting!\n";
      break;

    default:
      cout << "Invalid Choice!\n";
      break;
    }
  } while (choice != 4);

  return 0;
}

void showBalance(double balance)
{
  cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << "\n";
}

double deposit()
{
  double amount = 0;
  cout << "Enter the amount to be deposited: ";
  cin >> amount;

  if (amount > 0)
  {
    return amount;
  }
  else
  {
    cout << "That's not a valid amount!\n";
  }
}

double withdraw(double balance)
{
  double amount;
  cout << "Enter the amount to be withdrawn: ";
  cin >> amount;

  if (amount > balance)
  {
    cout << "Insuffient funds\n";
    return 0;
  }
  else if (amount <= 0)
  {
    cout << "That's not a valid amount!\n";
    return 0;
  }
  else
  {
    return amount;
  }
}
