/*Write a program to change the value of a variable to ten times of its current
value.*/

#include <stdio.h>

int ten_times_a (int*);
int ten_times_a (int* x){
    int result = *x * 10;
    return result;
}

int main() {
    int a = 5;
    int* b = &a;
    printf("The value of a is \t: %d\n", a);
    printf("Ten times of a is \t: %d\n", ten_times_a(b));
    
    return 0;
}