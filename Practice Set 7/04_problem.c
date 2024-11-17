#include <stdio.h>

int main()
{
    int n;
    printf("Input the value : ");
    scanf("%d", &n);
    int tbl[10];
    for (int i = 0; i < 10; i++)
    {
        tbl[i] = n * (i + 1);
        printf("The value of %d X %d =\t%d\n", n, i + 1, tbl[i]);
    }
    return 0;
}