#include <stdio.h>

// function to calculate cube of any number
int main()
{
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    float cube = num * num * num;
    printf("The cube of %f is %f", num, cube);
    return 0;
}