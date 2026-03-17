#include <stdio.h>

int main()
{
    int n, max = 0, ld;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        ld = n % 10;

        if (ld > max)
            max = ld;

        n = n / 10;
    }

    printf("Largest digit is: %d\n", max);

    return 0;
}