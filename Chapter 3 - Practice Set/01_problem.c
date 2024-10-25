#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the number of 1st subject: ");
    scanf("%d", &a);
    printf("Enter the number of 2nd subject: ");
    scanf("%d", &b);
    printf("Enter the number of 3rd subject: ");
    scanf("%d", &c);

    if (a && b  && c > 100)
    {
        printf("Input is invalid.\n");
    }
    
    if (a && b  && c >= 33)
    {
        if (a+b+c >= 120) {
            printf("You are passed in the exam.\n");
        }
    }
    else{
        printf("You are failed in the exam.\n");
    }
    return 0;
}