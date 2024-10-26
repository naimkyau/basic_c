#include <stdio.h>

int main()
{
    int sum = 0, i = 1;
    while (i <= 10)
    {
        sum = i + sum;
        i++;
    }

    printf("sum = %d", sum);
    return 0;
}