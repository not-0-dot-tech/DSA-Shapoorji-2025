#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    scanf("%2d", &a);
    fflush(stdin); // clear input buffer
    scanf("%2d", &b);

    
    printf("%d %d", a, b);
    return 0;
}