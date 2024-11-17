#include <stdio.h>

/*Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().*/

void* sum(int x, int y){
    int s = x+y;
    printf("The sum is \t:%d\n", s);
    // return &s;
}
void* average(float x, float y){
    float avg = (x+y)/2.0;
    printf("The average is \t:%.2f\n", avg);
    // return &avg;
}
int main() {
    int a = 2;
    int b = 8;
    int* ptr1 = sum(a, b);
    float* ptr2 = average(a, b);

    printf("Adderss of sum\t:%p\n",&ptr1);
    printf("Adderss of avg\t:%p\n",&ptr2);
    return 0;
}