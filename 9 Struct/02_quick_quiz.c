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
    struct employee emp[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter details for employee %d\n", i + 1);

        printf("Enter code: ");
        scanf("%d", &emp[i].code);

        printf("Enter salary: ");
        scanf("%f", &emp[i].salary);

        printf("Enter name: ");
        scanf("%s", emp[i].name);
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Code: %d\n", emp[i].code);
        printf("Salary: %.2f\n", emp[i].salary);
        printf("Name: %s\n", emp[i].name);
    }

    return 0;
}