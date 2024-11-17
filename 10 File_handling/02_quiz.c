#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("naim.txt", "r");
    float num;
    if (ptr == NULL){
        printf("File does not exists\n");
    }
    else{
        fscanf(ptr, "%f", &num);
        printf("%.2f\n", num);
    }
    fclose (ptr);
    return 0;
}