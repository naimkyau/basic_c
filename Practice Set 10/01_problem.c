#include <stdio.h>

int main() {
    int num;
    FILE *ptr;
    ptr = fopen("Naim.txt", "r");
    fscanf(ptr, "%d", &num);
    printf("%d\n",num);
    
    fscanf(ptr, "%d", &num);
    printf("%d\n",num);
    
    fscanf(ptr, "%d", &num);
    printf("%d\n",num);
    return 0;
}