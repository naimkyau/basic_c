#include <stdio.h>

// Write a program to print the address of a variable. Use this address to get the
// value of the variable.

int main() {
    int a = 2;
    int* b = &a;
    printf("The address of a is\t: %p\n", &a);
    printf("The value of a is\t: %d\n", *b );
    return 0;
}