#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("It is an alphabet");
    }
    else if (ch >= 0 && ch <= 9)
        printf("It is a number");
    else
    {
        printf("%c is neither alphabet nor number", ch);
    }

    return 0;
}