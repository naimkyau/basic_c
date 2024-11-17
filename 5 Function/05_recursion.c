#include <stdio.h>

// //Function prototype
int factorial(int);

// //function definition
int factorial(int n){
    if (n == 1 || n == 0){
        return 1;
    }
    //factorial(n) = factorial(n-1) X n
    return factorial(n-1) *n;
}

int main() {
    int a=6;
    int result = factorial(a);
    printf("Factorial is : %d\n", factorial(a));
    return 0;
}