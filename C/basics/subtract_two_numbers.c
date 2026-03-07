#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("Subtraction of %d and %d is: %d\n", x, y, x - y);

    return 0;
}