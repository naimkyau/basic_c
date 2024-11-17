#include <stdio.h>
#include <string.h>

struct employee
{
    char name[10];
    int code; 
    float salary;
}; 

int main()
{
    struct employee emp1;
    strcpy(emp1.name, "Naim");
    emp1.code = 102;
    emp1.salary = 20000;

    struct employee *ptr;
    ptr = &emp1;
    
    printf("%s\n", (*ptr).name);
    printf("%d\n", (*ptr).code);
    printf("%.2f\n", (*ptr).salary);
    printf("\n");
    printf("%s\n", ptr->name);
    printf("%d\n", ptr->code);
    printf("%.2f\n", ptr->salary);
    printf("\n");
    printf("%p\n", &ptr->name);
    printf("%p\n", &ptr->code);
    printf("%p\n", &ptr->salary);

    return 0;
}