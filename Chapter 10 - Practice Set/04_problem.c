#include <stdio.h>
#include <string.h>

struct employee{
    char name[20];
    int salary;
};

int main() {
    struct employee e[2];
    for (int i = 0; i < 2; i++){
        printf("Enter the name and salary of %d emplyee\n\t\t",i+1);
        scanf("%19s %d",e[i].name, &e[i].salary);
    }
    
    FILE *ptr;
    ptr = fopen("Naim4.txt", "w");

    for (int i = 0; i < 2; i++){
        fprintf(ptr, "%s, %d\n", e[i].name, e[i].salary);
    }
    fclose(ptr);
    return 0;
}
