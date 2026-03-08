#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("Enter third number: ");
    scanf("%d", &z);
    if (x >= y && x >= z)
    {
        printf("%d is the largest number\n", x);
    }
    else if (y >= x && y >= z)
    {
        printf("%d is the largest number\n", y);
    }
    else
    {
        printf("%d is the largest number\n", z);
    }

    return 0;
}