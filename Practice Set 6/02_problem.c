/*  Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why?    */


#include <stdio.h>

int pass(int*);
int pass(int* x){
    printf("The address of i pass \t: %p\n", x);
}

int main() {
    int i=7;
    int* j=&i;
    printf("The address of i main \t: %p\n", &i);
    pass(j);
    return 0;
}