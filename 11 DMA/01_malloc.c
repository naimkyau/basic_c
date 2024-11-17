#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=5;
    float *ptr;
    ptr = (float*)malloc(n * 4);
    printf("Enter %d Number\n", n);
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("Number %d \t: ", i + 1);
        scanf("%f", &ptr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%.2f\t", ptr[i]);
    }
    free(ptr);
    return 0;
}
