#include <stdio.h>
int main()
{
    double num = 9.99;
    printf("Size of double: %d bytes\n", sizeof(num));

    float num2 = 3.45f;
    printf("Size of float: %d bytes\n", sizeof(num2));

    float fnum = 5.565; // implicit type casting from double to float
    printf("Size of fnum: %d bytes\n", sizeof(fnum));

    return 0;
}
