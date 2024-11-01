#include <stdio.h>

int sum(int*, int*);

int sum(int* x, int* y){
    *x = 10;
    return *x + *y; 
}

int main() { 
    int x = 5;
    int y = 6;
    printf("x = %d\ny = %d\n", x, y);
    printf("The sum of a and b is : %d\n", sum(&x, &y));
    printf("%d\n", *(&x));
    return 0;
}