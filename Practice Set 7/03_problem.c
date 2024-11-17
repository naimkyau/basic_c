#include <stdio.h>

int main()
{
    int tbl[10];
    for (int i = 0; i < 10; i++)
    {
        tbl[i] = 5 * (i + 1);
        printf("The value of 5 X %d =\t%d\n", i + 1, tbl[i]);
    }
    return 0;
}