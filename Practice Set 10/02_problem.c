#include <stdio.h>

int main() {
    int a;
    printf("Input the value of a : ");
    scanf("%d",&a);

    int num;
    FILE *ptr;
    ptr = fopen("Naim.txt", "w");
    for (int i = 1; i <=10; i++) {
        fprintf(ptr,"%d  X  %d  -----\t%d\n",a, i, i*a);
        printf("%d  X  %d  -----\t%d\n",a, i, i*a);
    }
    
    return 0;
}