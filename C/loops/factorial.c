#include <stdio.h>

// Program: Calculate factorial of a number using loop

int main()
{
    int x, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        factorial *= i;
    }
    printf("Factorial of %d is: %d\n", x, factorial);

    return 0;
}
