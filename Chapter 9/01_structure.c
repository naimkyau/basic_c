#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee emp1;

    emp1.code = 101;
    emp1.salary = 50000.5;
    strcpy(emp1.name, "Naim");

    printf("Employee Code\t: %d\n", emp1.code);
    printf("Employee Salary\t: %.2f\n", emp1.salary);
    printf("Employee Name\t: %s\n", emp1.name);

    return 0;
}
