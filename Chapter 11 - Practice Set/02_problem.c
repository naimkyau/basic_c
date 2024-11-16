#include <stdio.h>
#include <stdlib.h>

int main(){
    int n= 6;
    int *ptr;
    // ptr = (int *)calloc(n, 4);
    ptr = (int *)calloc(n, sizeof (int));       //

    printf("Enter %d Number\n", n);
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("Number %d \t: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    
    printf("\n");
    for (int i = 0; i < n; i++){
        printf("%d\t", ptr[i]);
    }

    free(ptr);
    return 0;
}