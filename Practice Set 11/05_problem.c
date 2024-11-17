#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *ptr;
    ptr = (int*)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++){
        printf("%d X %d \t= %d\n",7,i+1,7*(i+1));
    }
    printf("------------\n");
    ptr = (int*) realloc(ptr, 15 * sizeof(int));
    for (int i = 0; i < 15; i++){
        printf("%d X %d \t= %d\n",7,i+1,7*(i+1));
    }

    free(ptr);
    return 0;
}