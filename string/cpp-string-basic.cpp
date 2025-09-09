#include <iostream>
using namespace std;
int main()
{
    string str1 = "Hello ";
    string str2 = "World!";
    // string str3 = str1 + str2; // Concatenation
    //str1 += str2; // Concatenation using +=
    str1.append(str2); // Concatenation using append()

    cout << str1 << endl; // Output: Hello World!

    cout << "Length of str1: " << str1.length() << endl; // Output: Length of str1: 12

    return 0;
}
