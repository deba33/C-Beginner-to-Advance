#include <stdio.h>

// function to calculate perimeter of a rectangle
int main()
{
    float length, breadth;

    printf("enter the length of rectangle: ");
    scanf("%f", &length);

    printf("enter the breadth of rectangle: ");
    scanf("%f", &breadth);

    float perimeter = 2 * (length + breadth);

    printf("The perimeter of the rectangle is %f", perimeter);
    return 0;
}