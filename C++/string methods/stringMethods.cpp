#include <iostream>

using std::cin;
using std::cout;
using std::getline;
using std::string;

int main()
{

  string name;

  cout << "Enter your name: \n";
  getline(cin, name);

  if (name.empty())
  {
    cout << "the name is empty. Insert your name";
  }
  else
  {
     name.insert(name.length(), "$");

     name.erase(0,3);

    cout <<"white spaces at: " << name.find(' ') <<"\n" ;

    cout << "Your name is: " << name << " and it's " << name.length() << " characters long.\n";
    name.append("@mail.com");
    cout << "Your username is now: " << name << "\n";
    cout << "First letter of your name is: " << name.at(0) << "\n";
  }

 

  return 0;
}