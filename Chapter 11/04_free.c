#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    printf("How many number do you need : ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * 4);
    printf("Enter %d Number\n", n);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Number %d \t: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%.d\t", ptr[i]);
    }

    ptr = (int *)realloc(ptr, n * 4);
    printf("\nRealloc number : ");
    scanf("%d", &n);

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%.d\t", ptr[i]);
    }

    free(ptr);
    return 0;
}
