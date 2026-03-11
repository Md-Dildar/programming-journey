#include <stdio.h>

int main()
{
    int x, prime = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            printf("%d is not a prime number", x);
            break;
        }
        else if (prime == 0)
        {
            printf("%d is a prime number", x);
            break;
        }
    }
    return 0;
}