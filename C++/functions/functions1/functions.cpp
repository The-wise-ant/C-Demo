#include <iostream>

using std::cout;
using std::cin;
using std::string;



void bdaySong(string name, int num);

int main(){


bdaySong("Frank", 43);
bdaySong("Kate", 28);
bdaySong("Mark", 13);

  return 0;
}

void bdaySong(string name, int num){
  cout<< "Happy birthday to " << name <<"!\n";
  cout<< "You are now " << num <<" Years old!\n\n";
}