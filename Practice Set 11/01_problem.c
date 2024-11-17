#include <stdio.h>
#include <stdlib.h>

int main(){
    int n= 6;
    int *ptr;
    ptr = (int *)calloc(6, sizeof(int));
    ptr[0]= 354;
    ptr[1]= 231;
    ptr[2]= 372;
    ptr[3]= 745;
    ptr[4]= 246;
    ptr[5]= 645;

    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%d\t", ptr[i]);
    }
    printf("\n");
    
    free(ptr);
    return 0;
}