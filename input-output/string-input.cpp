#include <iostream>
using namespace std;
int main()
{
    string str;

    cout << "Enter a string: ";

    // cin >> str; // Input: Hello World

    // cout << "You entered: " << str << endl; // Output: Hello

    getline(cin, str); // Input: Hello World

    cout << "You entered: " << str << endl; // Output: Hello World

    return 0;
}
