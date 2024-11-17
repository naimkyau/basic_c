#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} Emp;

int main()
{
    typedef float niam;
    niam a = 4.92;
    printf("The value of a is %.2f \n", a);
    printf("\n");

    // typedef struct employee Emp;
    Emp e1;
    Emp *ptr1 = &e1;
    e1.code = 102;
    strcpy(e1.name, "Naim");
    e1.salary = 20000;

    printf("%d \t%.0f \t%s\n", e1.code, e1.salary, e1.name);
    printf("%d \t%.0f \t%s\n", ptr1->code, ptr1->salary, ptr1->name);

    return 0;
}