#include <stdio.h>

int main()
{
    int a = 1972, i, sum = 0, multi = 1;
    for (int i = 1; i <= 10; i++)
    {
        multi = i * a;
        printf("%d X %d = %d\n", a, i, multi);
        sum += multi;
    }
    printf("\n");
    printf("The sum of multiplication is : %d", sum);

    return 0;
}       