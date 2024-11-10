#include <stdio.h>
#include <string.h>

struct bankacc
{
    int accNo;
    char name[20];
    float balance;
};


int main() {
    struct bankacc my;
    my.accNo = 102;
    strcpy(my.name, "Naim");
    my.balance = 10000.50;

    printf("%d\n%s\n%.2f\n", my.accNo, my.name, my.balance);

    
    return 0;
}