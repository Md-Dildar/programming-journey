#include <stdio.h>

int main()
{
    int sum = 0, x, i;
    printf("Enter number: ");
    scanf("%d", &x);
    for (i = 1; i <= x; i++)
    {
        sum = sum + i;
    }
    printf("sum = %d\n", sum);

    return 0;
}