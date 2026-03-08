#include <stdio.h>

int main()
{
    int a;

    printf("Enter maths marks: ");
    scanf("%d", &a);

    if (a < 0 || a > 100)
    {
        printf("Invalid marks\n");
    }
    else if (a >= 90)
    {
        printf("Your grade is: A\n");
    }
    else if (a >= 80)
    {
        printf("Your grade is: B\n");
    }
    else if (a >= 70)
    {
        printf("Your grade is: C\n");
    }
    else if (a >= 60)
    {
        printf("Your grade is: D\n");
    }
    else
    {
        printf("Your grade is: F\n");
    }

    return 0;
}