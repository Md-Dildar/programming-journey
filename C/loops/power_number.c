#include <stdio.h>

int main()
{
    int x, y, square = 1;
    printf("Enter base: ");
    scanf("%d", &x);
    printf("Enter power: ");
    scanf("%d", &y);
    while (y > 0)
    {
        square = square * x;
        y--;
    }
    printf("Result: %d\n", square);

    return 0;
}