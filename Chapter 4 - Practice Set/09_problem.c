#include <stdio.h>

int main()
{
    int i=1, multi = 1 ,n;
    printf("n = ");
    scanf("%d", &n);
    printf("The Factorial is = ");


    while (i <= n) {
        multi *= i ;
        printf("%d",i);
        if (i==n){
            break;
        }
        printf(" X ");
        i++;
    }

    printf(" = %d", multi);

    return 0;
}       