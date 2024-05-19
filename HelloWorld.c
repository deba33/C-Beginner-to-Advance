#include <stdio.h>

// calculate sum from 5 to 50 incl 5 & 50
int main()
{

    int sum = 0;
    for (int i = 5; i <= 50; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);

    return 0;
}