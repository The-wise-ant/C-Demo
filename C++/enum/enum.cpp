#include <iostream>

using std::cin;
using std::cout;
using std::string;

enum Day{sunday, monday, tuesday, wednesday, thursday, friday, saturday};

int main()
{

Day today = friday;

switch (today)
{
case 0:
 cout << "today is sunday";
  break;
case 1:
 cout << "today is monday";
  break;
case 2:
 cout << "today is tuesday";
  break;
case 3:
 cout << "today is wednesday";
  break;
case 4:
 cout << "today is thursday";
  break;
case 5:
 cout << "today is friday";
  break;
case 6:
 cout << "today is saturday";
  break;
default:
 cout << "invalid data";
  break;
}
 
 

  return 0;
}

