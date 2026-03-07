#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter a number: ");
    scanf("%d", &y);
    printf("Sum of %d and %d is: %d\n", x, y, x + y);

    return 0;
}