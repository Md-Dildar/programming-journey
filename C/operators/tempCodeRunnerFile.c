#include <stdio.h>

int main()
{
    int x;
    printf("Enter year: ");
    scanf("%d", &x);
    if (x % 4 == 0)
    {
        printf("%d is a leap year\n", x);
    }
    else
    {
        printf("%d is not a leap year\n", x);
    }

    return 0;
}