#include <iostream>

using std::cin;
using std::cout;
using std::string;

class Animal
{
public:
  bool alive = true;
  void eat()
  {
    cout << "This animal is eating...\n";
  }
};

class Dog : public Animal
{
public:
  void bark()
  {
    cout << "This dog goes woof...\n";
  }
};

class Cat : public Animal
{
public:
  void meow()
  {
    cout << "This cat goes meow...\n";
  }
};

int main()
{

  Animal animal;
  animal.eat();

  cout << "*********************\n";
  Dog dog;
  dog.bark();
  dog.eat();

  cout << "*********************\n";
  Cat cat;
  cat.meow();
  cat.eat();

  return 0;
}