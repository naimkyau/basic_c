#include <stdio.h>

int count(int arr[], int n)
{
    int positive = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positive++;
        }
    }
    return positive;
}

int main()
{
    int arr[] = {1, 2, -3, 4, 5, -6, 7, 8, 0, 10};
    printf("The value of ptr is : %d\n", count(arr, 10));
    return 0;
}