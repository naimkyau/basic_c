#include <stdio.h>

//Function prototype
int sum(int, int);

//function definition
int sum(int x, int y){
    int result = x+y;
    printf("The sum is : %d\n", result);
    return result;
}

int main() {
    int a = 2;
    int b = 3;
    sum(a, b);

    int c = 4;
    int d = 5;
    sum(c, d);

    return 0;
}