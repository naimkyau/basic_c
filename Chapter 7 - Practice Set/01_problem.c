#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;
    printf("The value of ptr is : %d\n", *ptr);
    ptr+=2;
    printf("The value of ptr is : %d\n", *ptr);
    return 0;
}