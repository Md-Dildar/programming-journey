#include <stdio.h>

int main()
{
    int x, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x <= 1)
    {
        prime = 0;
    }
    else
    {
        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }

    if (prime == 1)
        printf("%d is a prime number\n", x);
    else
        printf("%d is not a prime number\n", x);

    return 0;
}