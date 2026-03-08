#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a letter: ");
    scanf(" %c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("The given letter is vowel\n");
    }
    else
    {
        printf("The given letter is consonant\n");
    }

    return 0;
}