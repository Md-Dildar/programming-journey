#include <stdio.h>

int main()
{
    int n, min = 0, num;
    printf("Enter a number: ");
    scang("%d", &n);
    while (n > 0)
    {
        num = n % 10;
        if (num < min)
        {
            min = num;
        }
        n = n / 10;
    }
    printf("%d is the smallest digit", min);

    return 0;
}