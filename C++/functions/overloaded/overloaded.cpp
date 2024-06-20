#include <iostream>

using std::cin;
using std::cout;
using std::string;

void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);

int main()
{

  bakePizza();
  bakePizza("pepperoni");
  bakePizza("pepperoni", "mushrooms");

  return 0;
}

void bakePizza()
{
  cout << "Here is your pizza!\n";
}
void bakePizza(string topping1)
{
  cout << "Here is your " << topping1 << " pizza!\n";
}

void bakePizza(string topping1, string topping2)
{
  cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}