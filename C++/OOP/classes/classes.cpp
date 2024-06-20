#include <iostream>

using std::cin;
using std::cout;
using std::string;

class Human{
public:
string name;
int age;
string occupation;


void eat(){
  cout << this->name << " is eating. \n";
};


};




int main()
{

Human human1;

human1.name = "Frank";
human1.eat();

  return 0;
}

