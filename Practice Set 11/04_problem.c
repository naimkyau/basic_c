#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));
    ptr[0]= 54;
    ptr[1]= 23;
    ptr[2]= 32;
    ptr[3]= 45;
    ptr[4]= 26;

    printf("\n");
    for (int i = 0; i < 5; i++){
        printf("%d\t", ptr[i]);
    }
    printf("\n");
    
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    ptr[5]= 34;
    ptr[6]= 31;
    ptr[7]= 37;
    ptr[8]= 74;
    ptr[9]= 46;

    for (int i = 5; i < 10; i++){
        printf("%d\t", ptr[i]);
    }

    free(ptr);
    return 0;
}