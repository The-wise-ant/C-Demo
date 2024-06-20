#include <iostream>

using std::cin;
using std::cout;
using std::string;

class Pizza
{
public:
  string topping1;
  string topping2;
  string topping3;

  Pizza(){};

  Pizza(string topping1)
  {
    this->topping1 = topping1;
  }

  Pizza(string topping1, string topping2)
  {
    this->topping1 = topping1;
    this->topping2 = topping2;
  }
  Pizza(string topping1, string topping2, string topping3)
  {
    this->topping1 = topping1;
    this->topping2 = topping2;
    this->topping3 = topping3;
  }

  void ingredients()
  {
    cout << "Toppings: ";
    if (this->topping1.empty())
    {
      cout << "No Toppings \n";
    }

    if (!this->topping1.empty())
    {
      cout << this->topping1 << " ";
    }

    if (!this->topping2.empty())
    {
      cout << this->topping2 << " ";
    }
    if (!this->topping3.empty())
    {
      cout << this->topping3 << " ";
    }
    cout << "\n************************\n";
  }
};

int main()
{

  Pizza pizza1("pepperoni");

  Pizza pizza2("mushrooms", "peppers", "prosciutto");

  Pizza pizza3;

  pizza1.ingredients();
  pizza2.ingredients();
  pizza3.ingredients();

  return 0;
}
