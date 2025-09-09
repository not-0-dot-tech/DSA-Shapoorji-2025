// switch-case/2.cpp
// Demonstration of fall-through behavior in switch-case

#include <iostream>
using namespace std;
int main()
{
    int action;
    cin >> action;

    switch (action)
    {
    case 1:
        cout << "Hi" << endl;
    case 2:
        cout << "Hello" << endl;
    case 3:
        cout << "Hola" << endl;
        break;
    case 4:
        cout << "LoL" << endl;
        break;
    default:
        cout << "Bye" << endl;
    }

    return 0;
}
