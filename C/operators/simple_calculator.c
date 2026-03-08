#include <stdio.h>

int main()
{
    float x, y;
    char op;
    printf("Enter first number: ");
    scanf(" %f", &x);
    printf("Enter operator(+,-,*,/): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf(" %f", &y);

    if (op == '+')
    {
        printf("Sum is: %.2f\n", x + y);
    }
    else if (op == '-')
    {
        printf("Difference is: %.2f\n", x - y);
    }
    else if (op == '*')
    {
        printf("Product is: %.2f\n", x * y);
    }
    else if (op == '/')
    {
        if (y != 0)
        {
            printf("Division is: %.2f\n", x / y);
        }
        else
        {
            printf("Division by zero is not possible\n");
        }
    }
    else
    {
        printf("Invalid operator\n");
    }

    return 0;
}