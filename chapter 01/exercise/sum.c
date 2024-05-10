#include <stdio.h>

// function to calculate sum of two numbers
int main()
{
    int a, b;

    printf("enter a: ");
    scanf("%d", &a);

    printf("enter b: ");
    scanf("%d", &b);

    int sum = a + b;
    printf(" a + b = %d", sum);
    return 0;
}