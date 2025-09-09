// switch case

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
        break;
    case 2:
        cout << "Hello" << endl;
        break;
    default:
        cout << "Bye" << endl;
    case 3:
        cout << "Hola" << endl;
        break;
    case 4:
        cout << "LoL" << endl;
        break;
    }

    return 0;
}
