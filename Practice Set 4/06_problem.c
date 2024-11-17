#include <stdio.h>

int main()
{
    printf("\n");
    int sum = 0, i;

    // for (int i = 0; i <= 10; i++)           // With for While loop
    // {
    //     sum += i;
    // }

    i = 0;
    do                                      // With Do While loop
    {
        sum += i;
        i++;
    } while (i <= 10);

    printf("sum = %d\n", sum);
    printf("\n");

    return 0;
}