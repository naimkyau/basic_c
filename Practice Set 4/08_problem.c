#include <stdio.h>

int main()
{
    int i, multi = 1 ,n;
    printf("n = ");
    scanf("%d", &n);
    printf("The Factorial is = ");
    for (int i = 1; i <= n; i++)
    {
        multi *= i ;
        printf("%d",i);
        if (i==n)
        {
            break;
        }
        
        printf(" X ");
    }

    printf(" = %d", multi);

    return 0;
}       