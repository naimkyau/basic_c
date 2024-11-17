#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main() {
    struct employee emp1 = {102, 5242, "Naim"};

    printf("%d\n%.2f\n%s\n", emp1.code, emp1.salary, emp1.name);

    return 0;
}   