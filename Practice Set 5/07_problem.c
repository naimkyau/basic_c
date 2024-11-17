
#include <stdio.h>

int pattern(int);

int pattern(int x)
{
    for (int a = 0; a < x; a++)
    {
        for ( int b = 0; b < 2*a+1; b++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n = 3;
    pattern(n);
    return 0;
}