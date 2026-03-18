#include <stdio.h>

int main()
{
    int n, num, min;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        n = -n;
    }

    // Handle 0 directly
    if (n == 0)
    {
        printf("Smallest digit is: 0\n");
        return 0;
    }

    min = n % 10;  // first digit as min

    while (n > 0)
    {
        num = n % 10;
        if (num < min)
        {
            min = num;
        }
        n = n / 10;
    }

    printf("Smallest digit is: %d\n", min);

    return 0;
}