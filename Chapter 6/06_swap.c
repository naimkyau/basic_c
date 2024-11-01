#include <stdio.h>

        // Swap work to exchange the values of two variables.
void swap(int*, int*);

void swap(int* a, int* b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;

}

int main() {
    int a=4, b=6;
    swap(&a, &b);
    printf("a = %d\nb = %d\n",a ,b);
    return 0;
}