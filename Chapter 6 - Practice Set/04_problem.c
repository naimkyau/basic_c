#include <stdio.h>

//Write a function and pass the value by reference.

int pass_value_by_reference(int*);
int pass_value_by_reference(int* x){
    *x = 5;
    printf("%d\n", *x);
}
int main() {
    int a = 8;
    int* b = &a;
    printf("%d\n",a);
    pass_value_by_reference(b);

    
    return 0;
}