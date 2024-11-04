#include <stdio.h>

int main()
{
    int n1, n2, n3;
    int arr[3][10];
    int mul[] = {n1, n2, n3};

    for (int n = 0; n < 3; n++)
    {
        printf("Input n%d : ",n+1);
        scanf("%d",&6
        mul[n]);
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j+1);
        }
    }
        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}