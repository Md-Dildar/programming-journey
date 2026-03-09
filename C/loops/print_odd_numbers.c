#include <stdio.h>

// program: print odd numbers form 1 to 20

int main()
{
    for (int i = 1; i <= 20; i += 2)
    {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}