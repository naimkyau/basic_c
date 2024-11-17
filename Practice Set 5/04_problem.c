#include <stdio.h>

// Fibonacci function
int fibonacci(int n) {
    if (n == 0) {
        return 0; // F(0)
    }
    if (n == 1) {
        return 1; // F(1)
    }
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    int n = 7; 
    printf("%d\n", fibonacci(n)); 
    return 0;
}
