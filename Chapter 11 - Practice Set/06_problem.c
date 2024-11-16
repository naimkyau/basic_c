#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *ptr;
    ptr = (int*)calloc(10, sizeof(int));
    for (int i = 0; i < 10; i++) {
        ptr[i] = 7 * (i + 1);
    }
    for (int i = 0; i < 10; i++){
        printf("7 X %d \t= %d\n",i+1,ptr[i]);
    }

    printf("------------\n");

    ptr = (int*) realloc(ptr, 15 * sizeof(int));
    for (int i = 10; i < 15; i++) {
        ptr[i] = 7 * (i + 1);
    }
    for (int i = 0; i < 15; i++){
        printf("7 X %d \t= %d\n",i+1,ptr[i]);
    }

    free(ptr);
    return 0;
}
