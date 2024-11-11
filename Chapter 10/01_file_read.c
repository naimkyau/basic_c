#include <stdio.h>

int main() {
    FILE * ptr;
    ptr = fopen("naim.txt", "r");
    float num;
    fscanf(ptr, "%f", &num);
    printf("%.2f\n", num);
    
    fscanf(ptr, "%f", &num);
    printf("%.2f\n", num);
    return 0; 
}