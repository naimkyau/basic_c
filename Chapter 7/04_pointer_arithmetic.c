#include <stdio.h>

int main() {
    // POINTER ARITHMETIC USEING INTEGER PENTER
    int a = 52;
    int *ptr_int = &a;
    printf("The adderss of a is : %u\n", &a);
    printf("The adderss of a is : %u\n", ptr_int);
    ptr_int++;
    printf("The adderss of a is : %u\n", ptr_int);
    
printf("\n");

    // POINTER ARITHMETIC USEING CHARACTER PENTER
    char b = 'n';
    char *ptr_char = &b;
    printf("The adderss of a is : %u\n", &b);
    printf("The adderss of a is : %u\n", ptr_char);
    ptr_char++;
    printf("The adderss of a is : %u\n", ptr_char);

    return 0;
}