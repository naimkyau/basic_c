#include <stdio.h>

int sum(int, int);

int sum(int x, int y){
    int result = x+y;
    return result; 
}

int main() {
    int a = 2;
    int b = 3;
    printf("The sum of a and b is : %d\n", sum(a, b));
    return 0;
}