#include <stdio.h>

int main()
{
    int x, y, temp;
    printf("Enter a number x: ");
    scanf("%d", &x);
    printf("Enter a number y: ");
    scanf("%d", &y);
    printf("Before swapping: x = %d and y = %d", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("After swapping: x = %d and y = %d", x, y);

    return 0;
}