#include <stdio.h>

// Program: Check whether a number is palindrome

int main()
{
    int num, original, reverse = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    while (num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    if (original == reverse)
    {
        printf("The Given number is palindrome\n");
    }
    else
    {
        printf("The given number is not palindrome");
    }

    return 0;
}