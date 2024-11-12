#include <stdio.h>

int main() {
    int num;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("Naim2.txt", "r");
    ptr2 = fopen("Naim5.txt", "w");

    fscanf(ptr, "%d", &num);
    fprintf(ptr2,"%d",num*2);
    printf("%d",num*2);
    

    fclose (ptr);
    return 0;
}