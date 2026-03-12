#include <stdio.h>

int main()
{
    int start, end;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    for (int num = start; num <= end; num++)
    {
        int prime = 1;

        if (num <= 1)
            prime = 0;

        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime)
            printf("%d ", num);
    }

    return 0;
}