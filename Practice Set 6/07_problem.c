/*Write a program to change the value of a variable to ten times of its current
value.*/

#include <stdio.h>

void ten_times_a (int);
void ten_times_a (int x){
    x = x * 10;
}

int main() {
    int a = 5;
    printf("The value of a is \t: %d\n", a);
    ten_times_a(a);
    printf("The value of a is \t: %d\n", a);
    
    return 0;
}