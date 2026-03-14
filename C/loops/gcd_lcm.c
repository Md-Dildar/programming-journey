#include <stdio.h>

int main()
{
    int a, b, x, y, temp, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;

    if (gcd != 0)
        lcm = (a * b) / gcd;
    else
        lcm = 0;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}