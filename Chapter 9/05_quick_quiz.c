#include <stdio.h>
#include <string.h>

struct employee
{
    int code; 
    float salary;
    char name[10];
};

void show(struct employee e);
void show(struct employee e){
    printf("Code is \t: %d\n", e.code);
    printf("Salary is \t: %f\n", e.salary);
    printf("Name is \t: %s\n", e.name);
}

int main()
{
    struct employee e1;
    e1.code = 4511;
    e1.salary = 54.44;
    strcpy(e1.name, "Naim");
    show(e1);


    return 0;
}