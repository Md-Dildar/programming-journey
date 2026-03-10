#include <stdio.h>

// Program: Print Fibonacci series

int main()
{
    int n, a = 0, b = 1, c;
    printf("Enter series: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}