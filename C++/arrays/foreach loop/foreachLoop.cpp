#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{

  string students[] = {"Spongebob", "Patrick", "Squidward"};

  for(string student : students){
    cout << student << "\n";
  }



  int grades[]={65, 72, 81, 93};

    for(int grade : grades){
    cout << grade << "\n";
  }



  return 0;
}