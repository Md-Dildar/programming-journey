#include <stdio.h>

int main()
{
    float pi = 3.14159;
    float r;
    printf("Enter value of radius: ");
    scanf("%f", &r);
    printf("Area of circle is: %.2f\n", pi * r * r);

    return 0;
}