#include <iostream>

using std::cin;
using std::cout;
using std::string;

class Human
{
public:
  string name;
  int age;
  string occupation;

  Human(string name, int age, string occupation)
  {
    this->name = name;
    this->age = age;
    this->occupation = occupation;
  }

  void eat()
  {
    cout << this->name << " is eating. \n";
  };
};

class Dog
{
public:
  string name;
  int age;
  string breed;

  Dog(string denomination, int lifetime, string race)
  {
    name = denomination;
    age = lifetime;
    breed = race;
  }

  void introduceDog()
  {
    cout << "Name: " << this->name << "\n";
    cout << "Age: " << this->age << "\n";
    cout << "Occupation: " << this->breed << "\n";
  }
};

void IntroduceHuman(Human human);

int main()
{

  Human human1("Frank", 44, "Steelworker");
  IntroduceHuman(human1);
  cout << "*****************************\n";



  Dog dog1("Scooby", 6, "Labrador");

  dog1.introduceDog();
  

  return 0;
}

void IntroduceHuman(Human human)
{
  cout << "Name: " << human.name << "\n";
  cout << "Age: " << human.age << "\n";
  cout << "Occupation: " << human.occupation << "\n";
}