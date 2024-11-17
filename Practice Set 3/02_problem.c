#include <stdio.h>

int main() {
    int income, tax;
    printf("Input your income : \t");
    scanf("%d", &income);
    
    if(income<=250000){
        tax = 0;
    }
    else if(income>250000 && income<=500000){
        tax = 0.05 * (income - 250000);
    }
    else if(income>500000 && income<=1000000){
        tax = 0.05 * (500000 - 250000) + 0.2 * (income- 500000);
    }
    else {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000- 500000) + 0.3 * (income - 1000000);
    }
    printf("your tax amount is : \t%d", tax);

    return 0;
}