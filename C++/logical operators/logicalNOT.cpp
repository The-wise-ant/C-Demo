#include <iostream>

using std::cin;
using std::cout;

int main()
{

    bool isOnline = true;

    if (!isOnline)
    {
        cout << "you are not online!";
    }

    else if (isOnline)
    {
        cout << "You are online!";
    }

    return 0;
}