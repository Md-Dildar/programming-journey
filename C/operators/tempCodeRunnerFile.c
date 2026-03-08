#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Enter maths number: ");
    scanf("%d", &a);
    printf("Enter physics number: ");
    scanf("%d", &b);
    printf("Enter chemistry number: ");
    scanf("%d", &c);
    printf("Enter english number: ");
    scanf("%d", &d);
    printf("Enter hindi number: ");
    scanf("%d", &e);
    int total = a + b + c + d + e;
    if (total >= 90 && total <= 100)
    {
        printf("Your grade is: A\n");
    }
    else if (total >= 80 && total <= 89)
    {
        printf("Your grade is: B\n");
    }
    else if (total >= 70 && total <= 79)
    {
        printf("Your grade is: C\n");
    }
    else if (total >= 60 && total <= 69)
    {
        printf("Your grade is: D\n");
    }
    else
    {
        printf("Your grade is: f\n");
    }

    return 0;
}