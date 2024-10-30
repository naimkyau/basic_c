#include <stdio.h>

// //Function prototype
int factorial(int);

// //function definition
int factorial(int a){
    int frl=1;
    for (int i = 1; i <=a; i++) {
        frl *=i;  
    }
    return frl;
}

int main() {
    int a=6;
    int result = factorial(a);
    printf("Factorial is : %d\n", result);
    return 0;
}