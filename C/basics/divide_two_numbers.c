#include <stdio.h>

int main()
{
    float x, y;
    printf("Enter first number: ");
    scanf("%f", &x);
    printf("Enter second number: ");
    scanf("%f", &y);
    if (y != 0)
    {
        printf("Division of %.2f and %.2f is: %.2f\n", x, y, x / y);
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}